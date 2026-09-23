#include <iostream>

int main()
{
    float valeur1;
    float valeur2;
    float valeur3;

    std::cout << "1ere valeur : ";
    std::cin >>  valeur1;
     std::cout << "2e valeur : ";
    std::cin >>  valeur2;
     std::cout << "3e valeur : ";
    std::cin >>  valeur3;

    std::cout << (valeur1+valeur2+valeur3)/3 << std::endl;
    
    return 0;
}