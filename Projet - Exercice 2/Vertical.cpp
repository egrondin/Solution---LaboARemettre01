// But: Demander � l'utilisateur de taper un nombre � cinq chiffres et d�terminer � l'aide du programme si ce nombre est bien � cinq chiffre et de ensuite l'afficher � la vertical
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

	// Le programme affiche un message pour demander � l'utilisateur d'entrer un nombre � cinq chiffres
	std::cout << "Veuillez rentrer un nombre � cinq chiffres: ";

	// Le programme lit le nombre qui a �t� tap� par l'utilisateur
	std::cin >> nombre;
	
	// Le programme s'assure que le nombre entr� par l'utilisateur est un nombre de cinq chiffres ou non
	if (nombre < 10000)
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres."; // Le programme affiche que le nombre entr� par l'utilisateur n'est pas un nombre � cinq chiffres
	}
	else
	{
		std::cout << nombre / 10000 << std::endl << nombre % 10000 / 1000 << std::endl << nombre % 1000 / 100 << std::endl << nombre % 100 / 10 << std::endl << nombre % 10; // Le programme affiche le nombre entr� par l'utilisateur � la verticale
	}


}

// Plan de tests
/*


nombre:								r�sultat escompt�:

12345								1
									2
									3
									4
									5

89515								8
									9
									5
									1
									5

589									Ce  nombre ne contient pas 5 chiffres.
232									Ce  nombre ne contient pas 5 chiffres.


*/