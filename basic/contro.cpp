#include<iostream>
using namespace std;

int main() {
	int* p;
	int** k;
	int***n;
	int****t;
	int a = 100;
	p=&a;
	cout<<&n<<"\n";
	k= &p;
	n=&k;
	t=&n;
	cout<<t;
//	p = &a;
//	*p = 9;
//	k = &p;
//	cout << "Dia chi cua p : "<<&p<< endl;
//	cout << "Gia tri cua k : "<<**k<< endl;
}                                                                                                                                           
