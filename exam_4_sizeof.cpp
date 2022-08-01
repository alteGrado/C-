#include <iostream>
int main( )
{
	using namespace std;
	int n_int = INT_MAX;
	cout <<"int is " << sizeof(int)<< " bytes"<<endl;
	cout << "Maximum int : " << n_int << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
return 0;
}