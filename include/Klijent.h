    #pragma once
#include<iostream>
#include<string>
#include"Vozilo.h"

class Klijent {

private:

	string ime;
	string prezime;


public:

	Klijent(string ime, string prezime);

	string getIme();
	void setIme(string ime);

	string getPrezime();
	void setPrezime(string prezime);


};


