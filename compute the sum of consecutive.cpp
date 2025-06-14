#include <iostream>
using namespace std;
int main()
{
	int x ,y, i, total = 0;
	cout<<"Enter 1st number :";
	cin>>x;
	cout<<"Enter 2nd number :";
	cin>>y;
	
	if (x < y){
		return 0;
	}
	
	cout <<"\n List of odd numbers :";
	
	for (i =y; i<=x; i++){
		if((i%2)!=0){
			cout<<"\n"<<i;
			total += i;
		}
	}
	cout<<"Sum is :\n"<<total;
	
	return 0;
}
