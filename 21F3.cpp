#include<iostream>
using namespace std;
long long gcd(long long a,long long b){
	while(b){
		long long c=a%b;
		a=b;
		b=c;
	}
	return a;
}
void separate(long long &up,long long &under){   //傳參考的約分函式
	if(under==1)return;
	long long g=gcd(up,under);
	up/=g;
	under/=g;
	return;
}
int main(){
	long long v1,d1,v2,d2;
	int count=1;
	while(cin>>v1>>d1>>v2>>d2){  //v1 d1 Mr.Ed
		if(v1==0 and v2==0 and d1==0 and d2==0)break;
		separate(d1,v1);
		separate(d2,v2);
		/*註記*不可直接將d1/v1 , d2/v2   因為小數點後可能有好幾位 
		會儲存不到而導致比對錯誤,所以通分後再比大小*/
		long long under=v1*v2*2;  //乘2是因為有兩個人，所以分母乘2就是除以2的意思
		d1*=v2;
		d2*=v1;
		if(d1<d2){
			cout<<"Case #"<<count<<": You owe me a beer!"<<endl;
		}else{
			cout<<"Case #"<<count<<": No beer for the captain."<<endl;
		}
		long long sum_up=d1+d2;
		separate(sum_up,under);
		if(under==1){
			cout<<"Avg. arrival time: "<<sum_up<<endl;
		}else{
			cout<<"Avg. arrival time: "<<sum_up<<"/"<<under<<endl;
		}
		count++;
	}
}
