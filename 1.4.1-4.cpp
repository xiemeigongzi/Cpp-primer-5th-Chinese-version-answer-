#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	cout<<"Input the numbers, it will compute the sum:";
	while(cin>>b){
		a+=b;
	}
	cout<<"Sum is "<<a<<endl;
	return 0;
}
