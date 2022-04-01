#include<iostream>
using namespace std;

int main(){
    int x= 2;//entero
    float y= 3.1416; //real o flotante
    char c='a';
    char curso[20]="Estructura de datos";
    string s;
    cout<<"Estamos comenzando el curso"<<curso<<endl;
    cout<<"Ahora leemos algo de la entrada estandar(teclado)"<<endl;
    cout<<"Ingrese un numero entero";
    cin>>x;
    cout<<"Ingrese una frase: ";
    fflush(stdin);
    getline(cin,s);
    cout<<"Has ingresado x "<<x<< "y s= "<<s<<endl; 
	return 0;
}