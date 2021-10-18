#include<bits/stdc++.h>
using namespace std;
int main(){
	 int num;
	 while(cin>>num&&num){
	 	while(num/10){
	 		int count=0;
	 		while(num){
	 			count+=num%10;
	 			num/=10;
			}
			num=count; 
		 }
		 cout<<num<<endl;
	 }
}
