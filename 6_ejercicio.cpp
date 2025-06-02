#include<iostream>
using namespace std;
bool es_perfecto(int);
int main(){
	int num;
	do{
		cout<<"Ingrese un numero positivo: ";
		cin>>num;
	}while(num<1);
	
	if(es_perfecto(num)){
		cout<<"El numero "<<num<<" es perfecto."<<endl;
	}
	else{
		cout<<"El numero "<<num<<" no es perfecto."<<endl;
	}
	return 0;
}
bool es_perfecto(int a){
	int suma = 0;
	cout << "Divisores propios de " << a << ": "<<endl;
	for(int i = 1; i <= a / 2; i++){
		if(a % i == 0){
			cout << i <<endl;
			suma += i;		
		}
	}
	cout << endl;
	return suma == a;
}