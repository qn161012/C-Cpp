#include<iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	cout<<"nhap vao a: ";
	cin>>a;
	cout<<"nhap vao b: ";
	cin>>b;
	cout<<"nhap vao c: ";
	cin>>c;
	if(a>b){
		if(b>c){
			cout<<"a;b;c la day so theo thu tu giam dan";
		}else{
			cout<<"a;b;c la day so khong tang hay giam dan";
		}
	}else{
		if(a!=b){
			if(b<c){
				cout<<"a;b;c la day so tang dan";
			}else{
				cout<<"a;b;c la day so khong tang hay giam dan";
			}
		}else{
			cout<<"a;b;c la day so khong tang hay giam dan";
		}
	}
}
