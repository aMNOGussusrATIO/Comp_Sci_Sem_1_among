// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

	cout<<"Please enter border character"<<endl;
	char symbol;
	cin>>symbol;
	cout<<"Please enter box width"<<endl;
	int width;
	cin>>width;
	cout<<"Please enter box height"<<endl;
	int height;
	cin>>height;
	int w;
	int i;
	for(w = 0;w < height; w++)
	{
	for(i = 0;i < width; i++)
	{
	cout<<symbol;
	}
	cout<<endl;
	}
	for(w = -1;w < height; w++)
	{
	for(i = -1;i < width; i++)
	{
	cout<<" ";
	}
	cout<<endl;
	}
}
