#include <stdio.h>

int main(void) {
    char str_1[100];
    char str_2[100];

    int is_same = 1; // We assume both are equal at first

    printf("Introduce the first text:");
    fgets(str_1, sizeof(str_1), stdin);

    printf("Introduce the second text:");
    fgets(str_2, sizeof(str_2), stdin);

    // Delete the newline termination
    for (int j = 0; j < 2; j++) {
        char* current_str = (j==0) ? str_1 : str_2;
        int char_index = 0;

        while (current_str[char_index] != '\0') {
            if (current_str[char_index] == '\n') {
                current_str[char_index] = '\0';
                break;
            }
            char_index++;
        }
    }

    // We compare strings
    int i = 0;
    while (str_1[i] != '\0' || str_2[i] != '\0') {
        if (str_1[i] != str_2[i]){
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