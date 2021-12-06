#include<iostream>
using namespace std;
int main(){
	int a[2];
	while(cin>>a[0]){
		a[1]=a[0];
		while(a[0]>2){
			a[1]+=a[0]/3;
			a[0]=a[0]%3+a[0]/3;
		}
		if(a[0]==2)a[1]++;
		cout<<a[1]<<endl;
	}
}
