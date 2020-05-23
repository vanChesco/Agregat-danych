#include <iostream>

class Agregat
{
public:

    int a;
    float f;
    std::string nazwa;
    int r;
};


int main()
{
    Agregat ag = { 2, 3.44, "waz", 5 };

    std::cout << ag.a << std::endl;

    return 0;
}
