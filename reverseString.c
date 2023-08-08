#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *received = malloc(20 * sizeof(char));
    scanf("%s", received);

    int l = strlen(received);
    char *output = malloc(l * sizeof(char) + 1);

    for(int i = 0; i < l ; i++) {
        output[i] = received[l - i - 1];
    }
    output[l] = '\0';
    printf("%s", output);

    free(received);
    free(output);

    return 0;
}
