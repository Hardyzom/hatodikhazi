#include <stdio.h>
#include <stdlib.h>

char *angolabc() {

    int SIZE = 26;

    char *abc = malloc((SIZE + 1) * sizeof(char));
    if (abc == NULL) {
        printf("Hiba!\n");
        exit(1);
    }

    for (int i = 0; i < SIZE; i++) {
        abc[i] = 'a' + i;
    }

    abc[SIZE] = '\0';

    return abc;
}

int main() {

    char *abc = angolabc();
    printf("%s\n", abc);
    free(abc);

    return 0;
}
