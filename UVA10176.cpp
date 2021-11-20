#include<iostream>
using namespace std;
int main(){
	string s;
	int sum=0;
	while(cin>>s){
		for(char ch:s){
			if(ch=='#'){
				if(sum){
					cout<<"NO"<<endl;
				}else{
					cout<<"YES"<<endl;
				}
				sum=0;
			}else{
				sum<<=1;   //­¼2 
				sum+=ch-'0';
				sum%=131071;
			}
		}
	}
}
