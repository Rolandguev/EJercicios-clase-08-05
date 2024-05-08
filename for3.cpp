#include <iostream>
using namespace std;

int main()
{
    int n;
    bool esPrimo = true;
    std::cout << "ingresa un numero entero positivo: ";
    std::cin >> n;

    if (n<=1)
    {
        esPrimo = false;
    } else {
        for (int i = 2; i <= n / 2; i++){
         if(n% i ==0) {
             esPrimo = false;
             break;
         }   

        }
    }
    

    if (esPrimo)
    {
        std::cout << n << " ees un numero primo." << std::endl;
    }
    else
    {
    cout << n << " no es un numero primo." << std::endl;
    }

    return 0;
}