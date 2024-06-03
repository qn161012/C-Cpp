#include<iostream>
using namespace std;

void nhapVaoMang(int n , int arr[]){
	for(int i=0 ; i<n ; i++){
		cout<<"nhap vao phan tu thu "<<i<<" cua mang: ";
		cin>>arr[i];
	}
}

void inRaMang(int n , int arr[]){
	cout<<"arr=( ";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<")";
}

void sapXepNhoDenLon(int n , int arr[]){
	int doivitri;
	for(int i=0 ; i<n ; i++){
		for(int k=i+1 ; k<n ; k++){
			if(arr[k]<arr[i]){
				doivitri=arr[i];
				arr[i]=arr[k];
				arr[k]=doivitri;
			}
		}
	}
	cout<<"\nsap xep theo thu tu tang dan ta duoc arr=( ";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<")";
}

void sapXepLonDenNho(int n , int arr[]){
	int doiViTri;
	for(int i=0 ; i<n ; i++){
		for(int k=i+1 ; k<n ; k++){
			if(arr[k]>arr[i]){
				doiViTri=arr[i];
				arr[i]=arr[k];
				arr[k]=doiViTri;
			}
		}
	}
	cout<<"\nsap xep theo thu tu dam dan ta duoc arr=( ";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<")";
}

int main(){
	int n;
	cout<<"nhap vao so phan tu cua mang arr: ";
	cin>>n;
	int arr[n];
	nhapVaoMang(n ,arr);
	inRaMang(n , arr);
	sapXepLonDenNho(n,arr);
	sapXepNhoDenLon(n ,arr);
}
