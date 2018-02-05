#include <iostream>;
#include <string>;
#include "Rayon.h"
using namespace std;

Rayon::Rayon() {
	categorie_ = "inconnu";
	tousProduits_ = nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

Rayon::Rayon(string categorie) {
	categorie_ = categorie;
	tousProduits_ =	nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}
Rayon::~Rayon() {

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
//	Produit** produit = new Produit*();
//	for (int i = 0; i < obtenirNombreProduits(); i++) {
//		produit[i] = tousProduits_[i];
//	}
	return this->tousProduits_;
}

void Rayon::modifierCategorie(string cat) {
	categorie_ = cat;
}

void Rayon::ajouterProduit(Produit * produit) {
	if (tousProduits_ == nullptr) {
		tousProduits_ = new Produit*[5];
		capaciteProduits_ = 5;
		for (int i = 0; i < capaciteProduits_; i++)
		{
			tousProduits_[i] = new Produit;
		}
		tousProduits_[nombreProduits_++] = produit;
	}
	else if (nombreProduits_ >= capaciteProduits_) {
		Produit** nouveauTableau;
		capaciteProduits_ += 5;
		nouveauTableau = new Produit*[capaciteProduits_];

		for (int i = 0; i < capaciteProduits_; i++) {
			nouveauTableau[i] = new Produit;
			nouveauTableau[i] = tousProduits_[i];
		}
			
		delete[] tousProduits_;
		tousProduits_ = nouveauTableau;
		tousProduits_[nombreProduits_++] = produit;
	}
	else
		tousProduits_[nombreProduits_++] = produit;
}

void Rayon::afficher() const {
	cout << "   " << "Rayon " << categorie_ << " avec " << nombreProduits_ << " produit et une capacite de " << capaciteProduits_ << endl << endl;
	for (int i = 0; i < nombreProduits_; i++)
	{
		cout << "-" + tousProduits_[i]->obtenirNom() << " " << endl;
	}
}




