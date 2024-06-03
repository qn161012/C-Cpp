#include<iostream>
using namespace std;

int main(){
	int chieuDai;
	int chieuRong;
	cout<<"nhap vao chieu dai cua hinh chu nhat: ";
	cin>>chieuDai;
	cout<<"nhap vao chieu rong cua hinh chu nhat: ";
	cin>>chieuRong;
	cout<<"dien tich hinh chu nhat la: "<<chieuDai*chieuRong;
	cout<<"\nchu vi hinh chu nhat la:"<<(chieuDai+chieuRong)*2;
}
