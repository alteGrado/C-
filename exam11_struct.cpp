#include <iostream>
struct tree_species
{  
    char name[20];
	char view[20];
	int density;
	double price;
};
int main( )
{
	using namespace std;
	tree_species oak = 
	{
		"Quercus",
		"Annular vascular",
		720,
		110.0
	};
	tree_species beech = 
	{
		"Fagus",
		"Hardwood",
		720,
		74.0
	};
	tree_species alder =
	{
	};
	alder = oak;
	cout << "We will buy " << beech.name << " end "<< oak.name << " end " << alder.name <<" wood." << endl;
	cout << "To buy two cubes you need to have : " << oak.price + beech.price << " rubles.";
	tree_species trees[3];
	//array of structures;
return 0;
}