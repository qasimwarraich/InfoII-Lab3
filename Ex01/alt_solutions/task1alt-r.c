#include <stdio.h>

const int MAX_LENGTH = 1000; 

int strlength(char s[])
{
    int len = 0;
    while(s[len] != '\0')
        len++;

    return len;
}

void reverse_string(char str[], int len)
{
    if (len > 2){
        int head = 0;
        int tail = len-2;
        char temp;
        temp = str[head];
        str[head] = str[tail];
        str[tail] = temp;

        /* -2 because length changes at both ends */
        reverse_string(str+1, len-2);
    }
    
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
