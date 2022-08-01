#include <iostream>
int main( )
{
	using namespace std;
	int number =  2020;
	int* pr = new int;
	*pr = 2020;
	
	cout << "number value = ";
	cout << number << " : location " << &number << endl;
	cout << "int ";
	cout << "value = " << *pr<< " : location "<< pr << endl;
     
     double* pi = new double;
     *pi = 30000000.14;
      cout << "double ";
      cout << "value = " << *pi << " : location " << pi << endl;
      cout << "location of pointer pi : " << &pi << endl;
      cout << "Size of pr " << sizeof (pr) << " : size of *pr " << sizeof (*pr)<< endl;
      cout << "Size of pi " << sizeof pi << " : size of *pi " << sizeof (*pi) << endl;
      
return 0;
}