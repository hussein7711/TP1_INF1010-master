#ifndef PANIER_H
#define PANIER_H
#endif

#include <iostream>;
#include <string>;
#include "panier.h"
#include "Produit.h"
#include "Produit.cpp"
using namespace std;


Panier::Panier(int capacite) {
	capaciteContenu_ = capacite;
	Produit ** contenuPanier_;
	contenuPanier_ = new Produit*[capaciteContenu_];
	nombreContenu_ = 0;
	totalAPayer_ = 0;
}

Produit **  Panier::obtenirContenuPanier() {
	for (int i = 0; i < obtenirNombreContenu(); i++)
		return &contenuPanier_[i];
}

int Panier::obtenirNombreContenu() {
	return nombreContenu_;
}
double Panier::obtenirTotalApayer() {
	return totalAPayer_;
}

void Panier::ajouter(Produit* prod) {
	if (nombreContenu_ >= capaciteContenu_) {
		capaciteContenu_ *= 2;
		Produit** nouvTableau;
		nouvTableau = new Produit*[capaciteContenu_];
		for (int i = 0; i < obtenirNombreContenu(); i++)
			nouvTableau[i] = contenuPanier_[i];
		delete[] contenuPanier_;
		contenuPanier_ = nouvTableau;
		contenuPanier_[nombreContenu_++] = prod;
	}
	else {
		contenuPanier_[nombreContenu_++] = prod;
	}
	totalAPayer_ += (*prod).obtenirPrix();
}

void Panier::livrer() {
	for (int i = 0; i < obtenirNombreContenu(); i++)
		delete contenuPanier_[i];
	delete[] contenuPanier_;
	nombreContenu_ = 0;
	capaciteContenu_ = 0;
	totalAPayer_ = 0;
}

void Panier::afficher() {
	cout << obtenirContenuPanier() << endl << obtenirNombreContenu() << endl << obtenirTotalApayer();
}



	











