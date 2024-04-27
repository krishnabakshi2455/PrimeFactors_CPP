
#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    if (n % 2 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
void printPrimes(int start, int end)
{
    std::cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; ++i)
    {
        if (isPrime(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int start, end;
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    printPrimes(start, end);

    return 0;
}