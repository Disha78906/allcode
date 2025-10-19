#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    int len;

    printf("Enter a word: ");
    scanf("%s", name);

    len = strlen(name);

    printf("Length of the word = %d", len);

    return 0;
}
