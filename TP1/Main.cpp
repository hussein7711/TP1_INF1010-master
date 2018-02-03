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
	//Produit* liste[15];
	Produit* carrote = new Produit("Carotte", 1, 1); 
	
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
 
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon rayon =  Rayon();
	//4-  Modifiez la catégorie  du rayon
	rayon.modifierCategorie("surgele");
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	rayon.ajouterProduit(carrote);

    // 6- afficher le contenu du rayon
	rayon.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
	Client client = Client("Abricot", "Jean", 1, "AX88", 02022017);

	//8-  afficher l'etat des attributs du client
	cout<< client.obtenirPrenom() << ' ' << client.obtenirNom() << ' ' << client.obtenirIdentifiant() << ' ' << client.obtenirDateNaissance()<< ' ' << client.obtenirCodePostal() << endl;

	//9-   Le client achete 9 produits
	client.acheter(carrote);

	//10- Afficher le contenu du panier du client
	client.afficherPanier();
     //11- livrer le panier du client
	client.livrerPanier();
    
	//12- afficher le contenu du panier du client
	client.afficherPanier();
	//13-  terminer le programme correctement
    
    return 0;
}
