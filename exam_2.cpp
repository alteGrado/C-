
 	#include <iostream>
 	int converter (int);
 	int main( )
 	{
 		std::cout << "Enter your age : ";
 		int age;
 		std::cin >> age ;
 		std::cout << "Your age in months is "<< converter (age);
 	return 0;
 	}
 	int converter(int a)
 	{
 		return 12*a;
 	}
 		             