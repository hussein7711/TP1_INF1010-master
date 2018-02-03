/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit

	Produit* p1 = new Produit("Carotte", 1, 1); 
	Produit* p2 = new Produit("Concombre", 2, 1);
	Produit* p3 = new Produit("Pomme de terre", 3, 2);
	Produit* p4 = new Produit("Avocat", 4, 1.75);
	Produit* p5 = new Produit("Courgette", 5, 2.5);
	Produit* p6 = new Produit("Poirot", 6, 1.25);
	Produit* p7 = new Produit("Haricot", 7, 3);
	Produit* p8 = new Produit("Épinard", 8, 2.5);
	Produit* p9 = new Produit("Tomate", 9, 1.5);
	Produit* p10 = new Produit("Poivron rouge", 10, 2.5);
	Produit* p11 = new Produit("Artichaud", 11, 2.25);
	Produit* p12 = new Produit("Courge", 12, 1.25);
	Produit* p13 = new Produit("Poichiche", 13, 1);
	Produit* p14 = new Produit("Laitue", 14, 2);
	Produit* p15 = new Produit("Poivron vert", 15, 1.5);
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
	p3->modifierNom("patate"); p3->modifierReference(16); p3->modifierPrix(1.75);
	p3->afficher();
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon rayon =  Rayon();
	//4-  Modifiez la catégorie  du rayon
	rayon.modifierCategorie("Legume");
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	rayon.ajouterProduit(p1);
	rayon.ajouterProduit(p2);
	rayon.ajouterProduit(p3);
	rayon.ajouterProduit(p4);
	rayon.ajouterProduit(p5);
	rayon.ajouterProduit(p6);

    // 6- afficher le contenu du rayon
	rayon.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
	Client client = Client("Course", "Jean", 1, "AX88", 02022017);

	//8-  afficher l'etat des attributs du client
	client.afficher();
	//9-   Le client achete 9 produits
	client.acheter(p1);
	client.acheter(p2);
	client.acheter(p5);
	client.acheter(p6);
	client.acheter(p7);
	client.acheter(p9);
	client.acheter(p14);
	client.acheter(p12);
	client.acheter(p15);

	//10- Afficher le contenu du panier du client
	client.afficherPanier();
     //11- livrer le panier du client
	client.livrerPanier();
    
	//12- afficher le contenu du panier du client
	client.afficherPanier();
	//13-  terminer le programme correctement
    
    return 0;
}
