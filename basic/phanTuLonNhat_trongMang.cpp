#include<iostream>
using namespace std;

int main(){
	int n;
	int phanTuLonNhat=0;
	cout<<"nhap vao so luong phan tu cua mang arr: ";
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ;i++){
		cout<<"nhap vao phan tu thu "<<i<<" cua mang arr: ";
		cin>>arr[i];
	}
	cout<<"arr=(";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<")";
	for(int i=0 ; i<n ; i++){
		if(arr[i]>=phanTuLonNhat){
			phanTuLonNhat=arr[i];
		}
	}
	cout<<"\nphan tu thu ";
	for(int i=0 ; i<n ; i++){
		if(arr[i]==phanTuLonNhat){
			cout<<i<<" ";
		}
	}
	cout<<"la phan tu lon nhat";
}
