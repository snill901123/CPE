#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int num,sum=0;
		cin>>num;
		int a[num];
		for(int &k:a){
			cin>>k;
		}
		sort(a,a+num);
		for(int x:a){
			sum+=abs(a[num/2]-k);
		}
		cout<<sum<<endl;
	}
}
