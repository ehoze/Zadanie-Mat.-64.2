#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class zadanie642
{
				ifstream plik;
				vector <string> vectab;
                string tablica[20][20];
        public:
                void wprowadz();
                void wypisz();
                int obliczanie();
                int zapiszDoPliku(const char *, int wynik, int min, int max);             
};

void zadanie642::wprowadz()
{			
			int sizetab = 21;
			string wprowadzany;
			plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 64.2\\dane_obrazki.txt", ios::in); 
			if(plik.good()) 
			while(!plik.eof()) 
			    {
                	plik >> wprowadzany;
                	vectab.push_back(wprowadzany);
                	
//                	for(int i = 0; i <= 21; i++)
//                	{
//                		vectab.pop_back();
//                		wypisz();	
//					}
//                vectab.clear();
                	
                	if(21 >= vectab.size())
                	{
//                		if(status >)
						
						wypisz();
                		vectab.pop_back();
					}
//				vectab.clear();
				}
//			   	zapiszDoPliku("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 63.3\\632wynik.txt");
			    plik.close(); 
}


void zadanie642::wypisz()
{
	for (int i = 0; i < vectab.size(); i++)
	{
		cout << vectab[i] << "\n";
	}
}

int zadanie642::obliczanie()
{
	for( int i = 0; i >= 19; )
	{
		
	}
}

zadanie642::zapiszDoPliku(const char *nazwa, int wynik, int min, int max)
{	
        ofstream plik;
        plik.open(nazwa);
        plik.close();
        
}

int main()
{
//Eryk Kucharski
	zadanie642 x;
	x.wprowadz();
//	x.wypisz();
    return 0;
}
