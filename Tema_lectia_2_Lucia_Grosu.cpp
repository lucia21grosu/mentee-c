#include <iostream>


using namespace std;



int numarulintrodus;

int numarulnecunoscut;



int main()

{
std::cout << "Ghiceste numarul, introdu o valoare";
std::cin >> numarulintrodus;
std::cout << "Numarul introdus este:";
std::cout << numarulintrodus << std::endl;

while (numarulnecunoscut!=numarulintrodus)
{
std::cin >> numarulnecunoscut;    
if (numarulnecunoscut > numarulintrodus)
{
std::cout << "Caut un numar mai mic";
}

else if (numarulnecunoscut < numarulintrodus)
{
std::cout << "Caut un numar mai mare";
}

else 
{
std::cout << "Corect!";
}
}
}



