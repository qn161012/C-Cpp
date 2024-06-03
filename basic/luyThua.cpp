#include<iostream>
using namespace std;

int main(){
	int coSo;
	int soMu;
	int soLanNhan=1;
	int luyThua=1;
	cout<<"nhap vao co so: ";
	cin>>coSo;
	cout<<"nhap vao so mu cua "<<coSo<<": ";
	cin>>soMu;
	if(soMu>0){
		do{
			luyThua=luyThua*coSo;
			soLanNhan++;
		}while(soLanNhan<=soMu);
	}
	cout<<coSo<<" mu "<<soMu<<"="<<luyThua;
}
