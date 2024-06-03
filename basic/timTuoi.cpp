#include<iostream>
using namespace std ;
/*hay viet chuong trinh nhap vao ten, tuoi cua mot nguoi va so nam can tinh tuoi.
in ra man hinh sau so nam do, nguoi do bao nhieu tuoi.
*/
int main(){
	string ten;
	int tuoi;
	int namcantinh;
	cout<<"nhap vao ten cua ban: ";
	cin>> ten;
	cout<<"nhap vao tuoi cua ban: ";
	cin>> tuoi;
	if(tuoi<0){
		cout<<"hay quay lai va xoa dau tru di";
	}else{
		cout<<"nhap vao so nam nua can tinh: ";
		cin>>namcantinh;
		if(namcantinh>=0){
			cout<<"so tuoi cua "<<ten<<" sau "<<namcantinh<<" nam nua la: "<<tuoi+namcantinh;
		}else{
			cout<<"hay quay lai va xoa dau tru di";
			}
		}		
	}
