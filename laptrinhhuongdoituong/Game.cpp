#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Game{
	public:
		string tenGame;
		string ngaySX;
		int SLnguoiChoi;
		int doanhThu;
		bool coNoiTieng;
		string moTa;
		void hienThi(){
			cout<<"ten game: "<<tenGame;
			cout<<"\nngay san xuat: ngay "<<ngaySX;
			cout<<"\nso luong nguoi choi: "<<SLnguoiChoi<<" nguoi choi";
			cout<<"\ndoanh thu: "<<doanhThu<<" USD";
			if(coNoiTieng==true){
				cout<<"\nco noi tieng";
			}else{
				cout<<"\nkhong noi tieng";
			}
			cout<<"\nmo ta: "<<moTa;
		}
		Game themMoi(string tenGame,string ngaySX,int SLnguoiChoi,int doanhThu,bool coNoiTieng,string moTa){
			this->tenGame=tenGame;
			this->ngaySX=ngaySX;
			this->SLnguoiChoi=SLnguoiChoi;
			this->doanhThu=doanhThu;
			this->coNoiTieng=coNoiTieng;
			this->moTa=moTa;
			return *this;
		}
		Game chinhSua (){
			int chinhsua;
			cout<<"\ncac thuoc tinh: ";
			cout<<"\n1.ten game\n2.ngay san xuat\n3.so luong nguoi choi";
			cout<<"\n4.doanh thu\n5.noi tieng\n6.mo ta";
			cout<<"\nchinh sua thuoc tinh thu: ";
			cin>>chinhsua;
			if(chinhsua==1){
				cout<<"nhap vao ten game: ";
				cin>>this->tenGame;
			}
			return *this;
		}
};

int main(){
	Game game1;
	Game game2;
	game1.themMoi("plant vs zombie","05/05/2009",200000000,1000000,true,"plant vs zombie la tro choi the loai phong thu thap");
	game1.hienThi();
	game2.themMoi("among us","15/06/2018",100000000,665000000,true,"among us la tro choi truc tuyen cho phep 4-15 nguoi choi trong mot phong\n trong do 1-3 nguoi la ke mao danh con lai la cac thanh vien phi hanh doang");
	
}
