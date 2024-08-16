#include <bits/stdc++.h>
using namespace std;

vector<long long> dp(50, -1);

long long fibonacciRecursionMemo(int n) {
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibonacciRecursionMemo(n - 1) + fibonacciRecursionMemo(n - 2);
}

int main() {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    for (int i = 0; i < 50; i++) {
        cout << fibonacciRecursionMemo(i) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    cout << "Time taken by Recursion with Memoization: " << time_taken << " seconds" << endl;

    return 0;
}
