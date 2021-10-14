#include<iostream>
#include<vector>
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
		for(int i=1;i<=1000;i++){
			int index=129;
			while(index--){
				if(arr[index]==i){
					cout<<index<<" "<<i<<endl;
				}
			}
		}
		if(str!=str_vec[str_vec.size()-1]){
			cout<<endl;
		}
	}
}
