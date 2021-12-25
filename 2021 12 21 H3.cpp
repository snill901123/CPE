#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int dir,dp[m+1][n+1];
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			dp[i][j]=0;
		}
	}
	int x,y;
	while(cin>>x>>y){
		char direction;
		string s;
		cin>>direction;
		cin>>s;
		
		if(direction=='E'){
			dir=0;
		}else if(direction=='S'){
			dir=1;
		}else if(direction=='W'){
			dir=2;
		}else{
			dir=3;
		}
		bool flag=0;
		for(char ch:s){
			if(flag)break;
			if(ch=='R'){
				dir=(dir+1)%4;
			}else if(ch=='L'){
				dir=(dir+3)%4;
			}else{     //  F
				if(dir==0){
					x++;
					if(x>m && dp[x-1][y]){
						x--;
					}else if(x>m){
						flag=1;
						x--;
						dp[x][y]=1;
					}
				}else if(dir==1){
					y--;
					if(y<0 && dp[x][y+1]){
						y++;
					}else if(y<0){
						flag=1;
						y++;
						dp[x][y]=1;
					}
				}else if(dir==2){
					x--;
					if(x<0 && dp[x+1][y]){
						x++;
					}else if(x<0){
						flag=1;
						x++;
						dp[x][y]=1;
					}
				}else if(dir==3){
					y++;
					if(y>n && dp[x][y-1]){
						y--;
					}else if(y>n){
						flag=1;
						y--;
						dp[x][y]=1;
					}
				}
			}
		}
		cout<<x<<" "<<y<<" ";
		if(dir==0){
			cout<<'E';
		}else if(dir==1){
			cout<<'S';
		}else if(dir==2){
			cout<<'W';
		}else{
			cout<<'N';
		}
		if(flag)cout<<" LOST";
		cout<<endl;
	}
}
