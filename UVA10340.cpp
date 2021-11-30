#include<iostream>
using namespace std;
int main(){
	string a,b;
	while(cin>>a>>b){
		int i=0,j=0;
		for(;i<a.length() && j<b.length();j++){
			if(a[i]==b[j]){
				i++;
			}
		}
		if(i==a.length()){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}
