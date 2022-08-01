#include <iostream>
const int ArrSize = 20;
int main( )
{
	using namespace std;
	char name[ArrSize];
	cout << "Write a word up to 20 characters : ";
	cin >> name;
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ":" << int(name[i]) <<endl;
		i++;
	}
return 0;
}