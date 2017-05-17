// listingi.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include "Klient.h" 
#include <limits>
using namespace std;



int main()
{
	Klient nowy;
	cout << "Witam w programie do wystawiania faktur VAT" << endl;
	nowy.menu();
	/*Klient nowy;

	nowy.wypelnij();
	cout << "-------------" << endl;
	nowy.wyswietl();*/
	getchar();
	getchar();

	return 0;
}

// do zrobienia:
// popraw wyswietlanie odbiorcy i nabywcy
// zastanow sie nad jakims sposobem w ktorym  bedzie mozna dodac kilka towarow do faktury
// porob zabezpieczenia przy wpisywaniu danych do programu by reagowal odpowiednio do sytuacji
