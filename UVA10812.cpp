#include<iostream>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		int x=(a+b)/2,y=a-x;
		if(y>-1 && x-y==b){
			cout<<x<<" "<<y<<endl;
		}else{
			cout<<"impossible"<<endl;
		}
	}
}
