#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int num,count=0;
		cin>>num;
		int a[num];
		for(int &k:a){
			cin>>k;
		}
		int i=num-1;
		while(i--){
			int j=num-1;
			while(j--){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					count++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
	}
}
