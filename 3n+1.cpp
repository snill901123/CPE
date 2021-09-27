#include<bits/stdc++.h>
using namespace std;
int main(){
	int min,max,cycle_length=0,curr_cycle=0;
	while(cin>>min>>max){
		cout<<min<<" "<<max<<" ";
		if(min>max){
			swap(min,max);
		}
		while(min<=max){
		int temp=min;
			while(temp!=1){
				if(temp%2){
					temp=temp*3+1;
				}else{
					temp/=2;
				}
				curr_cycle++;
			}
			curr_cycle++;
			if(curr_cycle>cycle_length){
				cycle_length=curr_cycle;
			}
			curr_cycle=0;
			min++;
		}
		cout<<cycle_length<<endl;
		cycle_length=0;
	}
}
