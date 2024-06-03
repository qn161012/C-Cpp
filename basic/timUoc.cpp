#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"nhap vao mot so duong a: ";
	cin>>a;
	if(a>=0){
		if(a==0){
			cout<<"0 co the chia het cho moi so";
		}else{
			cout<<"cac uoc cua a la: ";
			for(int i=1 ; i<=a ; i=i+1){
				if(a%i==0){
					cout<<i<<" ";
				}
			}
		}

	}else{
		cout<<"a phai la so duong";
	}
}
