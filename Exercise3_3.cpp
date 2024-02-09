#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdio> 

int Exercise33(int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n * n; ++j) {
            ++sum;
        }
    }
    return sum; 
}

int main() 
{
    int nvalues[] = {100, 200, 500,1000,1500,2000};
    for (int n : nvalues)
    {
        int result = Exercise33(n);
        std::cout << "The result of Exercise3.3 is: " << result << std::endl;
    }
    

    clock_t start, end;
    double cpu_time_used;
    int N_values[] = {1000, 2000, 3000, 4000, 5000}; // replace with your desired N values

    for (int i = 0; i < sizeof(N_values) / sizeof(N_values[0]); i++)  
    {
        start = clock();
        Exercise33(N_values[i]);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

        // Use printf for formatting the time values
        printf("Time taken for N = %d: %.6f milliseconds\n", N_values[i], cpu_time_used * 1000);
    }

    return 0;


}
