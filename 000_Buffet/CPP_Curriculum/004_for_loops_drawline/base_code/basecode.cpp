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
	cout<<"would you like to make your line horizontal or vertical? h/v"<<endl;
	char hv;
	cin>>hv;

if (hv=='v')
{
	int i;
	for(i = 0;i < length; i++)
	{
	cout<< symbol <<endl;
	}
}
if (hv=='h')
{
	int i;
	for(i = 0;i < length; i++)
	{
	cout<<symbol;
	}
}
}
