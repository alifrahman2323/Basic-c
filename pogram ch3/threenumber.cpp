#include <iostream>
using namespace std;

int main()
{
	int a, b , c ;
	cout<<"Enter Three numbers :";
	cin>>a>>b>>c;
	
	
	if(a>b && a>c){
		cout<<"A is large ";
	}
	
	else if(b>a && b>c){
		cout<<"B is the largest";
	}
	
	else{
		cout<<"C is largest";
	}
	
	return 0;
	
}
