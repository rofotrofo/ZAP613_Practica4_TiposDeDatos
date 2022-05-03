// ZAP613_Practica4_TiposDeDatos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numi1, numi2;
    float numf1, numf2;
    char let;
    double num3;
    std::string palabra;

    fflush(stdout);
    printf("Ingresa una palabra\n");
    getline(cin, palabra);

    printf("Ingresa un numero entero\n");
    scanf_s("%d", &numi1);
    std::cout << "Ingresa un numero entero\n";
    std::cin >> numi2;

    printf("Ingresa un numero con decimales\n");
    scanf_s("%f", &numf1);
    std::cout << "Ingresa un numero con decimales\n";
    std::cin >> numf2;

    printf("Ingresa un numero largo, con decimales\n");
    scanf_s("%lf", &num3);

    fflush(stdout);
    printf("Ingresa un caracter\n");
    scanf_s(" %c", &let);

    printf("\nEscribiste lo siguiente:\n");
    std::cout << palabra;
    printf("\n%d \n", numi1);
    std::cout << numi2;
    printf("\n%f \n", numf1);
    std::cout << numf2;
    printf("\n%lf \n", num3);
    printf("\n%c \n", let);

    return 0;
}
