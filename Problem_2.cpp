
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{    
double x,y,z;

   		cout<<"What is your meter readings this month (in gallons):"; 
		cin >> x; 

    	cout<<"\nWhat is your the readings from the previous month (in gallons):"; 
		cin >> y; 

    	cout<<"\nWhat is your unpaid balance: P";
		cin >> z; 

    if (z > 0)
{
	cout <<"\nYour bill is: P " << fixed << showpoint << setprecision (2) << (35+(x*1.10)+(y*1.10)+20+z); 

}
	else
{
	cout <<"Your bill is: P " <<fixed << showpoint << setprecision (2) << (35+(x*1.10)+(y*1.10));
}

 	_getch();
	return 0;
}
