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
    clock_t start, end;
    double cpu_time_used;
    int N_values[] = {1000000, 2000000, 3000000, 4000000, 5000000}; // replace with your desired N values

    for (int i = 0; i < sizeof(N_values) / sizeof(N_values[0]); i++)
    {
        start = clock();
        Exercise3A(N_values[i]);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken for N = %d: %f seconds\n", N_values[i], cpu_time_used);
    }
}

//(b) (Week 2) Estimate the worst-case complexity of your program.
// Hvis værdien er 0