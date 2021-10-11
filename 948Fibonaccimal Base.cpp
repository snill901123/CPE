#include<bits/stdc++.h>
using namespace std;
int main(){
	int mp[40]{0,1};
	for(int i=2;i<40;i++){
		mp[i]=mp[i-1]+mp[i-2];
	}
	int n;
	cin>>n;
	while(n--){
		bool flag=0;
		int num;
		cin>>num;
		cout<<num<<" = ";
		for(int j=39;j>1;j--){
			if(num>=mp[j]){
				cout<<'1';
				num-=mp[j];
				flag=1;
			}else if(flag and num<mp[j]){
				cout<<'0';
			}
		}
		cout<<" (fib)\n";
	}
}
