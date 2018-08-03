#include<iostream>
#include <iomanip>  
#include<math.h>

using namespace std;

int main(){
	cout<<"MENU"<<endl;
	cout<<"1.Ejercicio: Polinomios"<<endl;
	cout<<"2.Ejercicio: Seno"<<endl;
	cout<<"3.Ejercicio: Triangulo Pascal"<<endl;
	cout<<"Ingrese la opcion deseada"<<endl;
	int menu;
	cin>>menu;
 	while(menu!=0 && menu<4){
		switch(menu){
			case 1:
				int* terminos = new int[3];
				cout<<"Ingrese el termino del primer polinomio x^2"<<endl;
				cin>>terminos[0];
				cout<<"Ingrese el segundo termino (x)"<<endl;
				cin>>terminos[1];
				cout<<"Ingrese el tercer termino (y)"<<endl;
				cin>>terminos[2];
				cout<<"Ecuacion ingresada es: "<<terminos[0]<<"x^2 + "<<terminos[1]<<"x + "<<terminos[2]<<endl;
				cout<<"Ecuacion factorizada: " ;
				double term1 =-(-terminos[1]+sqrt(terminos[1]*terminos[1]-4*terminos[0]*terminos[2]))/(2*terminos[0]);
				double term2 =-(-terminos[1]-sqrt(terminos[1]*terminos[1]-4*terminos[0]*terminos[2]))/(2*terminos[0]);
				if(term1>0 && term2>0){
					cout<<"("<<terminos[0]<<"x +"<<term1<<")("<<"x + "<<term2<<")"<<endl;
				}
				else{
					 cout<<"("<<terminos[0]<<"x "<<term1<<")("<<"x "<<term2<<")"<<endl;
				}
				delete[] terminos;
				
			break;

			case 2:
				
			break;
			       
	      		 
		}//fin swtich 
	cout<<"MENU"<<endl;
        cout<<"1.Ejercicio: Polinomios"<<endl;
        cout<<"2.Ejercicio: Seno"<<endl;
        cout<<"3.Ejercicio: Triangulo Pascal"<<endl;
        cout<<"Ingrese la opcion deseada"<<endl;
        cin>>menu;
	}//fin while

	



}
