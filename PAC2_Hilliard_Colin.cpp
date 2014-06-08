/******************************
   Colin Hilliard
   6/14/14
   PAC2_Hilliard_Colin.cpp
   Description
********************************/

#include <iostream>	// For cout
#include <string>	// For string 
using namespace std;

//	Declare and initialize your constant here
const float PI = 3.14f;

int main()
{
	//	Declare your uninitialized variables here
	float radius;
	float area;
	char letter;
	string firstName;
	int num1;
	int product;
	
	//	Declare your initialize variable here
	int num2 = 10;
	
	//	Assign values to your uninitialized variables
	radius = 10.0f;
	letter = 'A';
	firstName = "Colin";
	num1 = 25;	
	
	//	Write your operations here
	area = radius * PI ;
	product = num1 * num2;
	
	//	Write your output
	cout << "My name is " << firstName << " and I will make an " << letter << ".\n";
	cout << "The area of a circle with a radius of " << radius << " is " << area << ".\n";
	cout << num1 << " times " << num2 << " is " << product << ".\n";
    return 0;
}
