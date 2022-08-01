#include <iostream>
int main( )
{
	char ch;
	std::cout << "Type, and I shall repeat .\n";
	std::cin.get(ch);
	
	while (ch != '.' )
	{
		if ( ch == ' ')
		    std::cout << ch;
		else
		    std::cout << ++ch;
		std::cin.get(ch);
	}
std::cout << "Please excuse the slight confusion.\n";
return 0;
}
	