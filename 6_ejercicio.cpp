#include<iostream>
using namespace std;
bool es_perfecto(int);
int main(){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	if(es_perfecto(num)){
		cout<<"El numero "<<num<<" es perfecto."<<endl;
	}
	else{
		cout<<"El numero "<<num<<" no es perfecto."<<endl;
	}
	return 0;
}
bool es_perfecto(int a){
	int suma=0;
	for(int i=1;i<a;i++){
		if(a % i==0){
			suma=suma+i;		
		}
	}
	return suma==a;
}