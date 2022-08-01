#include <iostream>
const int Cities= 5;
const int Years = 4;
int main( )
{
	using namespace std;
	const char* cities [Cities] =
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista" 
	};
	int maxtemps[Years][Cities] =
	{
		{84,93,107,97,120},
		{58,93,72,130,89},
		{94,91,103,110,78},
		{95,80,104,103,87}
	};
	cout << "Maximum temperatures for 2008-2011.\n\n";
	for (int city = 0; city < Cities ;++city)
	{
		cout << cities[city] << " :\t";
		for (int year = 0;year<Years;++year)
		    cout << maxtemps [year][city] << "\t";
		 cout << endl;
	}
return 0;
}
		