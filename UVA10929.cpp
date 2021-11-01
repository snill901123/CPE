#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s && s[0]-'0'){
		int sum1=0,sum2=0;
		for(int i=0;i<s.length();i+=2){
			sum1+=s[i]-'0';
		}
		for(int i=1;i<s.length();i+=2){
			sum2+=s[i]-'0';
		}
		if((sum1-sum2)%11){
			cout<<s<<" is not a multiple of 11."<<endl;
		}else{
			cout<<s<<" is a multiple of 11."<<endl;
		}
	}
}
