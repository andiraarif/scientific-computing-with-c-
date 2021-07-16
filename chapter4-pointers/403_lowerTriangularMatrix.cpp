#include <iostream>

int main(int argc, char* argv[])
{
    int** A;
    int row = 1000;

    A = new int* [row];
    for (int i=0; i < row; i++)
    {
        A[row] = new int [row + 1];
    }
    return 0;
}