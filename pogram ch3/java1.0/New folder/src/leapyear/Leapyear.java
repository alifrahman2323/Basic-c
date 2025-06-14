package leapyear;


import java.util.Scanner;

public class Leapyear {
	
	

	public Leapyear() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int year = 0;
		System.out.println("Enter any year : ");
		
		if( year % 400 == 0) {
			System.out.println("Leap year :" +year);
		}
		
		else if( year % 100 == 0) {
			System.out.println("Not leap year" +year);
		}
		
		else if ( year % 4 == 0) {
			System.out.println("leap year " +year);
		}
		
		else {
			System.out.println("Not leap year");
		}
		
		
		
		

	}

}
