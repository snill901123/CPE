#include<bits/stdc++.h>
using namespace std;
int n,m;
bool isOdd(int x){
	return x%2;
}
bool comp(int a,int b){
	//���O**return�Ȭ�1�Aa���e��** 
	if(a%m != b%m)return a%m<b%m;   //�l�Ƥ��P�A�l�Ƥp�b�e
	//early return�ѤU���N�O�l�ƬۦP��  
	if(isOdd(a) != isOdd(b))return isOdd(a);  //�_�Ʀb�e�A���Ʀb�� 
	if(isOdd(a))return a>b;   //�P���_�ơA�j�Ʀb�e 
	return a<b;   //�̫�ѤU�P�����ơA�p�Ʀb�e 
}
int main(){
	cin>>n>>m;
	cout<<n<<" "<<m<<endl;
	int arr[n];
	for(int &num:arr){
		cin>>num;
	}
	sort(arr,arr+n,comp);
	for(int num:arr){
		cout<<num<<endl;
	}
	cout<<0<<" "<<0<<endl;
}
