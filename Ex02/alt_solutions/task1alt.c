#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* This is a more efficient recursive implementation of the classic power and
 * exponent recursive example. This uses tail recursion with the assistance of
 * an accumulator variable and a stored result. This ensures the intermediate
 * values are computed as we go along and not when the recursion collapses at
 * the end. 
 */

int tail (int n, int exponent, int storedresult)
{
    if (exponent == 0) return storedresult;
    return tail(n, --exponent, storedresult * n);
}

int power(int n, int exponent)
{
    int accumulator = 1;
    int result = tail(n, exponent, accumulator);
    return result;
}


int main()
{
    printf("The result: %d\n", power(2,10));
    return 0;
}
 
