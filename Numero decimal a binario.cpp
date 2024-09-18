#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// numero decimal a binario
void ejercicio4(){
	int numero;
	
	cout<<"** Numero decimal a binario ** "<<endl;	
	cout<<"Ingrese un numero entero: ";
	cin>>numero;
	
	while(numero>0){
		cout<<"*"<<numero%2<<endl;
		numero=numero/2;
	}
	
	cout<<"Por favor, LEA EL BINARIO DESDE ABAJO HACIA ARRIBA ^w^ ";
}


int main(){
	
	ejercicio4();
	
	return 0;
}
