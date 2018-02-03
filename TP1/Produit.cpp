#include <iostream>;
#include <string>;
#include "Produit.h"
using namespace std;

Produit::Produit() {
	nom_ = "outil";
	reference_ = 0;
	prix_ = 0;
}

Produit::Produit(string nom, int reference, double prix) {
	nom_ = nom;
	reference_ = reference;
	prix_ = prix;
}

Produit::~Produit() {

}

string Produit::obtenirNom() const {
	return nom_;
}

int Produit::obtenirReference() const {
	return reference_;
}

double Produit::obtenirPrix() const {
	return prix_;
}

void Produit::modifierNom(string nomModifie) {
	nom_ = nomModifie;
}

void Produit::modifierReference(int nouvelleReference) {
	reference_ = nouvelleReference;
}

void Produit::modifierPrix(double nouveauPrix){
	prix_ = nouveauPrix;
}

void Produit::afficher() const {
	cout << nom_ << " " << reference_ << " " << prix_ << endl;
}








