#include<iostream>
using namespace std;

double calculosuma(int);
int factorial(int);

int main(){
	int num;
	double suma;
	cout<<"Ingrese el valor de n: ";
	cin>>num;
	if(num<=0){
		cout<<"ERROR: Introduzca un numero mayor que 0"<<endl;
		return 0;
	}
	else{
		suma=calculosuma(num);
		cout.precision(4);
		cout<<fixed;
		cout<<"La suma de la serie es: "<<suma;
	}
	return 0;
}

double calculosuma(int num){
	double suma=0;
	for(int i=1;i<=num;i++){
		suma=suma+((factorial(i))/(i*2.00));
	}
	return suma;
}

int factorial(int m){
	int f=1;
	for(int i=2;i<=m;i++){
		f=f*i;
	}
	return f;
}