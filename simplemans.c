#include <stdio.h>

#include <windows.h>

int main() {
    int result;
    FILE * fp;
    const unsigned MAX_LENGTH = 512;
    char buffer[MAX_LENGTH];
    printf("SIMPLEMANS BIBLE BY HENRY M.\n");
    printf("----------------------\n\n");
    for (;;) {
        int choice = 0;
        printf("SELECT VERSION\n");
        printf("1. ASV\n");
        printf("2. KJV\n");
        printf("Answer: ");
        choice = getche();
        switch (choice) {
        case '1':
            printf("\n\nSELECT BOOK\n");
            printf("1. Genesis\n");
            printf("2. Exodus\n");
            printf("3. Leviticus\n");
            printf("Answer: ");
            choice = getche();
            system("cls");
            switch (choice) {
            case '1':
                ;
                fp = fopen("asv\\gen.txt", "r");
                if (fp == NULL) {
                    printf("\n\nError: could not open file");
                    return 1;
                }
                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("\n%s", buffer);
                fclose(fp);
                break;
            case '2':
                ;
                fp = fopen("asv\\exo.txt", "r");
                if (fp == NULL) {
                    printf("\n\nError: could not open file");
                    return 1;
                }
                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("\n%s", buffer);
                fclose(fp);
                break;
            case '3':
                ;
                fp = fopen("asv\\lev.txt", "r");
                if (fp == NULL) {
                    printf("\n\nError: could not open file");
                    return 1;
                }
                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("\n%s", buffer);
                fclose(fp);
                break;
            }
            break;
        case '2':
            break;
        }
        printf("\n\n");
    }
}
