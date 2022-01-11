// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL)); 

	int i;
	for(i = 0;i < 10; i++)
	{
	gotoxy(20,2+i);
	cout<< "*" <<endl;
	}

}