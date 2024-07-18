#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Giaovien{
	public:
		string hoTenGV;
		int tuoiGV;
		int luongGV;
		string queQuanGV;
		void hienThi(){
			cout<<"\nho ten: "<<hoTenGV;
			cout<<"\ntuoi: "<<tuoiGV;
			cout<<"\nluong: "<<luongGV<<" dong";
			cout<<"\nque quan: "<<queQuanGV;
		}
		void diDay(){
			cout<<"\ngiao vien "<<hoTenGV<<"; "<<tuoiGV<<" tuoi; "<<"que o "<<queQuanGV<<"; luong "<<luongGV<<" dong dang di day";
		}
		Giaovien themMoiGV(string hoTenGV,int tuoiGV,int luongGV,string queQuanGV){
			this->hoTenGV=hoTenGV;
			this->tuoiGV=tuoiGV;
			this->luongGV=luongGV;
			this->queQuanGV=queQuanGV;
			return *this;
		}
};

int main(){
	Giaovien giaoVien1;
	Giaovien giaoVien2;
	giaoVien1=giaoVien1.themMoiGV("Nguyen Thi Thanh Thao",30,6000000,"Hue");
	giaoVien1.hienThi();
	giaoVien2=giaoVien2.themMoiGV("Nguyen Phan Le",45,6000000,"Hue");
	giaoVien2.hienThi();
}
