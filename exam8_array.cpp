#include <iostream>
using namespace std;
int main ( )
{
	const int Size = 30;
	int year;
	char name [Size];
	cout << "Enter your year of birth : \n";
	cin >> year ;
	cin.get();// (cin >>year).get
	cout << "Continue the offer : The weather was ...: \n";
	cin.getline(name,Size);
	cout << "The weather was "<< name << " in " << year << " year" <<  endl;
return 0;
}