#include <iostream>

int main()
{
    int nb;
    std::cout << "Entrez un nombre de jours : ";
    std::cin >> nb;

    int siecle = nb/(360*100);
    int a  =  nb%(360*100);
    int annees = a/360;
    int b = a%360;
    int mois = b/30;
    int c = b%30;
    int semaine = c/7;
    int d  = c%7;
    int jours = d/1;
    



    std::cout << nb << " jours correspondent à : " << siecle << " siecle " << annees << " années " << mois << " mois " << semaine << " semaine " << jours << " jours " << std::endl;
    
    return 0;
}