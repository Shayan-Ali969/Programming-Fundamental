#include <stdio.h>
#include <string.h>

int main() {
    char firstName[30] = "Shayan ";
    char lastName[] = "Ali";

    strcat(firstName, lastName);

    printf("Full name after concatenation: %s\n", firstName);
    return 0;
}
