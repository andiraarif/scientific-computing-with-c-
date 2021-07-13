#include <iostream>
#include <cassert>

int main(int argc, char* argv[])
{
    double A[2][2] = {{4.0, 10.0},
                      {1.0, 1.0}};
    double adjA[2][2];
    double AInv[2][2];
    double det;

    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    assert(det != 0);

    adjA[0][0] = A[1][1];
    adjA[1][1] = A[0][0];
    adjA[0][1] = -A[0][1];
    adjA[1][0] = -A[1][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            AInv[i][j] = (1/det)*adjA[i][j];
            std::cout << AInv[i][j];
        }
    }

    return 0;
}