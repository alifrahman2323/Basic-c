#include <iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	
	if (ch == 'a' || ch == 'A'){
		cout<<"is vowel\n"<<ch;
	}
	
	else if (ch == 'e' || ch == 'E'){
		cout<<"is vowel\n"<<ch;
	}
	
	else if (ch == 'i' || ch == 'I'){
		cout<<"is vowel\n"<<ch;
	}
	
	else if (ch == 'o' || ch == 'O'){
		cout<<"is vowel\n"<<ch;
	}
	
	else if(ch == 'u' || ch == 'U'){
		cout<<"is vowel\n"<<ch;
	}
	else{
		cout<<"is consonant\n"<<ch;
	}
	
	return 0;
}
