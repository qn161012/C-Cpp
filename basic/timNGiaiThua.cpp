#include<iostream>
using namespace std;

int main(){
	int n;
	int tich=1;
	cout<<"nhap vao n giai thua: ";
	cin>>n;
	if(n>=0){
		for(int i=1;i<=n;i++){
			if(i==n){
				cout<<i;
			}else{
				cout<<i<<"*";
			}
			tich=tich*i;
		}
		cout<<"="<<tich;
	}else{
		cout<<"so giai thua la so duong";
	}
}
