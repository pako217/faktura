#include "stdafx.h"
#include "Klient.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
Klient::Klient()
{

}
// funkcja wprowadzajaca nowego klineta
void Klient::wypelnij()
{
	
	cout << "Podaj kolejno dane wprowadzonej firmy:" << endl;
	cout << "Podaj unikatowa nazwe klinet: ";
	getline(cin, nazwaKlienta);
	cout << "Podaj nazwe firmy klienta: ";
	getline(cin, nazwaFirmy);
	cout << "Podaj nazwe ulicy klienta: ";
	getline(cin, ulica);
	cout << "Podaj nr domu klienta: ";
	getline(cin, nrDomu);
	cout << "Podaj kod pocztowy w formacie XX-XXX: ";
	getline(cin, kodPocztowy);
	cout << "Podaj miejscowosc w ktorej miejsci sie siedziba firmy Klienta: ";
	getline(cin, miejscowosc);
	cout << "Podaj nip firmy klienta: ";
	getline(cin, NIP);
}



// wyswietlenie wprowadzonego klienta
void Klient::wyswietl()
{

	cout <<"Sprzedajacy"<<setw(40)<< "Kupujacy: \n";
	cout <<Firma<<setw(32) << nazwaFirmy << "\n";
	cout <<nazUlicy<<" nr.: "<<dom<<setw(30)<< ulica << " nr.: " << nrDomu << "\n";
	cout <<poczta<<" "<<miejsc<<setw(32)<< kodPocztowy << " " << miejscowosc << "\n";
	cout << "NIP "<<nip<<setw(28)<<"NIP " << NIP << "\n";
}
void Klient::czyszczenieCIN()
{
	bool bCzySukces = cin.good();
	cin.clear();
	cin.ignore(numeric_limits < streamsize >::max(), '\n');
}
void Klient::menu()
{
	
	int wybor;

	cout << "[1]-Dodaj Klienta." << endl;
	cout << "[2]-Wyswietl wprowadzonego klienta." << endl;
	cout << "[3]-Dodaj nowy porodukt do magazynu." << endl;
	cout << "[4]-Wyswietl wprowadzony produkt." << endl;
	cout << "[5]-Generuj fakture po wprowadzeniu towaru i klienta." << endl;
	cout << "[6]- Wyjscie z programu" << endl;

	cout << "Wybierz potrzebna opcje ktora chcesz wykonac: " << endl;
	cin >> wybor;

	//czeszczenie bifora cin
	czyszczenieCIN();

	// definicja nowego obiektu klasy Klient


	switch (wybor)
	{
	case 1:
	{

		Klient::wypelnij();
		menu();
		break;
	}
	case 2:
	{

		Klient::wyswietl();
		menu();
		break;
	}
	case 3:
	{
		Towar::dodaj();
		menu();
		break;
	}
	case 4:
	{
		Towar::pokaz();
		menu();
		break;
	}
	// generowanie faktury
	case 5:
	{
		// opcja generowania faktury 
		// proba zapisu danych do pliku.
		// jest mozliwosc zapisu do pliku kazdej funkcji dodajac w jej ciele informajce  
		// potrzebne do otwarcia pliku dodaniu nowych informacji i zamknieciu pliku
		// problem polega na tym i¿ gdy bede chcial tylko wyswietlic dane to moze byc to nie mozliwe
		// bo beda zapisane do pliku "Faktura vat.txt" 
		ofstream plik;
		plik.open("Faktura Vat.txt", ios::out);
		plik << "Faktura VAT" << endl;
		Klient::wyswietl();
		plik << "=========================" << endl;
		Towar::pokaz();
		plik.close();
		menu();
		break;
	}
	case 6:
	{
		cout << "Dziekujemy za skorzystanie z naszego rozwiazania" << endl;
		break;
	}
	default:
		cout << "Nie ma takiej opcji prosimy sprobowac ponownie: " << endl;
		menu();
		break;

	}
}

Klient::~Klient()
{
}
