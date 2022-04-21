#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int selection4;
void informes (void )
{

   do{





    cout << "------------informes--------" <<endl;

	cout << "indica que opcion va a seleccionar: " << endl;

	cout << "(1) talonarios de pago----------------------" << endl;

	cout << "(2) colegiatura-----------------------------" << endl;

	cout << "(3) boletas de pago de multas insolventes---" << endl;

	cout << "(4) inscripcion-----------------------------" << endl;

	cout << "(5) formulario de recuperacion--------------" << endl;

	cout << "(6) acto de graduacion----------------------" << endl;

	cout << "(7) salir-----------------------------------" << endl;

	cout << "su opcion a elegir es: " << endl;

	cin >> selection4;

	cout << endl << endl;

	}while(selection4!=7);
}
