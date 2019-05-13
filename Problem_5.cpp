#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int x,y1,y2,y3,y;
	y1=0;
	y2=1;
	y=22;
	
	cout <<"Fibonacci numbers:"<<endl;

	for (x=0;x<y;x++)
	{
		if (x<=1)

		{
		y3=x;
		cout<<y3<<",";
		}

		else 
		{
			y3=y1+y2;
			y1=y2;
			y2=y3;
		
			if (y3==10946)
			{
			cout <<"10946" <<endl;

		continue;
			}	

		else
			{
			cout<<y3<<",";

			}

		}
	}
	
	_getch();
	return 0;

}
