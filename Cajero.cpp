#include <iostream>
#include <windows.h>
using namespace std;
class Cajero{
	private: int eleccion;
			 string nombre;
			 string apellido;
			 string correo;
			 string nacionalidad;
			 string usuario;
			 string contrasena;
			 public:
			 	Cajero(int,string,string,string,string,string,string);
			 	void operar();
};
Cajero::Cajero(int eleccion1, string nombre1, string apellido1, string correo1, string nacionalidad1, string usuario1, string contrasena1){
	eleccion= eleccion1;
	nombre= nombre1;
	apellido= apellido1;
	correo=correo1;
	nacionalidad=nacionalidad1;
	usuario=usuario1;
	contrasena=contrasena1;
}
void Cajero::operar(){
	int cual;
	cout<<"Ingresa tu nombre: ";
	cin>>nombre;
	cout<<"Ingresa tu apellido: ";
	cin>>apellido;
	cout<<"Bienvenido de vuelta ";cout<<nombre;cout<<" ";cout<<apellido;cout<<" Que gusto verte de nuevo"<<endl;
	cout<<"Ingresa el usuario que se te fue dado: ";
	cin>>usuario;
	cout<<"Ahora ingresa la contrella: ";
	cin>>contrasena;
	cout<<"Verificando........."<<endl;
	Sleep(2500);
	cout<<"Usuario aceptado"<<endl;
	cout<<"1: Depositar"<<endl;
	cout<<"2: Retirar"<<endl;
	cout<<"3: ver estado de cuenta"<<endl;
	cout<<"4: Ver mi informacion"<<endl;
	cout<<"5: Salir"<<endl;
	cout<<"Que quieres hacer: ";

	for(int i=0; i<50;i++){
		int saldo;
		int depositar;
		int retirar;
		int inforamcion;
		int confirmar;
		int retener;
		saldo=((confirmar-(retirar-depositar)-depositar));
		cin>>cual;
		if(cual==1){
			cout<<"Cuanto quieres depositar: ";
			cin>>depositar;
			cout<<"Por favor ingresa la cantidad para confirmar: ";
			cin>>confirmar;
			cout<<"Deposito aceptado"<<endl;
			cout<<"Que tengas un gran dia"<<endl;
			cout<<"Que mas quieres hacer: ";
		}
		else{
			if(cual==2){
				cout<<"Cuanto deseas retirar de tu cuenta: ";
				cin>>retirar;
				cout<<"Perfecto tu retiro fue un exito"<<endl;
				cout<<"Que mas quieres hacer: ";
			}
			else{
				if(cual==3){
					cout<<"Tu estado de cuenta es el siguiente"<<endl;
					cout<<"Tienes un saldo actual de: ";
					cout<<saldo<<endl;
					cout<<"Escribe el saldo que te aparecio: ";
					cin>>retener;
					cout<<"Perfecto gracias"<<endl;
					cout<<"Que mas quieres hacer: ";
				}
				else{
					if(cual==4){
						cout<<"Tu informacion es la siguiente"<<endl;
						cout<<"Nombre: ";
						cout<<nombre<<endl;
						cout<<"Apellido: ";
						cout<<apellido<<endl;
						cout<<"Usuario: ";
						cout<<usuario<<endl;
						cout<<"contrasella: ";
						cout<<contrasena<<endl;
						cout<<"Nacionalidad: ";
						cout<<"Guatemalteca (Chapin)"<<endl;
						cout<<"Correo Electronico: ";
						cout<<nombre; cout<<"@gmail.com"<<endl;
						cout<<"Que mas quieres hacer: ";
					}
					else{
						if(cual==5){
							break;
						}
					}
				}
			}
		}
	}
	
}

//int main(){
//	int elec;
//	string nomf;
//	string apef;
//	string nada;
//	string nac;
//	string usua;
//	string contra;
//	
//	Cajero cajero(elec,nomf,apef,nada,nac,usua,contra);
//	cajero.operar();
//	
//	return 0;
//	
//}
