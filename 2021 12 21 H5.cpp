#include<iostream>
using namespace std;
int main(){
	int n,count=1;
	cin>>n;
	while(n--){
		cout<<"Case #"<<count++<<":"<<endl;
		string str;
		cin>>str;
		int len=str.length();
		int x[len],y[len],index=0;
		int temp_x=0,temp_y=0,max_y=-10,min_y=0;
		char graph[len];
		for(char ch:str){
			if(ch=='R'){
				graph[index]='/';
				x[index]=temp_x;
				y[index]=temp_y++;
			}else if(ch=='F'){
				graph[index]='\\';
				x[index]=temp_x;
				y[index]=--temp_y;
			}else{
				graph[index]='_';
				x[index]=temp_x;
				y[index]=temp_y;
			}
			temp_x++;
			index++;
		}
		for(int temp:y){
			if(temp>max_y){
				max_y=temp;
			}
			if(temp<min_y){
				min_y=temp;
			}
		}
		for(int i=max_y;i>=min_y;i--){
			cout<<"| ";
			int x_ind=0;
			for(int j=0;j<len;j++){
				if(y[j]==i){
					for(;x_ind<j;x_ind++){
						cout<<' ';
					}
					x_ind++;
					cout<<graph[j];
				}
			}
			cout<<endl;
		}
		cout<<'+';
		for(int i=0;i<len+2;i++){
			cout<<'-';
		}
		cout<<"\n\n";
	}
}
