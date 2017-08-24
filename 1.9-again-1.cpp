#include <iostream>
using namespace std;
int main()
{
	int sum=0,vul=50;
	while(vul<=100){
		sum+=vul;
		++vul;
	}
	cout<<"The sum 50 to 100 is: "<<sum;
		return 0;
}
