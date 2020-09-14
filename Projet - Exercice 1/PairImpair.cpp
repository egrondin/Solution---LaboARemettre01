// But: Demander � l'utilisateur de taper un nombre entier et determiner � l'aide du programme si ce nombre est pair ou impair
// Auteur: �mile Grondin 
// Date: 13/09/2020

// Pour communiquer avec l'utilisateur
#include <iostream>

void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// D�claration de la variable
	int nombre;

	// Le programme affiche un message pour demander � l'utilisateur  d'entrer un nombre entier
	std::cout << "Veuillez entrer un nombre entier: ";

	// Le programme lit le nombre qui a �t� tap� par l'utilisateur
	std::cin >> nombre;

	// Le programme divise par deux le nombre entr� par l'utilisateur. S'il y a un reste, le nombre est impair et s'il n'y a pas de reste, le nombre est pair
	if (nombre % 2 == 0) // Calcul du nombre entr� par l'utilisateur
	{
		std::cout << nombre << " est un nombre pair"; // Le programme affiche que le nombre entr� par l'utilisateur est pair
	}

	else
	{
		std::cout << nombre << " est un nombre impair"; // Le programme affiche que le nombre entr� par l'utilisateur est impair
	}
}

// Plan de tests
/*


nombre:								r�sultat escompt�:

0									0 est un nombre pair
1									1 est un nombre impair
2									2 est un nombre pair
10									10 est un nombre impair
15									15 est un nombre impair
-1									-1 est un nombre impair
-10									-10 est un nombre pair


*/