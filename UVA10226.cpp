#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	getchar();
	getchar();
	while(n--){
		map<string,int>mp;
		int sum=0;
		while(getline(cin,str)&&str!=""){
			mp[str]++;
			sum++;
		}
		for (auto iter:mp){
            cout << iter.first << " " <<
            fixed << setprecision(4) << double(iter.second) / sum * 100 << endl;
        }
		if(n){
			cout<<endl;
		}
	}
}
