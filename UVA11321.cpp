#include<bits/stdc++.h>
using namespace std;
int n,m;
bool isOdd(int x){
	return x%2;
}
bool comp(int a,int b){
	//爹癘**return1a┕玡メ** 
	if(a%m != b%m)return a%m<b%m;   //緇计ぃ緇计玡
	//early return逞碞琌緇计  
	if(isOdd(a) != isOdd(b))return isOdd(a);  //计玡案计 
	if(isOdd(a))return a>b;   //计计玡 
	return a<b;   //程逞案计计玡 
}
int main(){
	cin>>n>>m;
	cout<<n<<" "<<m<<endl;
	int arr[n];
	for(int &num:arr){
		cin>>num;
	}
	sort(arr,arr+n,comp);
	for(int num:arr){
		cout<<num<<endl;
	}
	cout<<0<<" "<<0<<endl;
}
