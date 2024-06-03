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
	for(int i=n ; i<30 ;i++){
		arr[i]=0;
	}
}

void themVaoCuoi(int & n , int arr[]){
	n++;
	cout<<"nhap vao phan tu them vao cuoi: ";
	cin>>arr[n-1];
	inRaMang(n , arr);
}

void sapXepNhoDenLon(int & n , int arr[]){
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
	cout<<"sap xep theo thu tu tang dan ta duoc arr=( ";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<")\n";
}

void sapXepLonDenNho(int & n , int arr[]){
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
	cout<<"sap xep theo thu tu dam dan ta duoc arr=( ";
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<")\n";
}

void themVaoDau(int & n , int arr[] ){
	n=n+1;
	for(int i=1 ; i<n ; i++){
		arr[n-i]=arr[n-i-1];
	}
	cout<<"nhap vao phan tu them vao dau: ";
	cin>>arr[0];
	inRaMang(n , arr);
}

void xoaPhanTuCuoi(int & n , int arr[]){
	arr[n-1]=0;
	n--;
	inRaMang(n , arr);
}

void xoaPhanTuDau(int & n , int arr[]){
	arr[0]=0;
	for(int i=0 ; i<n ; i++){
		arr[i]=arr[i+1];
	}
	n=n-1;
	inRaMang(n , arr);
}

void timTheoViTri(int n , int arr[]){
	int viTri;
	cout<<"nhap vao vi tri phan tu can tim: ";
	cin>>viTri;
	if(viTri>=n||viTri<0){
		cout<<"khong co phan tu o vi tri so "<<viTri;
	}else{
		cout<<"phan tu o vi tri so "<<viTri<<" co gia tri la "<<arr[viTri];
	}
}

void timTheoGiaTri(int n , int arr[]){
	int giaTri;
	int phanTuTimDuoc;
	cout<<"nhap vao gia tri phan tu can tim: ";
	cin>>giaTri;
	for(int i=0 ; i<n ; i++){
		if(arr[i]==giaTri){
			phanTuTimDuoc++;
		}
	}
	cout<<"co "<<phanTuTimDuoc<<" phan tu co gia tri la "<<giaTri<<", phan tu do o vi tri so ";
	for(int i=0 ; i<n ; i++){
		if(giaTri==arr[i]){
			cout<<i<<" ";
		}
	}
}

void thayThe(int n , int arr[]){
	int phanTuCanThayThe;
	int giaTriMoi;
	cout<<"nhap vao vi tri cua phan tu can thay the: ";
	cin>>phanTuCanThayThe;
	cout<<"nhap vao gia tri moi cua phan tu do: ";
	cin>>giaTriMoi;
	inRaMang(n , arr);
}

void themVaoK(int &n , int arr[]){
	int k;
	n++;
	cout<<"nhap vao vi tri can them phan tu: ";
	cin>>k;
	if(k>=n||k<0){
		cout<<"khong co phan tu nao o vi tri so "<<k;
	}
	for(int i=k ; i<n ; i++){
		arr[n-i+k]=arr[n-i+k-1];
	}
	cout<<"nhap vao gia tri phan tu: ";
	cin>>arr[k];
	inRaMang(n , arr);
}

void xoaPhanTuK(int &n , int arr[]){
	int k;
	cout<<"nhap vao vi tri phan tu can xoa: ";
	cin>>k;
	if(k>=n||k<0){
		cout<<"khong co phan tu nao o vi tri so "<<k;
	}else{
		arr[k]=0;
		for(int i=k ; i<n ; i++){
			arr[i]=arr[i+1];
		}
		n--;
		inRaMang(n , arr);
	}
	
}
int main(){
	int n;
	int arr[30];
	int chon=0;
	while(n>30||n<1){
		cout<<"nhap vao so luong phan tu cua mang arr: ";
		cin>>n;
		if(n>30){
			cout<<"gioi han cua phan tu la 30\nhay nhap lai\n";
		}
		if(n<1){
			cout<<"so phan tu cua arr phai lon hon hoac bang 1\nhay nhap lai\n";
		}
	}
	nhapVaoMang(n ,arr);
	inRaMang(n , arr);
	while(chon!=12){
		cout<<"\n1.them phan tu vao cuoi\n2.them phan tu vao dau\n3.them vao vi tri thu k\n4.xoa phan tu cuoi";
		cout<<"\n5.xoa phan tu dau\n6.xoa phan tu thu k\n7.sap xep lon dan\n8.sap xep nho dan";
		cout<<"\n9.tim phan tu theo vi tri\n10.tim phan tu theo gia tri\n11.thay the phan tu\n12.tat chuong trinh";
		cout<<"\nban chon: ";
		cin>>chon;
		if(chon<1||chon>10){
			cout<<"khong co lua chon nao o vi tri so "<<chon;
			cout<<"\nhay chon lai";
		}
		if(chon==1){
			if(n<30){
				themVaoCuoi(n , arr);
			}else{
				cout<<"gioi han cua arr la 30 phan tu\nkhong the them phan tu";
			}
		}
		if(chon==2){
			if(n<30){
				themVaoDau(n , arr );
			}else{
				cout<<"gioi han cua arr la 30 phan tu\nkhong the them phan tu";
			}
		}
		if(chon==3){
			if(n<30){
				themVaoK(n , arr);
			}else{
				cout<<"gioi han cua arr la 30 phan tu\nkhong the them phan tu";
			}
		}
		if(chon==4){
			if(n>1){
				xoaPhanTuCuoi(n , arr);
			}else{
				cout<<"mang arr phai co it nhat 1 phan tu\nkhong the xoa phan tu";
			}
		}
		if(chon==5){
			if(n>1){
				xoaPhanTuDau(n , arr);
			}else{
				cout<<"mang arr phai co it nhat 1 phan tu\nkhong the xoa phan tu";
			}
		}
		if(chon==6){
			if(n>1){
				xoaPhanTuK(n , arr);
			}else{
				cout<<"mang arr phai co it nhat 1 phan tu\nkhong the xoa phan tu";
			}
		}
		if(chon==7){
			sapXepNhoDenLon(n , arr);
		}
		if(chon==8){
			sapXepLonDenNho(n , arr);
		}
		if(chon==9){
			timTheoViTri(n , arr);
		}
		if(chon==10){
			timTheoGiaTri(n , arr);
		}
		if(chon==11){
			thayThe(n , arr);
		}
		if(chon==12){
			cout<<"da tat chuong trinh";
		}
	}

}
