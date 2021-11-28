#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n%5==0 or n%2==0){
			cout<<"N/A\n";
			continue;
		}
		int count=1,sum=1;
		while(sum%n){
			sum%=n;
			sum=sum*10+1;
			count++;
		}
		cout<<count<<endl;
	}
}
