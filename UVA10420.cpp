#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str,name;
	map<string,int>mp;
	while(cin>>str){
		getline(cin,name);
		mp[str]++;
	}
	for(auto i:mp){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
