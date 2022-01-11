// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

cout<<"Please enter border character"<<endl;
	char symbol;
	cin>>symbol;
	cout<<"Please enter present width"<<endl;
	int w;
	cin>>w;
	cout<<"Please enter present height"<<endl;
	int h;
	cin>>h;
	int xcrd = random(10) + 30;
	cout<<"Please enter present y coordinate"<<endl;
	int ycrd;
	cin>>ycrd;
	int ycrd1 = ycrd + 1;
	int xcrd1 = xcrd + 1;
	
	for(int y = 0; y < h; y++){
		for(int x = 0; x < w; x++){
			gotoxy(x+xcrd,y+ycrd);
			cout << symbol;
		}
	}

	for(int h1 = 0; h1 < h - 2; h1++){
		for(int w1 = 0; w1 < w - 2; w1++){
			gotoxy(w1+xcrd1,h1+ycrd1);
			cout << " ";
		}
	}
int hmiddle = h / 2;
int wmiddle = w / 2;
	
	for(int h2 = 0; h2 < h; h2++){
		for(int w2 = 0; w2 < h; w2++){
			gotoxy(h2+hmiddle+xcrd,w2+ycrd);
			cout << "$";
		}
	}
	
	
	
	gotoxy(2,20);
}
