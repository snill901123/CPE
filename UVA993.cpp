#include<iostream>
using namespace std;
int main(){
	int x,n;
	while(cin>>x){
		while(x--){
			string ans;
			cin>>n;
			if(n==1){
				cout<<1;
			}
			for(int i=9;i>=2;i--){
				while(!(n%i)){
					ans=to_string(i)+ans;
					n/=i;
				}
			}
			if(n==1){    //�Y�Ҿ㰣�h n�|����1 
				cout<<ans;
			}else{
				cout<<-1;
			}
			cout<<endl;
		}
	}
}
