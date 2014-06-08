#include <iostream>
#include <string>
using namespace std;

const float priceper30= 17.0f / 30.0f;

int main()
{
	float minutes;
	float lessonprice;
	
	cout << "How many minutes is the lesson?";
	cin >> minutes;
	lessonprice = priceper30 * minutes;
	cout << "The price for the lesson will be " << lessonprice << " dollars" << ".\n";
	cout << "Have a nice day.";
	return 0;
}
