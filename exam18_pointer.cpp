#include <iostream>
struct years_of_Putins_reelection
{
	int year;
	double percent;
};
int main ( )
{
	typedef years_of_Putins_reelection YOPRE;
	YOPRE yr01,yr02,yr03,yr04;
	yr02.year = 2004;
	YOPRE* pu = &yr03;
	pu->year = 2012;
	YOPRE four [4];
	four[0].year = 2000;
	std::cout << four->year << std::endl;
	YOPRE* put[4] = { &yr01,&yr02,&yr03,&yr04};
	std::cout << put[2]->year << std::endl;
	YOPRE** ppu = put;
	std::cout<<(*(ppu+1))->year<< std::endl;
	auto pppu = put;
	std::cout<<(*(pppu+2))->year<<std::endl;
	
return 0;
}
	
