#include <iostream>
using namespace std;
     float translate (float);
int main ( )
{
	float sm {0.0};
	cout << "Enter your height in centimeters : ___\b\b\b";
	cin >> sm;
	cout << "Your height in meters is : " << translate (sm);
	return 0;
}
	float translate (float cen)
	{
		const int metr = 100;
		return  cen / metr;
	}