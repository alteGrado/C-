#include <iostream>
void three ( );
void see ( );
int main ( )
{
	three ( );
	three ( );
	see( );
	see( );
return 0;
}
 void three( )
 {
 	std::cout << "Three blind mice " << std::endl;
 	see( );
 }
 void see( )
 {
 	std::cout << "See how then run" << std::endl;
 }