    #include "Klijent.h"
#include "Automobil.h"
#include "Motor.h"
#include "Vozilo.h"
#include "Agencija.h"
#include <cstdio>

int main() {

	int i = 0;
	Klijent*K1 = NULL;
	Vozilo *m1 = NULL;
	Vozilo *a1 = NULL;
	int brojac = 0;
	int izdatiBrojac = 0;
	string ime, prezime, model, marka;
	int cenaIzdavanja, maxbrzina, ubrzanje, brojVozila;
	int izbor = 0;

	//cout << "Unesite kapacitet agencije: " << endl;
	//cin >> brojVozila;


	brojVozila = 20;

	Agencija *agencija = new Agencija(brojVozila);

	a1 = new Automobil("Yugo 45", "Zastava", 20, 170);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("Punto", "Fiat", 50, 220);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("Logan", "Dacia", 45, 200);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("Elantra", "Hyundai", 60, 190);

	agencija->dodajVozilo(a1);

	a1 = new Automobil("200 SX", "Nissan", 35, 160);

	agencija->dodajVozilo(a1);

	m1 = new Motor("Duke 390", "KTM", 90, 320);

	agencija->dodajVozilo(m1);

	m1 = new Motor("RS 125", "Aprilia", 50, 250);

	agencija->dodajVozilo(m1);

	m1 = new Motor("R 1250 GS", "BMW", 150, 380);

	agencija->dodajVozilo(m1);

	m1 = new Motor("Hornet", "Honda", 100, 340);

	agencija->dodajVozilo(m1);

	m1 = new Motor("Ninja", "Kawasaki", 80, 350);

	agencija->dodajVozilo(m1);


	while (izbor != 10) {
		cout << endl << "MENI" << endl;;
		cout << "1. Dodavanje vozila u agenciju" << endl;
		cout << "2. Izdavanje vozila klijentu " << endl;
		cout << "3. Listanje slobodnih vozila " << endl;
		cout << "4. Listanje svih vozila agencije" << endl;
		cout << "5. Zarada agencije" << endl;
		cout << "6. Izlaz" << endl;

		cin >> izbor;

		switch (izbor)
		{

		case 1: //unosenje vozila

			cout << "Da li hocete motor ili automobil" << endl << "1 automobil" << endl << "2 motor" << endl;
			cin >> izbor;

			if (brojac >= brojVozila) {
				cout << endl << "Broj vozila popunjen" << endl;

			}
			else {

				if (izbor == 1) {

					cout << "Unesite model vozila " << endl;
					cin >> model;
					cout << "Unesite marku vozila " << endl;
					cin >> marka;

					cout << "Unesite cenu izdavanja " << endl;
					cin >> cenaIzdavanja;

					cout << "Unesite max brzinu" << endl;
					cin >> maxbrzina;

					a1 = new Automobil(model, marka, cenaIzdavanja, maxbrzina);

					agencija->dodajVozilo(a1);
					brojac++;
				}

				else {
					//unosenje motora
					cout << "Unesite model motora " << endl;
					cin >> model;
					cout << "Unesite marku motora " << endl;
					cin >> marka;

					cout << "Unesite cenu izdavanja " << endl;
					cin >> cenaIzdavanja;

					cout << "Unesite ubrzanje" << endl;
					cin >> ubrzanje;
					cout << endl;

					m1 = new Motor(model, marka, cenaIzdavanja, ubrzanje);

					agencija->dodajVozilo(m1);
					brojac++;
				}
			}

			break;

		case 2: // izdavanje vozila klijentu


			cout << "Unesite ime  klijenta: " << endl;
			cin >> ime;
			cout << "Unesite prezime klijenta: " << endl;
			cin >> prezime;
			K1 = new Klijent(ime, prezime);

			cout << endl << "Slobodna vozila: " << endl;
			agencija->svaSlobodnaVozila();
			cout << endl;

			cout << "Izaberite redni broj vozila koje zelite da iznajmite" << endl;
			cin >> i;

			if (agencija->getVozilo(i)->getIzdat() == 0) {

				agencija->getVozilo(i)->setIzdat(1);
				agencija->IzdajVozilo(agencija->getVozilo(i), K1);

			}
			else {

				cout << endl << "Vozilo je izdato, izaberite drugo !!!" << endl;
			}

			break;

		case 3:
			agencija->svaSlobodnaVozila();
			break;

		case 4:
			agencija->SvaVozilaAgencije();
			break;

		case 5: cout << "Ukupna zarada agencije je " << agencija->getZarada() << " evra." << endl;
			break;

		case 6: izbor = 10;
			break;

		default:
			break;
		}

	}


	cout << endl << "Izlaz iz programa ";


	//	system("pause");
}


