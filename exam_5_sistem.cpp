#include <iostream>
using namespace std;
int main( )
{
	int a = 123;    //decimal
	int b =0x123; //hexadecimal
	int c = 0123;   //octal
	cout << "decimal 123 = " << a << " decimal"<< endl;
	cout << "hexadecimal 0x124 = " << b << " decimal"<< endl;
	cout << "octal 0123 = " << c << " decimal"<< endl;
	int d {158};
	int e {357};
	cout << hex;
	cout << d << endl;
	cout << oct;
	cout << e << endl;
return 0;
}