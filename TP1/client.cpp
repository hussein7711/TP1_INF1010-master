#ifndef CLIENT_H
#define CLIENT_H
#endif
#include <iostream>
#include <string>
#include "client.h"
#include "panier.h"
#include "Panier.cpp"
using namespace std;

Client::Client(string  nom, string prenom, int identifiant, string codePostal, long date) {
	nom_ = nom;
	prenom_ = prenom;
	identifiant_ = identifiant;
	codePostal_ = codePostal;
	dateNaissance_ = date;
	monPanier_ = NULL;
}

string Client::obtenirNom() {
	return nom_;
}

string Client::obtenirPrenom() {
	return prenom_;
}

int Client::obtenirIdentifiant() {
	return identifiant_;
}

string Client::obtenirCodePostal() {
	return codePostal_;
}

long Client::obtenirDateNaissance() {
	return dateNaissance_;
}

void Client::modifierNom(string nom) {
	nom_ = nom;
}

void Client::modifierPrenom(string prenom) {
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant) {
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal) {
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date) {
	dateNaissance_ = date;
}

void Client::acheter(Produit* prod) {
	if (monPanier_) {
		(*monPanier_).ajouter(prod);
	}
	else {
		Panier monPanier_(4);
		monPanier_.ajouter(prod);
	}
}

void Client::afficherPanier() {
	if(monPanier_!= NULL)
	(*monPanier_).obtenirContenuPanier();
}

void Client::livrerPanier() {
	monPanier_->livrer();
	delete monPanier_;
}

