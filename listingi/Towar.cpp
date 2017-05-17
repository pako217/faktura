#include "stdafx.h"
#include "Towar.h"
#include <iostream>
#include <String>
#include <iomanip>
#include <fstream>

using namespace std;

Towar::Towar()
{
}

void Towar::dodaj()
{
	cout << "Postepuj zgodnie z wyswietlonymi instrukcjami aby dodac nowy produkt." << endl;
	cout << "Podaj nr artykulu: ";
	getline(cin, nrArt);
	cout << "Podaj nazwe zakupionego towaru.: ";
	getline(cin, nazwaTowaru);
	cout << "Podaj ilosc zakupionego towaru.: ";
	cin >> ileSzt;
	cout << "Podaj cene zakupu: ";
	cin >> cenaNettoZakupu;
	cout << "Podaj marze na podany produkt: ";
	cin >> marza;
	cout << "Podaj stawke VAT: ";
	cin >> Vat;
}


double Towar::obliczBrutto(double cenaNettoSprzed, double vat, double cenaBruttoSprzed)
{
	//funkcja ma zwrocic cenê brutto zakupionego towaru powiekszon¹ o 10% mar¿y

	cenaBruttoSprzed = (obliczNetto( cenaNettoZakupu, cenaNettoSprzed, marza)*(Vat / 100) + obliczNetto(cenaNettoZakupu,  cenaNettoSprzed, marza));
	return cenaBruttoSprzed;
}
// oblicza cene netto sprzedazy po dodaniu marzy
double Towar::obliczNetto(double cenaNettoZakupu, double cenaNettoSprzed, double marza)
{
	cenaNettoSprzed = (cenaNettoZakupu *(marza / 100));
	return (cenaNettoSprzed + cenaNettoZakupu)*ileSzt;
}

// funkcja do poprawki!!!!!

void Towar::pokaz()
{
	// Trzeba obliczyc cene netto sprzedazy i dopiero doliczyc VAT. Obecnie jest od pokazana cena netto zakupu doliczona marza i vat.
	//tak nie moze zostac. 

	cout << setw(6)<<" Nr Art " << " " <<setw(2)<< "---Nazwa Towaru---" << " " <<setw(5)<< "| cena netto " <<setw(2)<< "| stawka VAT " <<setw(4)<< "| Ilosc " <<setw(8)<< " | Cena Brutto \n";
	cout << setw(6)<<nrArt << " "<<setw(2)<< nazwaTowaru << " "<<setw(5) << obliczNetto(cenaNettoZakupu, cenaNettoSprzed, marza) <<" zl "<< setw(5)<< Vat << " % "<<setw(4) << ileSzt << " szt. " << obliczBrutto(cenaNettoSprzed, Vat, cenaBruttoSprzed)<<" zl.\n";
}
Towar::~Towar()
{
}
