// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

	cout<<"Write 2 numbers that you would like to multiply"<<endl;
	int i1;
	int i2;
	cin>>i1;
	cin>>i2;
	int answer = i1*i2;
	cout<<answer<<endl;
}
