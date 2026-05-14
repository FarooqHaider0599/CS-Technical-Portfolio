// Author : Farooq Haider , Saad Haider , Maaz Ali , Ahmad Ifthikhar , Ibraheem Baig
// Purpose : Hospital Management System 
//           A comprehensive console-based C++ application developed 
//           for 1st Semester BCS coursework. It allows users to 
//           register patients, assign doctors, manage room allocation,
//           search patients, discharge patients, and view hospital status.
//           Demonstrates the use of structures, arrays, pointers, and 
//           modular programming in C++.

#include <iostream>
#include <string>
using namespace std;

// ============================================================
//   STRUCTURES — used to store data for patients and doctors
// ============================================================

struct Doctor {
    int id;
    string name;
    string specialization;
    bool isAvailable;   // true = free, false = busy
};

struct Patient {
    int id;
    string name;
    int age;
    string gender;
    string disease;
    int roomNumber;       // 0 means no room assigned yet
    int assignedDoctorId; // 0 means no doctor assigned yet
    bool isAdmitted;      // true = currently in hospital
};

// ============================================================
//   GLOBAL DATA — our "database" stored in simple arrays
// ============================================================

const int MAX_PATIENTS = 50;
const int MAX_DOCTORS  = 10;
const int MAX_ROOMS    = 20;

Patient patients[MAX_PATIENTS];
Doctor  doctors[MAX_DOCTORS];
bool    roomOccupied[MAX_ROOMS + 1]; // index 1..20, true = room taken

int totalPatients = 0;
int totalDoctors  = 0;
int nextPatientId = 1; // auto-increment patient IDs


// ============================================================
//   HELPER FUNCTIONS
// ============================================================

// Find a patient by their ID and return a pointer to them.
// Returns nullptr if not found.
Patient* findPatient(int id) {
    for (int i = 0; i < totalPatients; i++) {
        if (patients[i].id == id && patients[i].isAdmitted) {
            return &patients[i];
        }
    }
    return nullptr;
}

// Find a doctor by their ID and return a pointer to them.
Doctor* findDoctor(int id) {
    for (int i = 0; i < totalDoctors; i++) {
        if (doctors[i].id == id) {
            return &doctors[i];
        }
    }
    return nullptr;
}

// Find the first free room number (1-20). Returns 0 if all full.
int findFreeRoom() {
    for (int r = 1; r <= MAX_ROOMS; r++) {
        if (!roomOccupied[r]) {
            return r;
        }
    }
    return 0; // no room available
}

// Print a simple divider line
void printLine() {
    cout << "--------------------------------------------" << endl;
}


// ============================================================
//   FEATURE 1 — Add a new patient
// ============================================================

void addPatient() {
    if (totalPatients >= MAX_PATIENTS) {
        cout << "Sorry, the hospital is at full patient capacity!" << endl;
        return;
    }

    // Find a free room first
    int room = findFreeRoom();
    if (room == 0) {
        cout << "Sorry, no rooms are available right now." << endl;
        return;
    }

    Patient newPatient;
    newPatient.id               = nextPatientId++;
    newPatient.roomNumber       = room;
    newPatient.assignedDoctorId = 0;      // no doctor yet
    newPatient.isAdmitted       = true;

    cout << "\n--- Register New Patient ---" << endl;
    cout << "Enter patient name   : ";
    cin.ignore();
    getline(cin, newPatient.name);

    cout << "Enter age            : ";
    cin >> newPatient.age;

    cout << "Enter gender (M/F)   : ";
    cin >> newPatient.gender;

    cout << "Enter disease/symptom: ";
    cin.ignore();
    getline(cin, newPatient.disease);

    // Save the patient and mark the room as taken
    patients[totalPatients] = newPatient;
    totalPatients++;
    roomOccupied[room] = true;

    cout << "\n Patient registered successfully!" << endl;
    cout << "  Patient ID  : " << newPatient.id   << endl;
    cout << "  Room Number : " << room             << endl;
}


// ============================================================
//   FEATURE 2 — Search for a patient by ID
// ============================================================

void searchPatient() {
    cout << "\n--- Search Patient ---" << endl;
    cout << "Enter patient ID: ";
    int id;
    cin >> id;

    // Use our findPatient helper — it returns a pointer
    Patient* p = findPatient(id);

    if (p == nullptr) {
        cout << "No admitted patient found with ID " << id << endl;
        return;
    }

    printLine();
    cout << "Patient ID   : " << p->id       << endl;
    cout << "Name         : " << p->name     << endl;
    cout << "Age          : " << p->age      << endl;
    cout << "Gender       : " << p->gender   << endl;
    cout << "Disease      : " << p->disease  << endl;
    cout << "Room Number  : " << p->roomNumber << endl;

    if (p->assignedDoctorId != 0) {
        Doctor* d = findDoctor(p->assignedDoctorId);
        if (d != nullptr)
            cout << "Doctor       : " << d->name << " (" << d->specialization << ")" << endl;
    } else {
        cout << "Doctor       : Not assigned yet" << endl;
    }
    printLine();
}


// ============================================================
//   FEATURE 3 — Assign a doctor to a patient
// ============================================================

void assignDoctor() {
    cout << "\n--- Assign Doctor to Patient ---" << endl;

    cout << "Enter patient ID : ";
    int pid;
    cin >> pid;

    Patient* p = findPatient(pid);
    if (p == nullptr) {
        cout << "Patient not found." << endl;
        return;
    }

    // Show available doctors
    cout << "\nAvailable Doctors:" << endl;
    bool anyFree = false;
    for (int i = 0; i < totalDoctors; i++) {
        if (doctors[i].isAvailable) {
            cout << "  ID: " << doctors[i].id
                 << "  Name: " << doctors[i].name
                 << "  (" << doctors[i].specialization << ")" << endl;
            anyFree = true;
        }
    }

    if (!anyFree) {
        cout << "No doctors are available right now." << endl;
        return;
    }

    cout << "\nEnter doctor ID to assign: ";
    int did;
    cin >> did;

    Doctor* d = findDoctor(did);
    if (d == nullptr || !d->isAvailable) {
        cout << "Invalid or unavailable doctor ID." << endl;
        return;
    }

    // Free the previous doctor if one was already assigned
    if (p->assignedDoctorId != 0) {
        Doctor* prev = findDoctor(p->assignedDoctorId);
        if (prev != nullptr) prev->isAvailable = true;
    }

    // Link patient and doctor using their IDs
    p->assignedDoctorId = d->id;
    d->isAvailable      = false;

    cout << "\n Dr. " << d->name << " assigned to " << p->name << " successfully!" << endl;
}


// ============================================================
//   FEATURE 4 — Discharge a patient
// ============================================================

void dischargePatient() {
    cout << "\n--- Discharge Patient ---" << endl;
    cout << "Enter patient ID: ";
    int id;
    cin >> id;

    Patient* p = findPatient(id);
    if (p == nullptr) {
        cout << "Patient not found." << endl;
        return;
    }

    // Free the room
    roomOccupied[p->roomNumber] = false;

    // Free the doctor
    if (p->assignedDoctorId != 0) {
        Doctor* d = findDoctor(p->assignedDoctorId);
        if (d != nullptr) d->isAvailable = true;
    }

    // Mark patient as discharged
    p->isAdmitted = false;

    cout << "\n " << p->name << " has been discharged successfully." << endl;
    cout << "  Room " << p->roomNumber << " is now free." << endl;
}


// ============================================================
//   FEATURE 5 — Display all currently admitted patients
// ============================================================

void displayAllPatients() {
    cout << "\n--- All Admitted Patients ---" << endl;

    bool found = false;
    for (int i = 0; i < totalPatients; i++) {
        if (patients[i].isAdmitted) {
            found = true;
            printLine();
            cout << "ID      : " << patients[i].id      << endl;
            cout << "Name    : " << patients[i].name    << endl;
            cout << "Age     : " << patients[i].age     << endl;
            cout << "Disease : " << patients[i].disease << endl;
            cout << "Room    : " << patients[i].roomNumber << endl;

            if (patients[i].assignedDoctorId != 0) {
                Doctor* d = findDoctor(patients[i].assignedDoctorId);
                if (d != nullptr)
                    cout << "Doctor  : " << d->name << endl;
            } else {
                cout << "Doctor  : Not assigned" << endl;
            }
        }
    }

    if (!found) {
        cout << "No patients are currently admitted." << endl;
    }
    printLine();
}


// ============================================================
//   FEATURE 6 — Display all doctors and their status
// ============================================================

void displayDoctors() {
    cout << "\n--- Doctor List ---" << endl;
    printLine();
    for (int i = 0; i < totalDoctors; i++) {
        cout << "ID             : " << doctors[i].id             << endl;
        cout << "Name           : " << doctors[i].name           << endl;
        cout << "Specialization : " << doctors[i].specialization << endl;
        cout << "Status         : " << (doctors[i].isAvailable ? "Available" : "Busy") << endl;
        printLine();
    }
}


// ============================================================
//   LOAD SAMPLE DATA — some doctors pre-loaded at startup
// ============================================================

void loadSampleDoctors() {
    doctors[0] = {1, "Dr. Ahmed",   "Cardiology",   true};
    doctors[1] = {2, "Dr. Sara",    "Neurology",    true};
    doctors[2] = {3, "Dr. Hassan",  "Orthopedics",  true};
    doctors[3] = {4, "Dr. Fatima",  "Pediatrics",   true};
    doctors[4] = {5, "Dr. Ali",     "General",      true};
    totalDoctors = 5;

    // Mark all rooms as free at the start
    for (int r = 0; r <= MAX_ROOMS; r++) {
        roomOccupied[r] = false;
    }
}


// ============================================================
//   MAIN MENU
// ============================================================

void showMenu() {
    cout << "\n============================================" << endl;
    cout << "       HOSPITAL MANAGEMENT SYSTEM          " << endl;
    cout << "============================================" << endl;
    cout << "  1. Register New Patient"                   << endl;
    cout << "  2. Search Patient by ID"                   << endl;
    cout << "  3. Assign Doctor to Patient"               << endl;
    cout << "  4. Discharge Patient"                      << endl;
    cout << "  5. View All Admitted Patients"             << endl;
    cout << "  6. View All Doctors"                       << endl;
    cout << "  0. Exit"                                   << endl;
    cout << "============================================" << endl;
    cout << "  Enter your choice: ";
}


// ============================================================
//   MAIN FUNCTION — program starts here
// ============================================================

int main() {
    loadSampleDoctors(); // load 5 doctors at startup

    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addPatient();        break;
            case 2: searchPatient();     break;
            case 3: assignDoctor();      break;
            case 4: dischargePatient();  break;
            case 5: displayAllPatients();break;
            case 6: displayDoctors();    break;
            case 0: cout << "\nThank you! Goodbye.\n"; break;
            default: cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
