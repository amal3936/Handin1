#include <iostream>
#include <vector>
#include <algorithm>

void Exercise3A(int n)
{

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        ++sum;
    }
}

int main()
{
    int n_values[] = {10, 100, 1000, 10000, 100000, 1000000};
    for (int n : n_values)
    {
        Exercise3A(n);
    }
}

//(b) (Week 2) Estimate the worst-case complexity of your program.
// Hvis værdien er 0