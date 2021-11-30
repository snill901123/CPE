#include<iostream>
#include<Map>
using namespace std;
int main(){
	map<string,int>mp;
	int m,n,salary;
	string word;
	cin>>m>>n;
	while(m--){
		cin>>word>>salary;
		mp[word]=salary;
	}
	while(n--){
		//Because we don't need to use "salary" this variable anymore
		/*So we don't need to declare another variable "sum",we can just
		use "salary" to replace "sum*/
		salary=0;
		while(cin>>word && word!="."){
			if(mp[word]){
				salary+=mp[word];
			}
		}
		cout<<salary<<endl;
	}
}
