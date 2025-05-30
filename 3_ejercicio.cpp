#include<iostream>
using namespace std;

int factorial(int);
int main(){
	int m,n,comb;
	cout<<"Ingrese el total de elementos: ";
	cin>>m;
	cout<<"Ingrese la cantidad de elementos a elegir: ";
	cin>>n;
	comb=factorial(m)/((factorial(n))*(factorial(m-n)));
	cout<<"El valor de la combinatoria es: "<<comb;
	return 0;
}
int factorial(int a){
	int f=1;
	for(int i=2;i<=a;i++){
		f=f*i;
	}
	return f;
}