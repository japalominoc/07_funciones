#include<iostream>
using namespace std;

int suma_divisores(int);
int main(){
	int num1,num2,suma=0;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	int suma1 = suma_divisores(num1);
	int suma2 = suma_divisores(num2);
	if (suma1 == num2 && suma2 == num1) {
	    cout << num1 << " y " << num2 << " son numeros amigos." << endl;
	} else {
	    cout << num1 << " y " << num2 << " no son numeros amigos." << endl;
	    }
	return 0;
}
int suma_divisores(int a){
	int suma=0;
	for(int i=1;i<a;i++){
		if(a % i==0){
			suma=suma+i;
		}
	}
	return suma;
}