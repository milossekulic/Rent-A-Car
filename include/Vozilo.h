    #pragma once
#include<iostream>
#include<string>

using namespace std;


//Klasa vozilo
class Vozilo {

protected:

	string nazivVozila;
	string markaVozila;
	int cenaIzdavanja;
	int izdat;


public:
	Vozilo(string nazivVozila, string markaVozila, int cenaIzdavanja);
	Vozilo();

	void pokreniVozilo();


	string getNazivVozila();
	void setNazivVozila(string naziv);

	string getMarkaVozila();
	void setMarkaVozila(string marka);

	int getCenaIzdavanja();
	void setCenaIzdavanja(int cena);

	int getIzdat();
	void setIzdat(int i);

};



