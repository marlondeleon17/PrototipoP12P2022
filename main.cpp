#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void menu_general( );
void catalogos ();
void procesos ();
void informes ();
void menu1 ();
int selection;


int main (){



   do{

	 menu_general();
     menu1();

}while(selection !=4);
    return 0;



    return 0;
}



void menu_general (void )
{


    cout << "------------Menu general: Marlon Ruben De Leon Gonzalez 9959-19-460--------" <<endl;

	cout << "indica que opcion va a seleccionar: " << endl;


	cout << "(1)Catalogos---" << endl;

	cout << "(2)Procesos-------" << endl;

	cout << "(3)Informes------" << endl;

	cout << "(4)salir-------------------------------" << endl;

	cout << "su opcion a elegir es: " << endl;

	cin >>selection;



	cout << endl << endl;

}



void menu1()
{

	switch (selection){
		case 1:

		    catalogos();

		break;

		case 2:

		    procesos();

		break;

		case 3:

		    informes();

		break;

		case 4:
		   cout << "--------------QUE TENGA UN BUEN DIA--------------"<< endl;
		break;

		default:
		   cout << "opcion equivocada" << endl << endl;
		break;
   }
}
