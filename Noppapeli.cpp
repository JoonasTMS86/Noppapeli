/*
      *************
      * Noppapeli *
      *************
 (C) 2016 Joonas Lindberg
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int arvo()
{
	int tulos;

	tulos = rand() % 6 + 1;
	return tulos;
}

int main ()
{
	int luku, arvottuLuku1, arvottuLuku2;
	char vastaus;
	bool kaynnissa, kysy;
	
	srand (time(NULL));
	
	cout << endl << "Noppapeli";
	cout << endl << "(C) 2016 Joonas Lindberg";

	kaynnissa = true;
	while(kaynnissa == true)
	{
		cout << endl << endl;
		cin.clear();
		luku = 0;
		while(luku < 2 || luku > 12)
		{
			cout << "Arvaa yhteenlaskettu silmäluku (väliltä 2 - 12): ";
			cin >> luku;
		}

		arvottuLuku1 = arvo();
		arvottuLuku2 = arvo();
		cout << endl << "Heitetään nopat..." << endl;
		cout << endl << "Arvaamasi luku: " << luku;
		cout << endl << "Noppa 1 + noppa 2: " << arvottuLuku1 << " + " << arvottuLuku2 << " = " << arvottuLuku1 + arvottuLuku2;
		
		if(luku == (arvottuLuku1 + arvottuLuku2))
		{
			cout << endl << "Oikea arvaus!!!";
		}
		else
		{
			cout << endl << "Arvasit väärin.";
		}

		cout << endl << endl;
		kysy = true;
		cin.clear();
		while(kysy == true)
		{
			cout << "Uusi peli (K/E): ";
			cin >> vastaus;
			if(vastaus == 'k' || vastaus == 'K')
			{
				kysy = false;
			}
			if(vastaus == 'e' || vastaus == 'E')
			{
				kaynnissa = false;
				kysy = false;
			}
		}
	}
	return 0;
}

