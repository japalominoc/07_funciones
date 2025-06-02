#include<iostream>
using namespace std;
void fibonacci(int);
int main(){
	int num;
	do {
	    cout << "Ingrese la cantidad de terminos a mostrar (mayor que 0): ";
	    cin >> num;
	} while (num < 1);
	fibonacci(num);
	return 0;
}
void fibonacci(int n){
	int a=0,b=1,term;
	cout<<"La serie Fibonacci de "<<n<<" terminos es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a<<" ";
		term=a+b;
		a=b;
		b=term;	
	}
	cout<<endl;
}