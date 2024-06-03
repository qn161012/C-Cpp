#include<iostream>
using namespace std;

int main(){
	int n;
	int phanTuCanTim;
	int soLuongTimDuoc=0;
	cout<<"nhap vao so luong phan tu cua mang arr: ";
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ; i++){
		cout<<"nhap vao phan tu thu "<<i<<" cua mang: ";
		cin>>arr[i];
	}
	cout<<"arr=( ";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<" )";
	cout<<"\nnhap vao gia tri phan tu can tu can tim: ";
	cin>>phanTuCanTim;
	for(int i=0 ; i<n ; i++){
		if(arr[i]==phanTuCanTim){
			soLuongTimDuoc++;
		}
	}
	if(soLuongTimDuoc!=0){
		cout<<"co "<<soLuongTimDuoc<<" phan tu co gia tri la ";
		cout<<phanTuCanTim<<", phan tu o vi tri so ";
		for(int i=0 ; i<n ; i++){
			if(phanTuCanTim==arr[i]){
				cout<<i<<" ";
			}
		}
		cout<<"cua mang arr";
	}else{
		cout<<"khong phan tu nao co gia tri la "<<phanTuCanTim;	
	}
}
