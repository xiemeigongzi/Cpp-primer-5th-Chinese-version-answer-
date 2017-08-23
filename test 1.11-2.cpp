#include <iostream>
using namespace std;
int main()
{
	int v1=0, v2=0;
	cout<<"Enter two numbers: "<<endl;
	cin>>v1;
	cin>>v2;
	while(v1>(v2+1)){
		++v2;
		cout<<"the numbers between"<<v1<<" and "<<v2<<" are "<<v2<<endl;
	}
	while(v1<(v2-1)){
		cout<<"the numbers between"<<v1<<" and "<<v2<<" are "<<v1+1<<endl;	
		++v1;	
	}
	return 0;
}
