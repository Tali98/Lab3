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
				int* terminos;
				terminos = new int[3];
				cout<<"Ingrese el termino del primer polinomio x^2"<<endl;
				cin>>terminos[0];
				cout<<"Ingrese el segundo termino (x)"<<endl;
				cin>>terminos[1];
				cout<<"Ingrese el tercer termino (y)"<<endl;
				cin>>terminos[2];
				cout<<"Ecuacion ingresada es: "<<terminos[0]<<"x^2 + "<<terminos[1]<<"x + "<<terminos[2]<<endl;
				cout<<"Ecuacion factorizada: " ;
				double term1;
				term1 =-(-terminos[1]+sqrt(terminos[1]*terminos[1]-4*terminos[0]*terminos[2]))/(2*terminos[0]);
				double term2;
				term2 =-(-terminos[1]-sqrt(terminos[1]*terminos[1]-4*terminos[0]*terminos[2]))/(2*terminos[0]);
				if(term1>0 && term2>0){
					cout<<"("<<terminos[0]<<"x +"<<term1<<")("<<"x + "<<term2<<")"<<endl;
				}
				else{
					 cout<<"("<<terminos[0]<<"x "<<term1<<")("<<"x "<<term2<<")"<<endl;
				}
				delete[] terminos;
				
			break;

			case 2:
				double angulo;
				double seno;
				double coseno;
				coseno=0;
				seno=0;
				cout<<"Ingrese el angulo"<<endl;
				cin>>angulo;
				angulo= (angulo*M_PI)/180;
				for (int n = 0 ; n <= 150 ; n++){
					double respuesta;
					respuesta = pow(-1,n);
					double temporal = 2*n+1;
					long double factorial;
					factorial=1;
					for(int k = 1 ; k <= temporal ; k++){
						factorial = k*factorial;
					}
					if(factorial == 0){
						factorial = 1;
					}
					respuesta = pow(-1,n) / factorial * pow(angulo , 2*n+1);
					
					seno = seno+respuesta;
					respuesta = 0;
					factorial = 1;
					temporal  = 1;

				}//fin for seno;
				for (int n  = 0 ; n <= 150 ; n++){
					 double respuesta;
					 double temporal;
					long double factorial;
				       	temporal = 2*n;
					factorial = 1;
					for (int k = 1 ; k <= temporal ; k++){
						factorial = factorial *k;
					}
					if(factorial == 0){
						factorial = 1;
					}
					respuesta = pow(-1,n)/factorial * pow(angulo,2*n);
					coseno = coseno + respuesta;
					respuesta = 0;
					factorial = 1;
					temporal = 1;
				}//fin for coseno				
				angulo =(angulo*180)/M_PI;
				cout<<"El SENO del angulo "<<angulo<<" es "<<seno<<endl;
				cout<<"El COSENO del angulo "<<angulo<<" es "<<coseno<<endl;
			break;
			case 3:
				cout<<"Ingrese cuantas repeticiones desea"<<endl;
				int rep;
				int num;
				int col;
				int num_col;
				num=2;
				col=1;
				num_col=1;
				cin>>rep;
				int set;
				set = 0;
				for(int a = 1 ; a<=rep ; a++){
					cout<<setw(rep-set+1);
					for(int b = 0 ; b<a ; b++){
					cout<<"0 ";
				}
					cout<<endl;
					set++;
			}
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
