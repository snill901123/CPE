#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b && a){
		int sum=0,carry=0;
		while(a or b){
			int temp=a%10+b%10+carry;
			carry=temp/10;
			sum+=carry;
			a/=10;
			b/=10;
		}
		if(sum>1){
			cout<<sum<<" carry operations."<<endl;
		}else if(sum){
			cout<<"1 carry operation."<<endl;
		}else{
			cout<<"No carry operation."<<endl;
		}
	}
}
