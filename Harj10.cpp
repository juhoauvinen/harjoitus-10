/***********************************************
*Harjoitus 10
*Juho Auvinen
*Kuvaus:
*Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
*että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
*syöttämällä luku 0.
*
*Tulostus:
*Syötit kokonaislukuja seuraavasti:
*----------------------------------
*Negatiiviset 7 kpl 70.00%
*Positiiviset 3 kpl 30.00%
*Yhteensä 10 kpl 100.00%
*
*Versio: 1.0
*PVM: 1.10.-14
************************************************/
#include <iostream>
using namespace std;

void main(void)
{
	int luku1=1;
	int pos = 0;
	int neg = 0;
	int koko = 0;
	
	cout << "Anna positiivisia tai negatiivisia kokonaislukuja." << endl;
	cout << "Jos haluat lopettaa, anna nolla." << endl;

	while (luku1 != 0)
	{
		cin >> luku1;
		if (luku1 < 0)
			neg = neg+1;
		
		if (luku1 > 0)
			pos = pos+1;

		if (luku1 > 0  || luku1 < 0)
			koko = koko+1;
	}
	
	float kokopros = (float(koko)/float(koko)*100);//Prosenteiksi muuttaminen
	float negpros = (float(neg)/float(koko)*100); 
	float pospros = (float(pos)/float(koko)*100);

	cout << "Syotit kokonaislukuja seuraavasti:" << endl;
	cout << "----------------------------------" << endl;
	
	cout << "Negatiiviset " << neg << " kpl, ";
	printf("%.2f", negpros);// printf komennolla saadaan pakotettua %.2f avulla 2 desimaalinen float tyyppinen luku tulostettua negpros:ista
	cout << "%" << endl;
	
	cout << "Positiiviset " << pos << " kpl, ";
	printf("%.2f", pospros);
	cout << "%" << endl;
	
	cout << "Yhteensa " << koko << " kpl, ";
	printf("%.2f", kokopros);
	cout << "%" << endl;
}