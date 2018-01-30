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
}

string Rayon::obtenirCategorie() {
	return categorie_;
}
int Rayon::obtenirNombreProduits() {
	return nombreProduits_;
}

int Rayon::obtenirCapaciteProduits() {
	return capaciteProduits_;
}
Produit** Rayon::obtenirTousProduits() {
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
		tousProduits_[nombreProduits_++] = produit;
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
}

void Rayon::afficher() {
	cout << obtenirCategorie() << endl << obtenirNombreProduits() << endl << obtenirCapaciteProduits() << endl << obtenirTousProduits();
}




