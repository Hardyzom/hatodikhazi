#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int also, felso, darab;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &darab);
    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    


    srand(time(NULL));
    for (int i = 0; i < darab; i++) {
        int rand_num = rand() % (felso - also + 1) + also;
        printf("%d ", rand_num);
    }
    printf("\n");

    return 0;
}
