#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int
main()
{
	double a, b;
  string input;

	cout << "please input your number ";
	cin >> a;



	system("cls");
	cout << "choose your amounts" << " \n zarb \n taghsim \n  radical \n  sin \n  cos \n  cot \n  tan \n  factorial :";

	cin>> input;


	if (input == "taghsim" || input == "zarb")
	{
	
		cout << "please input your second number: ";
		cin >> b;
	}

	if (input == "taghsim")
	{
		if (b == 0)
			cout << "taghsim";
		else
			cout << "your result : " << a / b;
	}
	if (input == "zarb")
	{
		cout << "your result: " << a * b;
	}
	if (input == "radical")
	{
		cout << "your result: " << sqrt(a);
	}
	if (input == "sin")
	{
		cout << "your result: " << sin((a * 3.14) / 180);
	}
	if (input == "cos")
	{
		cout << "your result: " << cos((a * 3.14) / 180);
	}
	if (input == "tan")
	{
		cout << "your result: " << tan((a * 3.14) / 180);
	}
	if (input == "cot")
	{
		cout << "your result: " << 1 / tan((a * 3.14) / 180);
	}
	if (input == "factorial")
	{
		double factorial = 1;
		for (int i = 1; i <= a; i++)
			factorial = factorial * i;
		cout << "your result: " << factorial;
	}
}
