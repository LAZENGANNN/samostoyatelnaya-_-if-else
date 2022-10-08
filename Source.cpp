#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//#1
	/*int hp;
	cin >> hp;
	bool a = hp > 0;;
	cout << boolalpha << a;*/




	//#2
	/*int t;
	cin >> t;
	if (t > 20){
		cout << "on";
	}
	else {
		cout << "off";
	}*/

	//#3
	/*int v;
	int t;
	int Tpult;
	cin >> v >> Tpult >> t;
	if (v < 80 && Tpult < t)
	{
		cout << "on";
	}
	else
	{
		cout << "off";
	}*/

	//#4
	/*int x;
	int y;
	cin >> x;
	if (x>0)
	{
		y = sqrt(x-2);
	}
	else if (x == 0)
	{
		y = 0;
	}
	else if (x < 0)
	{
		y = abs(x);
	}
	cout << y;*/

	//#5
	/*int p;
	cin >> p;
	switch(p)
	{
	case 1: cout << "большой палец"; break;
	case 2: cout << "указательный"; break;
	case 3: cout << "средний"; break;
	case 4: cout << "безымянный"; break;
	case 5: cout << "мизинец"; break;
	default: cout << "ошибка"; break;
	}
	return 0;*/

	//#6
	int troom;
	int tstreet;
	cin >> troom >> tstreet;
	if ( (troom > 20 && tstreet > troom) || (troom > 20 && tstreet> 20  && troom == tstreet) )
	{
		cout << "ac on";
	}
	else if (troom <= 20)
	{
		cout << "ac off";
	}
	else if (troom > 20 && tstreet < troom)
	{
		cout << "open window";
	}
	
}