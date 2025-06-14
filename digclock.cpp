#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int h = 0, m = 0, s = 0;
	cout<<"Please Enter the time format :";
	cin>>h>>m>>s;
	
	if(h<24 && m<60 && s<60){
	
	start:
	for(h ; h < 24; h++){
	for(m ; m < 60 ; m++){
		for(s ; s< 60; s++){
			system("CLS");
			cout<<h<<" :"<<m <<" : "<<s;
			
			
			for(double i = 0;i<99999999;i++){
				i++;
				i--;
			}
			if(h>12)
			{
				cout<<"PM";
			}
			else
			{
				cout<<"AM";
			}
			
			
		}
		s = 0;
		
	}
	m = 0;
		} 
		h = 0; 
	goto start;
}

  else{
	cout<<"Ennter Correct time format HH:MM:SS\n ";
}
}
