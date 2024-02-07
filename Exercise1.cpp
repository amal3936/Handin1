#include <iostream>
#include <vector>
#include <algorithm>

//(1) Number of integers in a vector

//(a) (Week 1) Write a program that generates random M integers and puts them
// in an vector. Then it generates another N random integers and counts how
// many of them are in the array using an iterator.

int main()
{

    // Generer M tilfældige tal og gemmer dem en vektor
    int M;
    std::cout << "Enter the value of M: ";

    // indlæser den indtastede værdi
    std::cin >> M;

    std::vector<int> integersVector;
    for (int i = 0; i < M; ++i)
    {
        integersVector.push_back(rand() % 100); // Tal mellem 0 og 100
    }

    // Generer N tilfældige tal
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    // Iterator
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        int randomInt = rand() % 100; // Tal mellem 0 og 100

        // Checker om de er der ved hjælp af find
        auto it = std::find(integersVector.begin(), integersVector.end(), randomInt);
        if (it != integersVector.end())
        {
            count++;
        }
    }

    // Udskriver det
    std::cout << "Number of integers in the vector: " << count << std::endl;

    return 0;
}

//(b) (Week 2) Estimate the worst-case complexity of your program.
// Hvis værdien er 0