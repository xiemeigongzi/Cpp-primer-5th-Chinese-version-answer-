#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	if(cin>>a){
		int cnt=1;
		while(cin>>b){
			if(a==b)
			++cnt;
			else{
				cout<<a<<" occurs "<<cnt<<endl;
				int a=b;
				int cnt=1;
			}
		}
	cout<<a<<" occurs"<<cnt<<endl;
	}
	return 0;
}
