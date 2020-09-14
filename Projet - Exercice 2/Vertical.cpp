// But: Demander à l'utilisateur de taper un nombre à cinq chiffres et déterminer à l'aide du programme si ce nombre est bien à cinq chiffre et de ensuite l'afficher à la vertical
// Auteur: Émile Grondin
// Date: 13/09/2020

// Pour communiquer avec l'utilisateur
#include <iostream>

void main() 
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// Déclaration de la variable
	int nombre;

	// Le programme affiche un message pour demander à l'utilisateur d'entrer un nombre à cinq chiffres
	std::cout << "Veuillez rentrer un nombre à cinq chiffres: ";

	// Le programme lit le nombre qui a été tapé par l'utilisateur
	std::cin >> nombre;
	
	// Le programme s'assure que le nombre entré par l'utilisateur est un nombre de cinq chiffres ou non
	if (nombre < 10000)
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres."; // Le programme affiche que le nombre entré par l'utilisateur n'est pas un nombre à cinq chiffres
	}
	else
	{
		std::cout << nombre / 10000 << std::endl << nombre % 10000 / 1000 << std::endl << nombre % 1000 / 100 << std::endl << nombre % 100 / 10 << std::endl << nombre % 10; // Le programme affiche le nombre entré par l'utilisateur à la verticale
	}


}

// Plan de tests
/*


nombre:								résultat escompté:

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