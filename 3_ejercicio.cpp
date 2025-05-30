#include<iostream>
using namespace std;

int factorial(int);
int main(){
	int m,n,comb;
	cout<<"-----------------COMBINACIONES---------------------"<<endl;
	cout<<"Ingrese el total de elementos(m>=0): ";
	cin>>m;
	cout<<"Ingrese la cantidad de elementos a elegir(n>=0): ";
	cin>>n;
	if(m<0 || n<0){
		cout<<"ERROR: los valores de m y n deben ser mayores a 0"<<endl;
		return 1;
	}
	else if(n>m){
		cout<<"ERROR: n debe ser menor que m "<<endl;
		return 1;
	}
	comb=factorial(m)/((factorial(n))*(factorial(m-n)));
	cout<<"----------------------------------------"<<endl;
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