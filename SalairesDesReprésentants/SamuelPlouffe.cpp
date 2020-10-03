/* But : Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire. Entrez -1 � la valeur des ventes pour quitter le programme.
*/
// Auteur : Samuel Plouffe
// Date : 2020-10-02

#include<iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");
	// D�claration des variables
	int semaine = 250;
	float ventes = 0;
	float paie;
	float paieTot;

	cout << "Veuiller entrer la valeur de vos ventes brutes : ";
	cin >> ventes;
	

	if (ventes < -1)
	{
		while (ventes < -1)	// r�pete message d'erreur jusqu'a temps que se soit positif
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