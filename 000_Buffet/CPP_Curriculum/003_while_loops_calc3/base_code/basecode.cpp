// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

while(true) 
{
	cout<<"Write 2 numbers that you would like to calculate"<<endl;
	int num1;
	int num2;
	cin>>num1;
	cin>>num2;
	cout<<"Would you like to +, -, *, or /?"<<endl;
	char in;
	char add = '+';
	char subtract = '-';
	char multiply = '*';
	char divide = '/';
	cin>>in;
	if (in==add)
	{
	int answer = num1+num2;
	cout<<answer<<endl;
	}
	if (in==subtract)
	{
	int answer = num1-num2;
	cout<<answer<<endl;
	}
	if (in==multiply)
	{
	int answer = num1*num2;
	cout<<answer<<endl;
	}
	if (in==divide)
	{
	int answer = num1/num2;
	cout<<answer<<endl;
	}
	cout<<"Would you like to calculate something else y/n"<<endl;
	char yn;
	cin>>yn;
	if(yn=='n')
	{
	break;
	}
}
}
