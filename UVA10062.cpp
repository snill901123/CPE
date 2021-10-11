#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string>str_vec;
	string str;
	while(getline(cin,str)){
		str_vec.push_back(str);
	}
	for(auto str:str_vec){
		int arr[129]={0};
		for(auto ch:str){
			arr[ch]++;
		}
		for(int i=128;i>=32;i--){
			int min=1000;
			int min_index=0;
			for(int j=128;j>=32;j--){
				if(arr[j]<min && arr[j]){
					min=arr[j];
					min_index=j;
				}
			}
			if(min!=1000){
				cout<<min_index<<" "<<min<<endl;
			}
			arr[min_index]=0;
		}
		if(str!=str_vec[str_vec.size()-1]){
			cout<<endl;
		}
	}
}
