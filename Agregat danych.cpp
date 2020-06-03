#include <iostream>

class Agregat                                 //
{                                             // Agregat, czyli klasa, ktora jest zbiornikiem na dane. 
public:                                       // Wszystkie zmienne musza byc publiczne.
                                              //
    int a;                                    //
    float f;                                  //
    std::string nazwa;                        //
    int r;                                    //
};                                            //

enum Paliwo { PB95, PB98, ON, LPG };
enum Pojemnosc { _1_4, _1_6, _1_8, _2_0, _2_2, _2_4, _2_8, _3_0 };

struct Auto
{
    std::string marka = "Audi", model = "A6";
    int rocznik = 2004;
    Paliwo fuel = LPG;
    Pojemnosc silnik = _2_4;  
};

void pokaz(Auto autko)
{
    std::cout << autko.marka << ' ' << autko.model << " rocznik: "<< autko.rocznik << ", paliwo: " << autko.fuel << ", silnik: " << autko.silnik << '\n';

}

int main()
{
    Agregat ag = { 2, 3.44f, "waz", 5 };       // Inicjalizacja zmiennych, bedacych skladowymi agregatu "ag"

    Auto Audi;

    std::cout << ag.nazwa << std::endl;
    pokaz(Audi);

    return 0;
}
