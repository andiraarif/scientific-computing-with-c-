#include <iostream>

int main(int argc, char* argv[])
{
    double p, q, x, y;
    int j;

    // Case 1
    if ((p >= q) || (j != 10))
    {
        x = 5;
    }

    // Case 2
    if ((y >= q) && (j == 20))
    {
        x = 5;
    }
    else
    {
        x = p;
    }

    // Case 3
    if (p > q)
    {
        x = 0;
    }
    else if ((p <= q) && (j == 10))
    {
        x = 1;
    }
    else
    {
        x = 2;
    }

    return 0;
}