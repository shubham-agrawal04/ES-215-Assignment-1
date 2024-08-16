#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

void MatrixMultiply(int N, vector<vector<double>> &A, vector<vector<double>> &B, vector<vector<double>> &result)
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
    vector<vector<double>> A(N, vector<double>(N, 1.0));
    vector<vector<double>> B(N, vector<double>(N, 2.0));
    vector<vector<double>> result(N, vector<double>(N, 0.0));

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