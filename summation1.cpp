#include <iostream>
using namespace std;
int main(){
	
	int sum =0;
	
	int m,n;
	cout<<"Enter starting number : \n";
	cin>>m;
	cout<<"Enter Ending Number :\n ";
	cin>>n;
	
	for(int i = m;i <=n; ++i)
	{
		sum = sum + i;
	}
	cout<<"Summation is : "<<sum;
	
	return 0;
}
