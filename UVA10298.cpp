#include<iostream>
using namespace std;
int main(){
	string str;
	while(cin>>str && str!="."){
		int len=str.length();
		for(int i=1;i<=len;i++){
			if(len%i){
				continue;
			}
			bool flag=0;
			for(int j=0;j+i<len;){
				if(str[j]!=str[j+++i]){
					flag=1;
				}
			}
			if(flag){
				continue;
			}else{
				cout<<len/i<<endl;
				break;
			}
		}
	}
}
