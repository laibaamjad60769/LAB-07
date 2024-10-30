#include<iostream>
using namespace std;
int main()
{
	//5! 5*4*3*2*1=12086766969
	int n,i=1;
	long factorial=1.0;
	cout<<"Enter positive factorial: ";
	cin>>n;
	if(n<0)
	cout<<"Error factorial is negative: ";
	else{
		for(i=1;i<=n;i++){
			factorial=factorial*i;
		}
		cout<<"factorial:"<<factorial<<endl;
	}
	return 0;
	}