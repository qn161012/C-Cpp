#include<iostream>
using namespace std;

int main() {
	int* p;
	int a = 100;
	p = &a;
	*p = 9;
	int** k;
	k = &p;
//	cout << "Dia chi cua p : "<<&p<< endl;
	cout << "Gia tri cua k : "<<**k<< endl;
}                                                                                                                                           
