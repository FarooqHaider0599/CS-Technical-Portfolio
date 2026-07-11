  #include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"How many array elements you want: ";
    cin>>n;

    int arr[n];

    // Input
    cout<<"Enter Array Elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // Sorting in ascending order
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Output
    cout<<"Array in Ascending Order:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}