#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool perfect_square(int num, int square) {
    if (square * square == num) return true;
    if (square * square > num) return false;
    
    return perfect_square(num, ++square);
}

int main(int argc, char *argv[])
{
    printf("Please enter a number:\n");
    char query[6];
    fgets(query, 6, stdin);
    int num = atoi(query);
    bool result = perfect_square(num, 1); 

    printf(result ? "true\n" : "false\n");
    return 0;
}
