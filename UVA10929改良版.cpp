#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s && s[0]-'0'){
		int sum=0;
		int sign=1;
		for(char ch:s){
			sum+=sign*(ch-'0');
			sign*=-1;
		}
		if(sum%11){
			cout<<s<<" is not a multiple of 11."<<endl;
		}else{
			cout<<s<<" is a multiple of 11."<<endl;
		}
	}
}
