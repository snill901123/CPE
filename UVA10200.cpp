#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		double dif=b-a+1;
		int count=dif;
		while(a<=b){
			int temp=a*a+a+41;
			for(int i=2;i<=sqrt(temp);i++){
				if(!(temp%i)){
					count--;
					break;
				}
			}
			a++;
		}
		cout<<fixed<<setprecision(2)<<count/dif*100+0.00000001<<endl;
	}
}
