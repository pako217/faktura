#pragma once
#include <string>
#include <fstream>
class Towar 
{
private:
	std::string nrArt;
	std::string nazwaTowaru;
	int ileSzt;
	double cenaNettoZakupu=0;
	double Vat=0;
	double cenaBruttoZakupu=0;
	double marza=0;
	double cenaNettoSprzed=0;
	double cenaBruttoSprzed=0;

public:
	Towar();
	void dodaj();
	double obliczNetto(double cenaNettoZakupu, double cenaNettoSprzed, double marza);
	double obliczBrutto(double cenaNettoSprzed, double vat, double cenaBruttoSprzed);
	void pokaz();
	~Towar();
};

