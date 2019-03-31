#include <iostream>
#include <math.h>
using namespace std;

void binario();

int main(int argc, char** argv) {binario();
	
}

void binario(){
	int suma=0, res, bin, dato;
	
	cout<< "Cuantas datos desea ingresar?\n";
	cin>>dato;
	
	cout<< "ingrese el digito:\n";
	for (int i=0; i<dato; i++)
	{
		cin>>bin;
		if ((bin==0) || (bin==1)){
		res=bin*pow(2,i);
		suma=suma+res;
		}
		else {
			cout<< "error\n";
			i=i-1;
		}

	}
	cout<< suma;
}

