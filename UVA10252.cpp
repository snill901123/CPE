#include<iostream>
#include<Map>
using namespace std;
int main(){
	string a,b;
	while(getline(cin,a)){
		getline(cin,b);
		map<int,int>mp1,mp2;
		for(char ch:a){
			mp1[ch]++;
		}
		for(char ch:b){
			mp2[ch]++;
		}
		for(int i=97;i<123;i++){
			while(mp1[i] && mp2[i]){
				cout<<char(i);
				mp1[i]--;
				mp2[i]--;
			}
		}
		cout<<endl;
	}
} 
