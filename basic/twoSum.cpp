#include<iostream>
using namespace std;

/*cho mot mang cac so nguyen array va so ngyen target,tra ve chi so cua hai so sao cho tong cua chung bang
target
input:array=[2,7,12,15] ; target=9
output:0,1 */

void thatToan (int n , int array[] , int target){
	for(int i=0; i<n ; i++){
		cin>>array[i];
	}
	for(int i=0 ; i<n ; i++){
		for(int k=i+1 ; k<n ; k++){
			if(array[i]+array[k]==target){
				cout<<i<<" "<<k;
				break;
			}
		}
	}
}

int main(){
	int n;
	int target;
	cin>>target;
	cin>>n;
	int array[n];
	thatToan (n , array , target);
}
