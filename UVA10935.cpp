#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	while(cin>>n && n){
		if(n==1){
			cout<<"Discarded cards:\nRemaining card: 1\n";
			continue;
		}
		cout<<"Discarded cards: ";
		queue<int>q;
		for(int i=1;i<=n;i++){
			q.push(i);
		}
		int temp=0;
		while(n--){
			if(n==1){
				cout<<q.front()<<endl;
				break;
			}
			cout<<q.front()<<", ";
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout<<"Remaining card: "<<q.back()<<endl;
	}
}
