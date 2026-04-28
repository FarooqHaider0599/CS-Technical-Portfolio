//Author:M.Farooq Haider
//Purpose:To demonstrate function overloading by calculating an electricity bill with three different charge structures 


#include<iostream>
using namespace std;
class Electricity
{
	public:
		float bill(int units)
		{
		 return units*15;	
		}
		float bill(int units,float tax)
		{
		return (units*15)+tax;
		}
		float bill(int units,float tax,float surcharge)
		{
		return (units*15)+tax+surcharge;
		}
};
int main()
{
 Electricity e;
 int units;
 float tax,surcharge;
 cout<<"\n---Electricity Bill---\n";
 cout<<"Enter Units: ";
 cin>>units;
 cout<<"Enter Tax:";
 cin>>tax;
 cout<<"Enter Surcharge:";
 cin>>surcharge;
 cout<<"Bill without Tax: "<<e.bill(units)<<endl;
 cout<<"Bill with tax: "<<e.bill(units,tax)<<endl;
 cout<<"Bill with tax and surcharge: "<<e.bill(units,tax,surcharge)<<endl;
 return 0;	
}
	
