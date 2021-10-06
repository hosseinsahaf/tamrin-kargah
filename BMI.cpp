
#include <iostream>
using namespace std;
int main()
{
    

	
	float a,b ,c;

	cout << "please enter your weight:";
	cin >> a;
	cout << "please enter your height in meters: ";
	cin >> b;
	cout << endl;
	c = a / (b * b);
	if (c<18.5)
	{
		cout << "your are underweight:";

	}

	else if(18.5<c && c<24.9)
	{
		cout << "you are normal";

	}
	else if (25 < c && c < 29.9)
	{
		cout << "you are over weight";

	}
	else if(30<c && c<34.9)
	{ 
		cout << "you are obese";
	}
	else if(35<c)
	{ 
	
		cout << "you are extremly obese";
	}
	


	return 0;

}