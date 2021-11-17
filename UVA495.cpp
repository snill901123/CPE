#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	static int a[5001][500]{0};  //Fib陣列
	a[1][0]=1;
	for(int i=2;i<5001;i++){
		for(int j=0;j<500;j++){
			a[i][j]+=a[i-1][j]+a[i-2][j];
			a[i][j+1]+=a[i][j]/10;  //進位
			a[i][j]%=10;
		}
	}
	while(cin>>n){
		cout<<"The Fibonacci number for "<<n<<" is ";
		int count=499;
		while(!a[n][count--]);  //跳過0 
		count++;  //補一位 
		for(;count>=0;count--){
			cout<<a[n][count];
		}
		cout<<endl;
	}
}
