#include<iostream>
using namespace std;

int main() {
	int a = 6;
	int* p = &a;
	int* k;
	cout << a<<endl;
	cout << p<<endl;
	cout << &p<< endl;
	k = p;
	cout << k<<endl;
	cout<< &k;
}                                                                                                                                           
