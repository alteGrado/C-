#include <iostream>
using namespace std;
void n_chars (char c, int n);
int main( )
{
	int times;
	char ch;
	cout << "Enter a character : ";
	cin >> ch;
	while (ch != 'q')
    { 
        cout << "Enter an integer : ";
        cin >> times;
        n_chars(ch,times);
        cout << "\nEnter another character or press the q-key to quit : ";
        cin >> ch;
    }
cout << "The value of time is " << times << ".\n";cout << "Bye\n";
return 0;
}

        