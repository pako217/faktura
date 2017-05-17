#pragma once
#include "Towar.h"
#include <string>
#include <fstream>
class Klient 
	: public Towar
{
private:
	// odbiorca
	std::string nazwaKlienta;
	std::string nazwaFirmy;
	std::string ulica;
	std::string nrDomu;
	std::string kodPocztowy;
	std::string miejscowosc;
	std::string NIP;
	//sprzedaca
	std::string Firma = {"SOMATIN Urzadzenia Pomiarowe"};
	std::string nazUlicy = { "Kepinska" };
	std::string dom = { "16a/12" };
	std::string poczta = {"46-264"};
	std::string miejsc = {"Komorzno"};
	std::string nip = {"751-159-87-52"};
public:
	Klient();
	// dodawanie nowego klienta
	void wypelnij();
	void menu();
	void czyszczenieCIN();
	//wyswietlanie wprowadzonego klienta
	void wyswietl();
	
	~Klient();
};

