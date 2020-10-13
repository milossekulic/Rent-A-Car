    #include "Agencija.h"



Agencija::Agencija(int kapacitet) {

	this->listaVozila = new Vozilo[kapacitet];
	brojac = 0;
	this->kapacitet = kapacitet;

}

void Agencija::dodajVozilo(Vozilo *v) {

	if (brojac < kapacitet) {

		listaVozila[brojac] = *v;
		brojac++;
	}
	else {

		cout << "Nema vise mesta u agenciji";
	}

}


void Agencija::IzdajVozilo(Vozilo *v, Klijent *k) {

	cout << endl << "Agencija je izdala vozilo " << v->getMarkaVozila() << " " << v->getNazivVozila() << " po ceni od " << v->getCenaIzdavanja() << " evra, ime klijenta je " << k->getIme() << endl;
	zarada += v->getCenaIzdavanja();

}


double Agencija::getZarada() { return this->zarada; }


void Agencija::SvaVozilaAgencije() {

	for (int i = 0; i < brojac; i++) {

		cout << " Model vozila: " << listaVozila[i].getNazivVozila() << ", Marka vozila: " << listaVozila[i].getMarkaVozila() << endl;
	}

}


Vozilo* Agencija::getVozilo(int i) { return &listaVozila[i]; }

void Agencija::svaSlobodnaVozila() {

	for (int i = 0; i < brojac; i++) {

		if (listaVozila[i].getIzdat() == 0) {

			cout << " " << i << " Model vozila " << listaVozila[i].getNazivVozila() << ", Marka vozila " << listaVozila[i].getMarkaVozila() << endl;

		}


	}

}

