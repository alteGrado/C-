#include <iostream>
#include <cstring>

int main( )
{
	using namespace std;
	char city [20] = "Moscow";
	char* ps;  //Error (uninitialized pointer)//
	const char* street = "Mokhovaya";
	cout << street << " street is located in " << city << endl;
	//cout << ps; Error//
	cout << "Enter city name : ";
	cin >> city;
	ps = city;
	cout << ps << " !\n";
	cout << "Before using strcpy() : \n";
	cout << ps << " at " << (int *)ps << endl;
	cout << city << " at " << (int *) city << endl;
	ps = new char[strlen(city)+1];
	strcpy (ps,city);
	cout << "After using strcpy() : \n";
	cout << ps << " at " << (int *)ps << endl;
	cout << city << " at " << (int *)city << endl;
	delete [ ] ps;
	
return 0;
}