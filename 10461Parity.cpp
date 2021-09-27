#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	while(cin>>num){
		if(!num)break;
		int count=0;
		string str;
		while(num){
			str=num%2?'1',count++:'0' +str;
			num/=2;
		}
		cout<<"The parity of ";
		for(int i=str.length()-1;i>=0;i--){
			cout<<str[i];
		}
		cout<<" is "<<count<<" (mod 2).\n";
		count=0;
	}
}
