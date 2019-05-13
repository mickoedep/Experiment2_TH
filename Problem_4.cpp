#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int x;
	
	cout << "Counting numbers from : . . . . . " <<endl;

	x=1;

	for (x=1;x<=10;x++)
	{
		cout <<x<< ", ";
		if (x==10) 

	break;

	}
	for (x=12;x<=30;x+=2)
{

	if (x==30)

	{
		cout <<"30" <<endl;
	continue;

	}

	else
	{
		cout <<x<< ", ";
	}

}

	_getch();
	return 0;

}
