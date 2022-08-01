#include <iostream>
#include <string>
int main ( )
{
  using namespace std;
  string s1= "Chinese porcelain";
  string s2,s3;
  s2 = s1 ;//you can't do that with arrays
  cout << s2 << endl;
  s2 = " on the table";
  cout << "s2: " << s2 << endl;
  s3 = s1 + s2;
  cout << s3<< endl;
  s2+= " stands securely";
  cout << s2 << endl;
  s1 += s2;
  cout << s1;
 return 0;
}
