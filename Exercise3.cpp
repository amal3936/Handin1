#include <iostream>
#include <vector>
#include <algorithm>

int Exercise3A(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        ++sum;
    }
    return sum;
}

int main()
{
    int n_values[] = {10, 100, 1000, 10000, 100000, 99999};
    for (int n : n_values)
    {
        int result = Exercise3A(n);
        std::cout << "The result of Exercise3A is: " << result << std::endl;
    }
}

//(b) (Week 2) Estimate the worst-case complexity of your program.
// Hvis værdien er 0