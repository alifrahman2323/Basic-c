#include <iostream>
using namespace std;
int main()
{
	 int n;
	 cin>>n;
	 
	 if(n >= 1 && n<= 9){
	 	
	 	const char*words[] = {"one" ,"two","three", "four", "five" ,"six","seven","Eight","Nine"};
	 	cout<<"\n"<<words[n -1];
	 }
	 
	 else{
	 	cout<<"Greater than 9\n";
	 }
	 
	 return 0;
}
