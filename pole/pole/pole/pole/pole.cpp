#include <iostream>

int main()
{
    float a, b, c, pole, obw;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    if (a > 0 and b > 0 and c > 0) {
        if (a + b >= c and a + c >= b and c + b >= a) {
            obw = a + b + c;
            float p = obw / 2.0;
            pole = sqrt(p * (p - a) * (p - b) * (p - c));

            std::cout << "pole = " << pole << std::endl;
        }
    }
    else {
        std::cout << "Dlugosc boku nie moze byc wartoscia ujemna" << std::endl;
    }
   

    float aQ, bQ, cQ, x1, x2;

    std::cout << "ax^2+bx+c=0" << std::endl;
    std::cout << "a = ";
    std::cin >> aQ;
    std::cout << "b = ";
    std::cin >> bQ;
    std::cout << "c = ";
    std::cin >> cQ;
    
    if (aQ == 0) {
        if (bQ == 0) {
            if (cQ != 0) {
                std::cout << "rownanie sprzeczne" << std::endl;
            }
            else {
                std::cout << "0 = 0" << std::endl;
            }
        }
        else {
            std::cout << "funkcja liniowa x = " << cQ / bQ << std::endl;
        }
    }
    else {
        float dlta = (b * b) - 4 * aQ * cQ;
        if (dlta > 0) {
            std::cout << "x1 = " << (-bQ - sqrt(dlta)) / (2 * aQ) << std::endl;
            std::cout << "x2 = " << (-bQ + sqrt(dlta)) / (2 * aQ) << std::endl;
        }
        else {
            if (dlta < 0) {
                std::cout << "nie ma miejsc zerowych" << std::endl;
            }
            else {
                std::cout << "x0 = " << (-bQ) / (2 * aQ) << std::endl;
            }
        }
    }
}

