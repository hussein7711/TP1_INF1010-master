#include <iostream>;
#include <string>;
#include "Rayon.h"
using namespace std;

Rayon::Rayon() {
	categorie_ = "inconnu";
	tousProduits_ = NULL;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

Rayon::Rayon(string categorie) {
	categorie_ = categorie;
	tousProduits_ = NULL;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

string Rayon::obtenirCategorie() const {
	return categorie_;
}
int Rayon::obtenirNombreProduits() const {
	return nombreProduits_;
}

int Rayon::obtenirCapaciteProduits() const {
	return capaciteProduits_;
}
Produit** Rayon::obtenirTousProduits() const {
	for (int i = 0; i < obtenirNombreProduits(); i++)
		return &tousProduits_[i];
}

void Rayon::modifierCategorie(string cat) {
	categorie_ = cat;
}

void Rayon::ajouterProduit(Produit * produit) {
	if (tousProduits_ == NULL) {
		tousProduits_ = new Produit*[5];
		capaciteProduits_ = 5;
		tousProduits_[0] = produit; nombreProduits_++;
	}
	else if (nombreProduits_ >= capaciteProduits_) {
		Produit** nouveauTableau;
		capaciteProduits_ += 5;
		nouveauTableau = new Produit*[capaciteProduits_];

		for (int i = 0; i < obtenirNombreProduits(); i++)
			nouveauTableau[i] = tousProduits_[i];
		delete[] tousProduits_;
		tousProduits_ = nouveauTableau;
		tousProduits_[nombreProduits_++] = produit;
	}
	else
		tousProduits_[nombreProduits_++] = produit;
}

void Rayon::afficher() const {
	cout << obtenirCategorie() << endl << obtenirNombreProduits() << endl << obtenirCapaciteProduits() << endl << obtenirTousProduits();
}




