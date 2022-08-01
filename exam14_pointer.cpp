#include <iostream>
int main()
{
	using namespace std;
	double wages [3] = { 10000.0,20000.0,30000.0};
	short stack[3] = {3,2,1};
	double* pw = wages;
	short* ps = &stack[0];
    cout << "pw = " << pw << " *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "Add 1 to the pw pointer : \n";
    cout << "pw = " << pw << " *pw = " << *pw << endl;
    cout << "ps = " << ps << " *ps = " << *ps << endl;
    ps = ps +1;
    cout << "Add 1 to the ps pointer : \n";
    cout << "ps = " << ps << " *ps = " << *ps << endl;
    cout << "access two elements with array notation \n" ;
    cout << "stack[0] = " << stack[0] << " stack[1] = " << stack[1] << endl;
    cout << "access two elements with pointer notetion \n";
    cout << "*stack = " << *stack << " *(stack + 1) = "<< *(stack + 1)<< endl;
    cout << sizeof (wages ) << " size of wages array " << endl;
    cout << sizeof pw << " size of pw pointer " << endl;
return 0;	
}
	