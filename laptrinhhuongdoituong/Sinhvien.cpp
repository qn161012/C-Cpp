#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
	public:
		string hoTen;
		int tuoi;
		string queQuan = "abc";
		void hienthi(){
			cout<<"Ho ten: "<<hoTen;
			cout<<"\nTuoi: "<<tuoi;
			cout<<"\nQue quan: "<<queQuan;
		}
		void dihoc(){
			cout<<"\n"<<hoTen<<", "<<tuoi<<" tuoi , que "<<queQuan<<" dang di hoc";
		}
		
};

int main(){
	Student hocSinh1;
	Student hocSinh2;
	hocSinh1.hoTen="Nguyen Minh Quan";
	hocSinh1.tuoi=13;
	hocSinh1.queQuan="Quang Nam";
	hocSinh2.hoTen="Phan Dang Phuc Long";
	hocSinh2.tuoi=13;
//	hocSinh2.queQuan="Quang Nam";
//	cout<<"thong tin cua hoc sinh 1 la : \n";
//	hocSinh1.hienthi();
//	hocSinh1.dihoc();
//	cout<<"\n\nthong tin cua hoc sinh 2 la: \n";
//	hocSinh2.hienthi();
	hocSinh2.dihoc();
	hocSinh1.dihoc();
}
