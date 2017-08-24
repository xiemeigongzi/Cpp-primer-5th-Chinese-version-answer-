#include <iostream>
using namespace std;
int main()
{
	int a=0, b=0;
	cout<<"Enter two numbers: "<<endl;
	cin>>a;
	cin>>b;
	while(a<b){
		if(a<=b-1)
		cout<<a<<endl;
		++a;
	}
	return 0;
}
