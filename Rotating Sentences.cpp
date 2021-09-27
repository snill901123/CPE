#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string>sen;
	string str;
	int max_len=0;
	while(getline(cin,str)){
		if(str.length()>max_len){
			max_len=str.length();
		}else{
			int str_len=str.length();
			for(int i=1;i<=max_len-str_len;i++){
				str.push_back(' ');
			}
		}
		sen.push_back(str);
	}
	for(int i=0;i<max_len;i++){
		for(int j=sen.size()-1;j>=0;j--){
			if(sen[j].length()>=i){
				cout<<sen[j][i];
			}else{
				continue;
			}
		}
		cout<<endl;
	}
}
