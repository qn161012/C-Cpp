#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"nhap vao n: ";
	cin>>n;
	for(int i=0 ; i<=100 ; i++){
		cout<<i<<"  ";
		if(i==n){
			break;
		}
	}
}
