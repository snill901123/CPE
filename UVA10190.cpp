#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==1){
			cout<<"Boring!\n";
			continue;
		}
		vector<int>vec;
		while(a){
			if(a%b){
				vec.push_back(a);
				break;
			}else{
				vec.push_back(a);
				a=a/b;
			}
		}
		if(vec[vec.size()-1]==1){
			for(auto num:vec){
				if(num!=1){
					cout<<num<<" ";
				}else{
					cout<<num;
				}
			}
			cout<<"\n";
		}else{
			cout<<"Boring!\n";
		}
	}
}
