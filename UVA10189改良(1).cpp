#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,count=0;
	while(cin>>m>>n &&m){
		char a[m+2][n+2]{'0','0'};
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				if(a[i][j]=='.')a[i][j]='0';
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]=='*')continue;
				if(a[i-1][j-1]=='*')a[i][j]++;  //左上 
				if(a[i-1][j]=='*')a[i][j]++;  //上 
				if(a[i-1][j+1]=='*')a[i][j]++;  //右上 
				if(a[i][j+1]=='*')a[i][j]++;  //右  
				if(a[i][j-1]=='*')a[i][j]++;  //左 
				if(a[i+1][j-1]=='*')a[i][j]++;  //左下
				if(a[i+1][j]=='*')a[i][j]++;  //下
				if(a[i+1][j+1]=='*')a[i][j]++;  //右下
			}
		}
		if(count)cout<<endl;
		cout<<"Field #"<<++count<<":"<<endl;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
}
