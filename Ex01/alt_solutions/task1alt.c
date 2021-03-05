#include <stdio.h>

const int MAX_LENGTH = 1000; 

int strlength(char s[])
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

void reverse_string(char str[], int len)
{
    int head = 0;
    /* -2 because I am preserving the position of the \n */
    int tail = len-2;
    char temp;
    while (head < tail){
        temp = str[head];
        str[head] = str[tail];
        str[tail] = temp;
        head++;
        tail--;
    }
    return;
}

int main(int argc, char *argv[])
{
    char str[MAX_LENGTH];
    printf("Please enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    int len = strlength(str);
    printf("Length of supplied string = %d\n", len);
    puts("==========");

    reverse_string(str, len);
    printf("Returned string:\n");
    fputs(str, stdout);

    return 0;
}
