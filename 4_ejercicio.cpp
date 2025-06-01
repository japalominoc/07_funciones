#include<iostream>
using namespace std;
int cal_divisores(int);
int main(){
	int num,cd=0;
	cout<<"Ingrese un numero: ";
	cin>>num;
	if(num<=1){
		cout<<num<<" no es primo"<<endl;
		return 0;
	}
	cd=cal_divisores(num);
	if(cd==2){
		cout<<num<<" es primo"<<endl;
	}
	else{
		cout<<num<<" no es primo"<<endl;		
	}
	return 0;
}
int cal_divisores(int a){
	int cd=0;
	for(int i=1;i<=a;i++){
		if(a % i==0){
			cd=cd+1;
		}
	}
	return cd;
}