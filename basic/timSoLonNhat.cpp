#include<iostream>
using namespace std ;

int main(){
	int a;
	int b;
	int c;
	cout<<"nhap vao so a:";
	cin>>a;
	cout<<"nhap vao so b:";
	cin>>b;
	cout<<"nhap vao so c:";
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<"so "<<a<<" lon nhat";
		}else{
			cout<<"so "<<c<<" lon nhat";
		}
	}else{
		if(b>c){
			cout<<"so "<<b<<" lon nhat";
		}else{
			cout<<"so "<<c<<" lon nhat";
		}
	}
}
