#include<iostream.h>
#include<conio.h>
int main()
{
	int num,sum = 0,i;
	clrscr();
	cout<<"Enter Number"<<endl;
	cin>>num;
	for(i = 1;i<num;i++)
	{
		if(num%i == 0)
		{
			sum = sum+i;
		}

	}

	if(sum == num)
	{

		cout<<"Number is perfect"<<endl;
	}
	else
	{
		cout<<"Number is not perfect"<<endl;
	}
	getch();
	return 0;
}

