#include <iostream>
int main()
{
	int sum =0, val=1;
	while (val<=10){
		sum=sum+val;
		val=val+1;
	}
	std::cout<<"Sum of 1 to 10 is "<<sum<<std::endl;   
	return 0;
}
