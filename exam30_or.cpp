#include <iostream>
int main( )
{
	using namespace std;
	cout << "There are not enough funds in your account.\n" "Want to top up your account. <y/n> ";
	char ch;
	cin >> ch;
	if ( ch == 'y' || ch == 'Y')
	    cout << "Enter card numbet : \a\a\n";
	else if ( ch == 'n' || ch == 'N')
	    cout << " Loan write off soon .\a\a \n";
	else 
	    cout << "Be careful ."
	             << "You need to choose y or n .\a\a\a\n";
	 return 0;
}