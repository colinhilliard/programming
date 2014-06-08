// hello world
#include<iostream> 
using namespace std;
int main()
{
	int age;
	cout << "How old are you?";
	cin >> age;
	
	if (age==0)
		{
		cout << "nope";
		return 0;
		}
	cout << "You are ";
	cout << age ;
	cout << " years old.";
	if (age<30) 
	cout << " your still a baby!";
	if (age>30) 
	cout<< " golly, you're a fossil!";
	return 0;	
}
