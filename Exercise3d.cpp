#include <iostream>
#include <vector>
#include <algorithm>

int Exercise3d(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ++sum;
        }
    }
    return sum;
}

int main()
{
    int n_values[] = {10, 100, 1000, 10000, 100000, 100000};
    for (int n : n_values)
    {
        int result = Exercise3d(n);
        std::cout << "The result of Exercise3A is: " << result << std::endl;
    }
    clock_t start, end;
    double cpu_time_used;
    int N_values[] = {1000, 2000, 3000, 4000, 5000, 10000, 15000, 20000}; // replace with your desired N values

    for (int i = 0; i < sizeof(N_values) / sizeof(N_values[0]); i++)
    {
        start = clock();
        Exercise3d(N_values[i]);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken for N = %d: %f seconds\n", N_values[i], cpu_time_used);
    }
}

//(b) (Week 2) Estimate the worst-case complexity of your program.
// Hvis værdien er 0