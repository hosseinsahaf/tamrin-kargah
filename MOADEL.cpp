
#include <iostream>
using namespace std;
int main()
{
    
	float a, b, c,avarage;
	char d[100], e[100];
	

	cout << "please enter your name:";
		cin >> d;
		cout << "please enter your last name:";
		cin >> e;
		system("cls");
		cout << "now enter your 3 score:";
		cin >> a >> b >> c;
		avarage = (a + b + c) / 3;
		if (avarage>=17)
		{
			cout << "well  done! great";
		}
		else if (17 > avarage && avarage >= 12)

		{

			cout << "normal";

		}
		else if(avarage<12)
		{ 
		
			cout << "fail";
		
		}


		return 0;

}