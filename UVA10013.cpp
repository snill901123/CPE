#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		int t=k;
		int a[k],b[k],ans[k],carry=0,temp;
		while(k--){
			cin>>a[k]>>b[k];
		}
		for(int i=0;i<t;i++){
			temp=a[i]+b[i]+carry;
			if(temp>9){
				ans[i]=temp%10;
			}else{
				ans[i]=temp;
			}
			carry=temp/10;
		}
		if(carry)cout<<1;
		while(t--){
			cout<<ans[t];
		}
		cout<<endl;
		if(n==0)break;
		cout<<endl;
	}
}
