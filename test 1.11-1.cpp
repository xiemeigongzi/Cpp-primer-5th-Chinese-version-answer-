#include <iostream>
using namespace std;
int main()
{
	int v1=0, v2=0, a=0;
	cout<<"Enter two numbers: ";
	cin>>v1;
	cin>>v2;
	while(v1>v2+1){
		a=v2+1;
		++v2;
		cout<<"The requested number is:"<<a;	
		
	}
	while(v1<(v2-1)){
		a=v1+1;
		++v1;
		cout<<"The requested number is:\n"<<a;
	}
		return 0;
}
