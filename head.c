#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char line[100];

    file = fopen(argv[1], "r");
    int i = 0;
    while (i < 10) {
	fgets(line, sizeof(line), file);
	printf("%s", line);
	i++;
    }
    fclose(file);
    return 0;
}
