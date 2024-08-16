import time

def matrix_multiply_integer(N):
    A = [[1.0 for _ in range(N)] for _ in range(N)]
    B = [[2.0 for _ in range(N)] for _ in range(N)]
    C = [[0 for _ in range(N)] for _ in range(N)]
    
    start_meat_time = time.time()
    
    for i in range(N):
        for j in range(N):
            for k in range(N):
                C[i][j] += A[i][k] * B[k][j]
    
    end_meat_time = time.time()
    matrix_multiplication_time = (end_meat_time - start_meat_time)
    
    print(f"Matrix multiplication time for size {N}x{N}: {matrix_multiplication_time} seconds")


N = 64 # 128, 256, 512, 1024
matrix_multiply_integer(N)
