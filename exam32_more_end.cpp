#include <iostream>
const char* qualify [6] =
{   
    "childhoot and adolescence.\n",
	"young age.\n",
	"average age.\n",
	"elderly age.\n",
	"old age.\n",
	"longevity.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << " Enter your age in years : ";
	cin >> age;
	int index;
	if (age > 18 && age < 44 )
	    index = 1;
	else if (age > 43 && age < 60)
	    index = 2;
	else if ( age > 59 && age < 75)
	    index = 3;
	else if ( age > 74 && age < 90)
	    index = 4;
	else if ( age > 89)
	    index = 5;
	else
	    index = 0;
	    
	cout << "You qualify for the "<< qualify[index]<< endl;
return 0;
}