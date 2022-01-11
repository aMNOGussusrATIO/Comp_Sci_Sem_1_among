// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

	cout<<"What symbol would you like to make your line out of?"<<endl;
	char symbol;
	cin>>symbol;
	cout<<"How long would you like to make your line?"<<endl;
	int length;
	cin>>length;
	cout<<"would you like to make your line horizontal, vertical or diagonal? h/v/d"<<endl;
	char hvd;
	cin>>hvd;

if (hvd=='v')
{
	int i;
	for(i = 0;i < length; i++)
	{
	cout<< symbol <<endl;
	}
}
if (hvd=='h')
{
	int i;
	for(i = 0;i < length; i++)
	{
	cout<<symbol;
	}
}
if (hvd=='d')
{
	int i;
	for(i = 0;i < length; i++)
	{
	gotoxy(i+1,i+8);
	cout<< symbol <<endl;
	}
}
}
