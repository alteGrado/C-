#include <iostream>
#include <string>
#include <cstring>

int main( )
{
	using namespace std;
	char frost [40];
	string heat;
	
	cout << "Length of string in frost before input : " << strlen(frost)<< endl;
	cout << "Length of string in heat before input : " << heat.size() << endl;
	cout << "Write the winter months : " ;
	cin.getline(frost,40);
	cout << "You wrote : " << frost <<endl;
	cout << "Write summer months : ";
	getline(cin,heat);
	cout << "You wrote : " << heat << endl;
	cout << "Length of string in frost after input : " << strlen(frost)<<endl;
	cout <<"Length of string in heat after input : " << heat.size()<<endl;
	
return 0;
}