#include <iostream>
using namespace std;
int main()
{
	int d,a = 1, b = 2;
	
	d = a++ + ++b;
	
	cout<<"The result is :" << d <<a <<b;
	
	return 0; 
}
