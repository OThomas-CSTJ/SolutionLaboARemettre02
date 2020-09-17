// but : Calculer le montant qu'un individu va devoir débourser pour une automobile loué par la durée du voyage et le nombre de Km
// Auteur : Olivier Thomas
// Date : 2020-09-17

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// d/claration variable
	float essence;
	float kilo;
	float jour;
	float baseJ = 45;
	float baseK = 250;
	float coutJours;
	float coutKm;
	// float car je vvais jouer avec des nombre decimal

	// le programme demande le nombre de jours du depart et le nombre de km prevu

	std::cout << "Veuillez entrer le nombre de jours du voyage : ";
	std::cin >> jour;
	std::cout << "Veuillez entrer le nombre de km prevue lors de ce voyage : ";
	std::cin >> kilo;
	
	// programme calcule essence 
	essence = kilo / 100;

	// combien de litre devons nous avoir
	essence = essence * 7.6;

	// prix essence 
	essence = essence * 1.25;

	// Programme calcule le nombre de km gratuit selon les jours et le deduit

	kilo = kilo - (jour * baseK);

	// le logiciel calcule alors le prix pour les km sup

	coutKm = kilo * 0.05;

	// cout par jours 
	coutJours = jour * baseJ;

	// afficher le prix finale : 
	std::cout << "Le prix finale est de : " << coutJours + coutKm + essence;
}
// plan test 
//pour = 8 jours  = 360$
//pour = 4200km = 110$
//
// essence = 399$