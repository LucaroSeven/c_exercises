#include <stdio.h>

int main(void) {
    char arr_1[100];
    char arr_2[100];

    int is_same = 1; // We assume both are equal at first

    printf("Introduce the first text:");
    fgets(arr_1, sizeof(arr_1), stdin);

    printf("Introduce the second text:");
    fgets(arr_2, sizeof(arr_2), stdin);

    // Delete the newline termination
    for (int j = 0; j < 2; j++) {
        char* c = (j==0) ? arr_1 : arr_2;
        int index = 0;

        while (c[index] != '\0') {
            if (c[index] == '\n') {
                c[index] = '\0';
                break;
            }
        }

        index++;
    }

    // We compare strings
    int i = 0;
    while (arr_1[i] != '\0' || arr_2[i] != '\0') {
        if (arr_1[i] != arr_2[i]){
            is_same = 0;
            break;
        }

        i++;
    }

    // Show output
    if(is_same) {
        printf("Are equal");
    }else {
        printf("Are NOT equal");
    }
}