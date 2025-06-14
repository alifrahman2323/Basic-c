#include <iostream>
using namespace std;
int main(){
	int n,y,m,d;
	cout<<"Enter the number of days: ";
	cin>>n;
	
	y = n / 365;
	
	m = n / 30;
	
	d = n - (m*30);
	
	n = n- (365*y);
	
	
	cout << y <<"Year :";
	cout<< m <<"month :";
	cout<< d <<"Days :";
	
	
	return 0;
}
