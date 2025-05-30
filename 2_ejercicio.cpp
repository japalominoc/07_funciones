#include<iostream>
using namespace std;

int Calcular_MCD(int, int);
int main(){
	int num1,num2;
	int mcm,MCD;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if(num1!=0 && num2!=0){
		MCD=Calcular_MCD(num1,num2);
		mcm=(num1*num2)/MCD;
	}
	else{
		cout<<"ERROR: Introduzca numeros diferentes que 0";
		return 0;
	}
	cout<<"------------------------------"<<endl;
	cout<<"El mcm es: "<<mcm<<endl;
	cout<<"El MCD es: "<<MCD<<endl;
	return 0;
} 
int Calcular_MCD(int a,int b){
	int c;
	 while (b != 0) {
        a = a % b;
        c = a;
        a = b;
        b = c;
    }
    return a;
}