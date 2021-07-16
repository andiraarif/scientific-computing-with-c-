#include <iostream>

int main(int argc, char* argv[])
{
    for (int iter = 0; iter < 1000000; iter++)
    {
        // Memory Dynamic Allocation
        int rows = 2, cols = 2;
        double** A;
        double** B;
        double** C;

        A = new double* [rows];
        B = new double* [rows];
        C = new double* [rows];

        for (int i = 0; i < rows; i++)
        {
            A[i] = new double[cols];
            B[i] = new double[cols];
            C[i] = new double[cols];
        }

        // Calculation
        A[0][0] = 1.0;
        A[0][1] = 2.0;
        A[1][0] = 3.0;
        A[1][1] = 4.0;

        B[0][0] = 1.0;
        B[0][1] = 2.0;
        B[1][0] = 3.0;
        B[1][1] = 4.0;


        std::cout << "Iteration number = " << iter << "\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                std:: cout << "C[" << i << "][" << j << "] = " << C[i][j] << "\n";
            }
        }
        std::cout << "\n";

        // Memory Deallocation
        for (int i = 0; i < rows; i++)
        {
            delete[] A[i];
            delete[] B[i];
            delete[] C[i];
        }

        delete[] A;
        delete[] B;
        delete[] C;
    }
    return 0;
}