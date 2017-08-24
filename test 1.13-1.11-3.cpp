#include <iostream>
int main()
{
	int low=0;
	int high=0;
	std::cout<<"Enter low number and Enter low number:"<<std::endl;
	std::cin>>low;
	std::cin>>high;
	for(int i=low+1;i<high;++i)
	std::cout<<i<<std::endl;
	return 0;
}
