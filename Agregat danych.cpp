#include <iostream>

#define str(A) #A				// definicja preprocesora zamieniajaca A na ciag tekstowy

class Agregat					//
{								// Agregat, czyli klasa, ktora jest zbiornikiem na dane. 
public:							// Wszystkie zmienne musza byc publiczne.
								//
	int			a;				//
	float		f;				//
	std::string nazwa;			//
	int			r;				//
};

enum class Paliwo		// Definicja SILNEGO Enuma (eliminuje mozliwosc wpisania zdefiniowanej wartosci, jako liczby int, 
{ 						// ale trzeba pamietac o zapisywaniu tych wartosci razem z zakresem ZAKRES::WARTOSC)
	PB95, 
	PB98, 
	ON, 
	LPG 
};

enum Pojemnosc			// Definicja ZWYKLEGO Enuma
{ 						// w tym przypadku istnieje ryzyko, ze przykladowa wartosc typu enum _1_8 zostanie zinterpretowana jako int 2. 
	_1_4, 				// w typie enum class tego zagrozenia nie ma.
	_1_6, 
	_1_8, 
	_2_0, 
	_2_2, 
	_2_4, 
	_2_8, 
	_3_0 
};

struct Auto											// Struktora danych
{													// mozna jej uzywac, jesli obiekt ma posiadac tylko parametry bez funkcji skladowych
	std::string	marka	= "Audi", 					// Z definicji wszystkie parametry sa tu publiczne
				model	= "A6";						// 
	int			rocznik	= 2004;						// 
	Paliwo		fuel	= Paliwo::LPG;				// 
	Pojemnosc	silnik	= Pojemnosc::_2_4;			// 
};													// 

void pokaz(Auto autko)
{
	std::cout	<< "\n\t" << autko.marka << ' ' << autko.model << " rocznik: "<< autko.rocznik 
				<< ", paliwo: " << int(autko.fuel) << ", silnik: " << autko.silnik << "\n\n";			// konieczne rzutowanie przy enum class

}

int main()
{
	Agregat pudelko = { 2, 3.44f, "waz", 5 };			// Inicjalizacja zmiennych, bedacych skladowymi agregatu "ag"

	std::cout << "\n\t" << pudelko.nazwa << '\n';

	int		x{ 0 };									// inicjalizacja x, ktora moglaby rowniez byc zapisana po prostu x = 0
	Paliwo	fuel{ Paliwo::LPG };					// inicjalizacja zmiennej typu enum; tez moglaby byc wykonana za pomoca operatora przypisania
	Auto	Audi;									// konstruktor domyslny obiektu Auto

	/// fuel = 2;
	/// x = Paliwo::PB95;  // nieprawidlowe przypisania wynikajace z zabezpieczenia typu enum class; ewentualnie konieczne rzutowanie x = (int)Paliwo::PB95;

	pokaz(Audi);

	return 0;
}
