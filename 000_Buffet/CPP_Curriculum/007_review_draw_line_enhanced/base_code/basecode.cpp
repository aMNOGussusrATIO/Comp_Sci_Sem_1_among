// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

	cout<<"Please enter line symbol"<<endl;
	char symbol;
	cin>>symbol;
	cout<<"Please enter line length"<<endl;
	int length;
	cin>>length;
	cout<<"Please enter line x coordinate"<<endl;
	int x;
	cin>>x;
	cout<<"Please enter line y coordinate"<<endl;
	int y;
	cin>>y;
	int i;
	for(i = 0;i < length; i++)
	{
	cout<< endl;
	
	}
	for(i = 0;i < length; i++)
	{
	gotoxy(i+x,y);
	cout<< symbol;
	
	}
}
