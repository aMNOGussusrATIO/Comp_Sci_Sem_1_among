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
	cout<<"Please enter line x coordinate"<<endl;
	int xcoord;
	cin>>xcoord;
	cout<<"Please enter line y coordinate"<<endl;
	int ycoord;
	cin>>ycoord;
	
	for(int y = 1; y <= height; y++){
		for(int x = 1; x <= width; x++){
			gotoxy(x+xcoord,y+ycoord);
			cout << symbol;
		}
		//cout << endl;
	}
}

