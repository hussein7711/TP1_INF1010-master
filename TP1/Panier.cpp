#include <iostream>;
#include <string>;
#include "panier.h"
#include "Produit.h"
using namespace std;
const string tab = "\t";


Panier::Panier(int capacite) {
	capaciteContenu_ = capacite;
	Produit** contenuPanier_;
	contenuPanier_ = new Produit*[capaciteContenu_];
	/*for (int i = 0; i < capacite; i++)
	{
		contenuPanier_[i] = new Produit;
	}*/
	nombreContenu_ = 0;
	totalAPayer_ = 0;
}
Panier::~Panier() {

}

Produit**  Panier::obtenirContenuPanier() const {
//	Produit** produit = new Produit*();
//	for (int i = 0; i < nombreContenu_; i++) {
//		produit[i] = contenuPanier_[i];
//	}
	return this->contenuPanier_;
}

int Panier::obtenirNombreContenu() const {
	return nombreContenu_;
}
double Panier::obtenirTotalApayer() const {
	return totalAPayer_;
}

void Panier::ajouter(Produit* prod) {
	if (contenuPanier_ == nullptr) // resolution d'un probleme de compilation (n'utilisait pas le constructeur?)
	{
		capaciteContenu_ = 5;
		contenuPanier_ = new Produit*[capaciteContenu_];
	}
	else if (nombreContenu_ >= capaciteContenu_) {
		capaciteContenu_ *= 2;
		Produit** nouvTableau;
		nouvTableau = new Produit*[capaciteContenu_];
		for (int i = 0; i < nombreContenu_; i++) {
			nouvTableau[i] = contenuPanier_[i];
		}
		delete[] contenuPanier_;
		contenuPanier_ = nouvTableau;
		contenuPanier_[nombreContenu_++] = prod;
	}
//		contenuPanier_[nombreContenu_++] = new Produit;
	contenuPanier_[nombreContenu_++] = prod;
	totalAPayer_ += (*prod).obtenirPrix();
}

void Panier::livrer() {
	/*for (int i = 0; i < nombreContenu_; i++)
		delete contenuPanier_[i];*/
	delete[] contenuPanier_;
	nombreContenu_ = 0;
	capaciteContenu_ = 0;
	totalAPayer_ = 0;
}

void Panier::afficher() const {
	for (int i = 0; i < nombreContenu_; i++)
	{
		contenuPanier_[i]->afficher();
	}
}



	











