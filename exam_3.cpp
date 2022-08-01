#include <iostream>
void time(int,int);
int main( )
{
	std::cout << "Enter the number of hours: ";
	int hours;
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	int minutes;
	std::cin >> minutes;
	time (hours,minutes);
return 0;
}
void time (int h,int m)
{
	std::cout << "Time " << h << " : " << m ;
}