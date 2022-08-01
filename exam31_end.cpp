#include <iostream>
const int ArrSize = 6;
int main ( )
{
	using namespace std;
	float numerical [ArrSize];
	cout << "Enter six pozitive numbers one at the time.\n";
	int i= 0;
	float temp;
	cout << "First value : ";
	cin >> temp;
	while (i < ArrSize && temp >= 0)
	{
		numerical[i] = temp;
		++i;
		if (i < ArrSize)
		{
			cout << "Next value : ";
			cin >> temp;
		}
	}
	int count = 0;
	float point ;
	cout << "Enter number - breakpoint : ";
	cin >> point;
	for (int j = 0; j < i ; j++)
	    {
	    	
	    if (numerical[j] > point)
	        ++ count;
	    cout << numerical[j] << "\t";
	    }
	    cout <<  "\n" << count << " values greater then breakpoint.\n";
	 
return 0;
}
		
		
	    
	           
		    