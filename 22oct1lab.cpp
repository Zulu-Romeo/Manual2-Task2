/*A program that converts inches to yards and feet. Prompt the user to enter an integer value
i.e. the number of inches, and then make the conversion and output the result.*/


#include<iostream>								
using namespace std;

int main()

{
	int inches,yards,feet;

	cout<<"Enter the value in inches you want to convert into Yards : ";
	cin>>inches;

	yards=inches*0.0277778;
	feet=yards*3;

	cout<<"\nConverted into Yards :"<<yards<<" Yards.";
	cout<<"\nConverting yards into feet :"<<feet<<" Ft.";

	return 0;
}


	
