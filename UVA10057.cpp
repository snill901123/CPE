#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a[n],count=0,dif,temp;
		for(int &k:a){
			cin>>k;
		}
		sort(a,a+n);
		if(n%2){
			dif=1;
			cout<<a[n/2];
			for(int k:a){
				if(k==a[n/2])count++;
			}
		}else{
			temp=a[n/2-1];
			cout<<temp;
			dif=a[n/2]-temp+1;
			for(int i=0;i<dif;i++){
				for(int k:a){
					if(k==temp+i)count++;
				}
			}
		}
		cout<<" "<<count<<" "<<dif<<endl;
	}
}
