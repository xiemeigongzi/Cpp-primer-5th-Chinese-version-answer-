#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	if(cin>>a){
		int cnt=1;
		while(cin>>b){
			if(a==b)
			++cnt;
			else{
				cout<<"The repeat number of "<<a<<"is "<<cnt<<endl;
				a=b;
				int cnt=1;
			}
		}
		cout<<a<<" occurs "<<cnt<<" times"<<endl;		
	}	
	return 0;
}
