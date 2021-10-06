#include <iostream>
using namespace std;
int main()
{
	float a, b, c;

	cout << "enter the amounts:";
	cin >> a>>b>>c;
	if (a<b+c && b<a+c && c<a+b)
	{
		cout << "this is triangle";
	}
	else
	{
		cout << "this is not triangle!";
	}


	return 0;
}
