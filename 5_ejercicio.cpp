#include<iostream>
using namespace std;

int suma_divisores(int);
bool son_amigos(int, int); 
int main(){
	int num1,num2;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if (num1 <= 0 || num2 <= 0) {
    	cout << "Ambos numeros deben ser positivos." << endl;
        return 1; 
    }
	if (son_amigos(num1,num2)) {
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
bool son_amigos(int a, int b) {
    return suma_divisores(a) == b && suma_divisores(b) == a;
}