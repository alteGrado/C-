#include <iostream>
int main ( )
{
	using namespace std;
	int ch;
	int count;
	while ((ch = cin.get( ) ) != EOF)
    {
    	cout.put( char(ch));
    	++count;
    }
    cout << endl << count << "characters read\n";return 0;
}
	    	
	