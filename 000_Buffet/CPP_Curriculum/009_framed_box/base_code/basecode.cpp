 // base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout<<"Please enter border character"<<endl;
	char symbol;
	cin>>symbol;
	cout<<"Please enter box width"<<endl;
	int width;
	cin>>width;
	cout<<"Please enter box height"<<endl;
	int height;
	cin>>height;

	for(int y = 1; y <= height; y++){
		for(int x = 1; x <= width; x++){
			gotoxy(x,y+8);
			cout << symbol;
		}
		//cout << endl;
	}

	for(int b = 1; b <= height - 2; b++){
		for(int l = 1; l <= width - 2; l++){
			gotoxy(l+1,b+9);
			cout << " ";
		}
		//cout << endl;
	}
}
