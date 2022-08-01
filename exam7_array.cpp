#include <iostream>
#include <cstring>
using namespace std;
int main()
{
/*	int numer1 [5];
	numer1[0]=1;
	numer1[1]=7;
	numer1[2]=49;
	numer1[3]=343;
	numer1[4]=2401;
	
	int numer2 [5] = {625,125,25,5,1};
	char letters [5] = {'a','b','c','d','e'};
	char letters2[ ] = {'f','g','h','i','j','k','l','\0'};
	cout << letters[0] <<" , "<< letters[1] <<" , "<<letters[2]<<" , "<<letters[3]<<" , "<<letters[4]<<endl;
	cout <<"The size of the number1 array : "<< sizeof numer1<<endl;
	cout << " The size of the letters array : " << sizeof letters<< endl;
	cout <<int  (letters[0]) <<"    "<< letters[1]*sizeof numer2[0]<<endl;
	cout << numer1[0] + numer2[0] <<"-_-"<<numer1[1]+numer2[1]<<"-_-"<<numer1[2]+numer2[2]<<endl;
	short unknown [ ] = {1,9,2,8,3,7,4,5};
	cout << sizeof unknown / sizeof (short)<< endl;
	cout << letters2<<endl;
	cout << letters<<endl;
	char str [ ] = "Repetition in the mother of learning";
	cout <<str << endl;
	const int Size = 16;
	char name1 [Size];
	char name2 [Size] = "C++ sample code";
	cout << "I consider that "<<name2;
	cout << "! What do you thing ?" << endl;
	cin >> name1;
	cout << "Your sentence \" " << name1 << " \" consists of " << strlen(name1) << " characters" << " and occupies " << sizeof (name1) << " bytes of memory." << endl;
	name2[3] = '\0';
	cout << name2 << endl; */
	const int ArrSize = 30;
	char name3 [ArrSize];
	cout << "Enter your full name : \n";
	cin.getline(name3,ArrSize);
	cout << "Your name : " << name3 << endl;
return 0;
}