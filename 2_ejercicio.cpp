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
	
	MCD=Calcular_MCD(num1,num2);
	mcm=(num1*num2)/MCD;
	cout<<"------------------------------"<<endl;
	cout<<"El mcm es: "<<mcm<<endl;
	cout<<"El MCD es: "<<MCD<<endl;
	return 0;
} 
int Calcular_MCD(int a,int b){
	int MCD, i=1;
	while(i<=a && i<=b){
		if(a % i==0 && b % i==0){
			MCD=i;
		}	
		i=i+1;
	}
	return MCD;
}