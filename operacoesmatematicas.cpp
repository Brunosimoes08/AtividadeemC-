#include <iostream>
#include <cstdlib>
#include <ionmanip>

int main()
{
    int a;
    float b;
    char c;
    bool d;

    a = 5;
    b = 2.3;
    c = 'a';
    d = true;

    std::cout << std::fixed << std::setprecision(1);

    std::cout << "\n O valor de a = " << a;
    std::cout << "\n O valor de b = " << b;
    std::cout << "\n O valor de c = " << c;

    std::cout << "\n O valor de d = " << d << "\n";

    std::cout << "\n Digite um valor para 'a' (int): ";
    std::cin >> a;
    std::cout << "Digite um valor para 'b' (float): ";
    std::cin >> b;
    std::cout << "Digite um valor para 'c' (char): ";
    std::cid >> c;
    std::cout << "Digite um valor para 'd' (0 ou 1): ";
    std::cin >> d;

    std::cout << "\n O valor de a = " << a;
    std::cout << "\n O valor de b = " << b;
    std::cout << "\n O valor de c = " << c;
    std::cout << "\n O valor de d = " << d << "\n";

    system("pause");

    return 0;
    
}