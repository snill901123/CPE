#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		int t=k,a[k],b[k],temp,carry=0;
		while(k--){
			cin>>a[k]>>b[k];
		}
		string s;
		for(int i=0;i<t;i++){
			temp=a[i]+b[i]+carry;
			if(temp>9){
				s=to_string(temp%10)+s;
			}else{
				s=to_string(temp)+s;
			}
			carry=temp/10;
		}
		if(carry)s='1'+s;
		cout<<s<<endl;
		if(n==0)break;
		cout<<endl;
	}
}
