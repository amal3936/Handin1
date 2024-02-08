#include <iostream>
#include <vector>
#include <algorithm>

//a) T(N) = ((O(N)+2*O(1)))*(O(N)+2*O(1))*O(1) = O(N^2)*O(1)+4*O(1)^3+4*O(N)*O(1)^2 = O(N^2)
//   f(N) = n^2+4n
//   g(N) = n^2
//   f(N) < C*g(N)
//   C = 2, for ovenstående udsagn er korrekt
void Exercise3_2(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i) { //O(N) + 2*O(1)
      for (int j = 0; j < n; ++j) { //O(N) + 2*O(1)
        ++sum; //O(1)
        }
    }
}

using namespace std;
int main()
{
    clock_t start, end;
    double time_used;
    int n_values[] = {10, 100, 2000 ,10000, 25000, 40000, 100000, 300000, 500000};
    for (int n : n_values)
    {
        start = clock();
        Exercise3_2(n);
        end = clock();
        time_used = (((double)end-start)/CLOCKS_PER_SEC);
        printf("N = %d: %f seconds\n", n, time_used);
    }
}

//Running time
/*N = 10: 0.000003 seconds
N = 100: 0.000018 seconds
N = 2000: 0.004856 seconds
N = 10000: 0.086271 seconds
N = 25000: 0.467836 seconds
N = 40000: 1.197490 seconds
N = 100000: 7.512304 seconds
N = 300000: 67.298395 seconds
N = 500000: 189.855963 seconds*/


//Optimization
/*N = 10: 0.000001 seconds
N = 100: 0.000001 seconds
N = 2000: 0.000001 seconds
N = 10000: 0.000000 seconds
N = 25000: 0.000000 seconds
N = 40000: 0.000000 seconds
N = 100000: 0.000001 seconds
N = 300000: 0.000000 seconds
N = 500000: 0.000000 seconds*/