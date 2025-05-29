#include<iostream>
using namespace std;

float calculosuma(int);
int factorial(int);

int main(){
	int num;
	float suma;
	cout<<"Ingrese el valor de n: ";
	cin>>num;
	suma=calculosuma(num);
	cout<<"La suma de la serie es: "<<suma;
	return 0;
}

float calculosuma(int num){
	float suma=0;
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