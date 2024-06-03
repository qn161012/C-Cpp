#include<iostream>
using namespace std;

void themVaoCuoi(int n , int arr[]){
	n++;
	cout<<"nhap vao phan tu them vao cuoi: ";
	cin>>arr[n-1];
}

int main(){
	int arr[30];
	int n;
	int chon=0;
	while(n>30){
		cout<<"nhap vao so luong phan tu cua mang arr: ";
		cin>>n;
		if(n>30){
			cout<<"gioi han cua phan tu la 30\nhay nhap lai\n";
		}
	}
	for(int i=0 ; i<n ; i++){
		cout<<"nhap vao phan tu thu "<<i<<" cua mang: ";
		cin>>arr[i];
	}
	while(chon!=4){
		cout<<"1.them phan tu vao cuoi\n2.them pha tu vao dau\n3.xoa phan tu\n4.tat chuong trinh";
		cout<<"\nban chon: ";
		cin>>chon;
		if(chon==1){
			if(n!=30){
				themVaoCuoi(n , arr);
			}else{
				cout<<"gioi han cua arr la 30 phan tu \n khong the them phan tu\n";
			}
		}
	}
	
}
