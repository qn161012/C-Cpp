#include<iostream>
using namespace std;

int main(){
	double banKinh;
		cout<<"nhap vao ban kinh cua hinh tron: ";
		cin>> banKinh;
		if(banKinh>=0){
			cout<<"chu vi hinh tron la: "<<banKinh*2*3.14;
			cout<<"\ndien tich hinh tron la: "<<banKinh*banKinh*3.14;
		}else{
			cout<<"ban kinh hinh tron khong phai so am";
		}
}
