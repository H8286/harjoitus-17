/*Sami Liimatainen
IIO14S1
Harjoitus 17
Versio 1.0
11.11.2014

Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.

Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle*/

#include <iostream>
using namespace std;

struct TIEDOT
{
	char ETUNIMET[50];
	char SUKUNIMI[30];
	char OSOITE[30];
	int POSTINUMERO;
	int KENGANNUMERO;
	float KOULUMATKA;
};

int main()
{
	TIEDOT TIEDOT1;
	TIEDOT TIEDOT2 = {"Esko Petteri","M‰kinen","Katu 3",23042,42,2.5 };
	TIEDOT TIEDOT3 = { "Mauri Kaapo", "Jokinen", "Katu 6", 34155, 44, 5.6 };

	/*
	cout << "Anna tietosi muodossa Etunimet Sukunimi Osoite Postinumero Kengannumero Koulumatka";
	cin >> (TIEDOT1.ETUNIMET) >> TIEDOT1.SUKUNIMI >> TIEDOT1.OSOITE >> TIEDOT1.POSTINUMERO >> TIEDOT1.KENGANNUMERO >> TIEDOT1.KOULUMATKA;
	*/

	cout << "Anna kaikki etunimesi";
	cin.getline(TIEDOT1.ETUNIMET, 50);

	cout << "Anna sukunimesi";
	cin >> TIEDOT1.SUKUNIMI;
	cin.get();

	cout << "Anna osoitteesi";
	cin.get(TIEDOT1.OSOITE, 30);
	cin.get();

	cout << "Anna postinumero kengannumero ja koulu matka muodossa 00000 00 0.0";
	cin >> TIEDOT1.POSTINUMERO >> TIEDOT1.KENGANNUMERO >> TIEDOT1.KOULUMATKA;
	

			if (TIEDOT1.KOULUMATKA > TIEDOT2.KOULUMATKA)
			{
				TIEDOT tmp = TIEDOT1;
				TIEDOT1 =TIEDOT2;
				TIEDOT2 = tmp;
			}

			if (TIEDOT1.KOULUMATKA > TIEDOT3.KOULUMATKA)
			{
				TIEDOT tmp = TIEDOT1;
				TIEDOT1 = TIEDOT3;
				TIEDOT3 = tmp;
			}

			if (TIEDOT2.KOULUMATKA > TIEDOT3.KOULUMATKA)
			{
				TIEDOT tmp = TIEDOT2;
				TIEDOT2 = TIEDOT3;
				TIEDOT3 = tmp;
			}

			cout << TIEDOT1.ETUNIMET << ' ' << TIEDOT1.SUKUNIMI << ' ' << TIEDOT1.OSOITE << ' ' << TIEDOT1.POSTINUMERO << ' ' << TIEDOT1.KENGANNUMERO << ' ' << TIEDOT1.KOULUMATKA << endl;
			cout << TIEDOT2.ETUNIMET << ' ' << TIEDOT2.SUKUNIMI << ' ' << TIEDOT2.OSOITE << ' ' << TIEDOT2.POSTINUMERO << ' ' << TIEDOT2.KENGANNUMERO << ' ' << TIEDOT2.KOULUMATKA << endl;
			cout << TIEDOT3.ETUNIMET << ' ' << TIEDOT3.SUKUNIMI << ' ' << TIEDOT3.OSOITE << ' ' << TIEDOT3.POSTINUMERO << ' ' << TIEDOT3.KENGANNUMERO << ' ' << TIEDOT3.KOULUMATKA << endl;
}