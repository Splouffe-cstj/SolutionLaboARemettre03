/* But : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre
*/
// Auteur : Samuel Plouffe
// Date : 2020-10-02

#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int choix;

	int iRandom;				// permet de mémoriser le nombre choisi aléatoirement par l’ordinateur

	srand(time(0));				// pour activer l’aléatoire dans le programme
	iRandom = rand() % 101;		// l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	
	cout << "Binevenue, essayer de deviner le nombre que j'ai choisi entre 1 et 100 --> " << endl;
	cout << "Vous avez 5 vie!" << endl;
	cout << "Votre choix 1 : ";
	cin >> choix;					// on entre le choix

	while (choix < 1 || choix > 100)		// si choix est plus petit que 1 ou plus grand que 100, erreur et recommence le choix 1
	{
		cout << "Erreur : veuiller entrer un nombre entre 1 et 100 : ";
		cin >> choix;
	}
if (choix != iRandom)		// si le choix != au chiffre entre 1 et 100
{
	cout << "Il vous reste 4 vie!" << endl;
	

	int compteur = 2;
	while (compteur <= 5 && choix != iRandom)	// va aller dans la boucle avec compteur a 2
	{
		
		cout << "Votre choix " << compteur << " : ";	//on entre un autre choix
		cin >> choix;
		
		while (choix < 1 || choix > 100)			// si on entre un nombre qui n'est pas entre 1 et 100, message erreur et on recommence le choix
		{
			cout << "Erreur : veuiller entrer un nombre entre 1 et 100 : ";
			cin >> choix;
		}
		
		
		if (choix != iRandom)	// si choix pas bon, utilisateur perd une vie
		{		
			compteur++;

		cout << "Il vous reste " << ((5 - compteur) + 1) << " vie!" << endl;
		}
	}
}	
			if (choix == iRandom)	// si nombre est égal au bon nombre au hasard on gagne
			{
				cout << "Félécitation! " << choix << " était le bon nombre! Vous gagnez la somme de 1 000 000 de $$$ !";
			}

			if (choix != iRandom)		// ici l'utilisateur a pas rentrer le bon nombre meme avec 5 chances, il a perdu
			{
				cout << "Vous avez perdu!";
			}



/*
Plan de test
iRandom		choix 1		choix 2		choix 3		choix 4		choix 5		résultat
13			43			23			56			78			96			vous avez perdu
45			45															vous avez gagner
67			34			67												vous avez gagner
2			6			76			2									vous avez gagner
17			28			66			43			17						vous avez gagner
99			21			45			76			32			99			vous avez gagner
30			-1(erreur)	
55			45			21			-10(erreur)
5			0(erreur)
*/


	return 0;

}