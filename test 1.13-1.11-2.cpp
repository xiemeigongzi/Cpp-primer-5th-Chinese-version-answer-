#include <iostream>
using namespace std;
int main()
{
	int a=0, b=0;
	cin>>a;
	cin>>b;
	while(a>b+1){
		++b;
		cout<<b<<endl;
				
	}
	while(a<b-1){
		++a;
		cout<<a<<endl;
	}
	return 0;
}
