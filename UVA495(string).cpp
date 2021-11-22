#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string a[5000];//Fib°}¦C
	a[0]="0";
	a[1]="1";
	for(int i=2;i<5000;i++){
		int index=0,carry=0;
		while(index<a[i-1].length() or index<a[i-2].length()){
			int sum=carry;
			if(index<a[i-1].length()){
				sum+=a[i-1][index]-'0';
			}
			if(index<a[i-2].length()){
				sum+=a[i-2][index]-'0';
			}
			carry=sum/10;
			sum%=10;
			a[i]+=sum+'0';
			index++;
		}
		if(carry){
			a[i]+='1';
		}
	}
	while(cin>>n){
		cout<<"The Fibonacci number for "<<n<<" is ";
		for(int i=a[n].length()-1;i>=0;i--){
			cout<<a[n][i];
		}
		cout<<endl;
	}
}
