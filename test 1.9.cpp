#include <iostream>
int main()
{
	int sum=0, val=50;
	while(val<=100){
		sum=sum+val;
		val=val+1;
	}
	std::cout<<"The sum of 50-100 is"<<sum<<std::endl;
	return 0;
}
