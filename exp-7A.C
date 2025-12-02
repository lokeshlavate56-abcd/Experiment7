//Name:- Lokesh Lavate,UIN:-251P083, Class:-F.E DIV:-D
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Length of string = %d", count);

    return 0;
}