#include<iostream>
using namespace std;
int main(){
	int m,n,count=0;
	char ch;
	while(cin>>m>>n &&m){
		int a[m+2][n+2]{0};
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>ch;
				if(ch=='*'){
					for(int x=-1;x<2;x++){  //decide 3x3 square
						for(int y=-1;y<2;y++){
							a[i+x][j+y]++;
						}
					}
					a[i][j]=-10;  //negative express * 
				}
			}
		}
		if(count)cout<<endl;
		cout<<"Field #"<<++count<<":"<<endl;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]<0){
					cout<<'*';
				}else{
					cout<<a[i][j];
				}
			}
			cout<<endl;
		}
	}
}
