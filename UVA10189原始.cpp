#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,count=0;
	while(cin>>m>>n &&m){
		char a[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				if(a[i][j]=='.')a[i][j]='0';
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]=='*'){
					if(i-1>-1){  //���W������ 
						if(j-1>-1  and a[i-1][j-1]!='*')a[i-1][j-1]+=1;
						if(a[i-1][j]!='*')a[i-1][j]+=1;
						if(j+1<n and a[i-1][j+1]!='*')a[i-1][j+1]+=1;
					}
					if(j-1>-1 and a[i][j-1]!='*'){   //�P�ƥ� 
						a[i][j-1]+=1;
					}
					if(j+1<n and a[i][j+1]!='*'){    //�P�ƥk 
						a[i][j+1]+=1;
					}
					if(i+1<m){   //���U������ 
						if(j-1>-1  and a[i+1][j-1]!='*')a[i+1][j-1]+=1;
						if(a[i+1][j]!='*')a[i+1][j]+=1;
						if(j+1<n and a[i+1][j+1]!='*')a[i+1][j+1]+=1;
					}
				}
			}
		}
		if(count)cout<<endl;
		cout<<"Field #"<<++count<<":"<<endl;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
}
