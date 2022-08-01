#include <iostream>
struct wood 
{
	char name[20];
	double volume;
	int price;
};
int main( )
{
	using namespace std;
	wood *ps = new wood;
	cout << "Enter the name of the wood : ";
	cin.get ( ps->name,20);
	cout << "Enter volume in cubic feet : ";
	cin >> (*ps).volume ;
	cout << "Enter price : $ ";
	cin >>ps->price;
	cout << "Wood name: "<<(*ps).name << endl;
	cout << "Volume : "<< ps->volume << " cubic feet" << endl;
	cout << "Price : $ " << ps->price << endl;
	delete  ps;
return 0;
}
