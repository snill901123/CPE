#include<bits/stdc++.h>
using namespace std;
int Degree(string str){
	if(str.length()==1&&str[0]-'0'==9){
		return 0;
	}
	int sum=0;
	for(auto c:str){
		sum+=c-'0';
	}
	if(sum%9==0){
		return 1+Degree(to_string(sum));
	}else{
		return 0;
	}
}
int main(){
	string str;
	while(cin>>str){
		if(str=="0")break;
		if(str=="9"){
			cout<<"9 is a multiple of 9 and has 9-degree 1.\n";
			continue;
		}
		if(Degree(str)){
			cout<<str<<" is a multiple of 9 and has 9-degree "<<Degree(str)<<".\n";
		}else{
			cout<<str<<" is not a multiple of 9.\n";
		}
	}
}
