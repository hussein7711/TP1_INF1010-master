#ifndef Produit_H
#define Produit_H
#endif

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

string Produit::obtenirNom() {
	return nom_;
}

int Produit::obtenirReference() {
	return reference_;
}

double Produit::obtenirPrix() {
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

void Produit::afficher() {
	cout << nom_ << endl << reference_ << endl << prix_;
}








