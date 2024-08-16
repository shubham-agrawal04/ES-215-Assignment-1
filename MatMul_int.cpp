#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

void MatrixMultiply(int N, vector<vector<int>> &A, vector<vector<int>> &B, vector<vector<int>> &result)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < N; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int N = 64; //128, 256, 512, 1024;
    vector<vector<int>> A(N, vector<int>(N, 1.0));
    vector<vector<int>> B(N, vector<int>(N, 2.0));
    vector<vector<int>> result(N, vector<int>(N, 0.0));

    auto start_meat = high_resolution_clock::now();
    MatrixMultiply(N, A, B, result);
    auto end_meat = high_resolution_clock::now();

    auto duration_meat = duration_cast<nanoseconds>(end_meat - start_meat).count();
    double matrix_multiplication_time = duration_meat * 1e-9;



    cout << endl
         << "Matrix multiplication time for size " << N << "x" << N << ": "
         << matrix_multiplication_time << " seconds" << endl;

    return 0;
}