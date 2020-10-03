/* But : Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les
représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme.
*/
// Auteur : Samuel Plouffe
// Date : 2020-10-02

#include<iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");
	// Déclaration des variables
	int semaine = 250;
	float ventes = 0;
	float paie;
	float paieTot;

	cout << "Veuiller entrer la valeur de vos ventes brutes : ";
	cin >> ventes;
	

	if (ventes < -1)
	{
		while (ventes < -1)	// répete message d'erreur jusqu'a temps que se soit positif
		{
		cout << "Erreur : vous devez entrer un nombre positif" << endl;
		cout << "Veuiller entrer un autre nombre : ";
		cin >> ventes;
		}
		while (ventes != -1)		// quand le nombre est positif, on effectu le calcule de paie
		{
			paie = (ventes * 7.5) / 100;
			paieTot = (paie + semaine);

			cout << "Vous allez recevoir " << paieTot << "$" << endl;
			cout << "Veuiller entrer la valeur de vos ventes brutes : ";
			cin >> ventes;

			if (ventes < -1)	// si l'utilisateur rentre a nouveau un nombre negatif, on repete le message d'erreur 
			{
				cout << "Erreur : vous devez entrer un nombre positif" << endl;
				cout << "Veuiller entrer un autre nombre : ";
				cin >> ventes;
			}
		}
	}

	
	else
	{

	
	while (ventes != -1)		// ici l'utilisateur a rentre comme premier nombre un nombre valable
		{
		paie = (ventes * 7.5) / 100;
		paieTot = (paie + semaine);

		cout << "Vous allez recevoir " << paieTot << "$" << endl;
		cout << "Veuiller entrer la valeur de vos ventes brutes : ";
		cin >> ventes;

		while (ventes < -1)	// ici l'utilisateur rentre un nombre invalable
		{
			cout << "Erreur : vous devez entrer un nombre positif" << endl;
			cout << "Veuiller entrer un autre nombre : ";
			cin >> ventes;
		}


		}
	}
	
	cout << "Merci de nous avoir choisis, au revoir !";		// lorsqu'on rentre -1, alors le programme de ferme



	return 0;

}

/* Plan de test
vente brute			paie		
0$					250$
-5					erreur, entrer nombre positif
5000				625$
7000				775$
10					250.75$
-1					merci de nous avoir choisis, au revoir (fermeture programme)
*/