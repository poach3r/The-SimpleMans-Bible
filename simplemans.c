#include <stdio.h>
#include <windows.h>

int main() {
    int result, book;
    FILE * fp;
    const unsigned MAX_LENGTH = 512;
    char buffer[MAX_LENGTH];
    printf("SIMPLEMANS BIBLE BY HENRY M.\n");
    printf("----------------------\n\n");
    for (;;) {
        int choice = 0;
        printf("Select Version\n");
        printf("1. ASV\n");
        printf("2. KJV\n");
        printf("Answer: ");
        choice = getche();
        switch (choice) {
        case '1': //ASV
            printf("\n\nSelect Division\n");
            printf("1. Old Testament\n");
            printf("2. New Testament\n");
            printf("Answer: ");
            choice = getche();
            switch (choice) {
            case '1': //OLD TESTAMENT
                printf("\n\nSelect Book\n");
                printf("1. Genesis\n");
                printf("2. Exodus\n");
                printf("3. Leviticus\n");
                printf("4. Numbers\n");
                printf("5. Deuteronomy\n");
                printf("6. Joshua\n");
                printf("7. Judges\n");
                printf("8. Ruth\n");
                printf("9. 1 Samuel\n");
                printf("10. 2 Samuel\n");
                printf("11. 1 Kings\n");
                printf("12. 2 Kings\n");
                printf("13. 1 Chronicles\n");
                printf("14. 2 Chronicles\n");
                printf("15. Ezra\n");
                printf("16. Nehemiah\n");
                printf("17. Esther\n");
                printf("18. Job\n");
                printf("19. Psalms\n");
                printf("20. Proverbs\n");
                printf("21. Ecclesiastes\n");
                printf("22. Song of Solomon\n");
                printf("23. Isaiah\n");
                printf("24. Jeremiah\n");
                printf("25. Lamentations\n");
                printf("26. Ezekiel\n");
                printf("27. Daniel\n");
                printf("28. Hosea\n");
                printf("29. Joel\n");
                printf("30. Amos\n");
                printf("31. Obadiah\n");
                printf("32. Jonah\n");
                printf("33. Micah\n");
                printf("34. Nahum\n");
                printf("35. Habakkuk\n");
                printf("36. Zephaniah\n");;
                printf("37. Haggai\n");
                printf("38. Zechariah\n");
                printf("39. Malachi\n");
                printf("Answer: ");
                scanf("%d", &book);
                system("cls");
                if(book == 1) { //GENESIS
                    fp = fopen("asv\\oldt\\gen.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 2) {//EXODUS
                    fp = fopen("asv\\oldt\\exo.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 3) { //LEVITICUS
                    fp = fopen("asv\\oldt\\lev.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 4) { //NUMBERS
                    fp = fopen("asv\\oldt\\num.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 5) { //DEUTERONOMY
                    fp = fopen("asv\\oldt\\deu.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 6) { //JOSHUA
                    fp = fopen("asv\\oldt\\jsh.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 7) { //JUDGES
                    fp = fopen("asv\\oldt\\jdg.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 8) { //RUTH
                    fp = fopen("asv\\oldt\\rth.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 9) { //1 SAMUEL
                    fp = fopen("asv\\oldt\\sam1.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
               else if(book == 10) { //2 SAMUEL
                    fp = fopen("asv\\oldt\\sam2.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
               }
                else if(book == 11) { //1 KINGS
                    fp = fopen("asv\\oldt\\kng1.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 12) { //2 KINGS
                    fp = fopen("asv\\oldt\\kng2.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 13) { //1 CHRONICLES
                    fp = fopen("asv\\oldt\\crn1.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 14) { //2 CHRONICLES
                    fp = fopen("asv\\oldt\\crn2.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 15) { //EZRA
                    fp = fopen("asv\\oldt\\ezra.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 16) { //NEHEMIAH
                    fp = fopen("asv\\oldt\\neh.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 17) { //ESTHER
                    fp = fopen("asv\\oldt\\est.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 18) { //JOB
                    fp = fopen("asv\\oldt\\job.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 19) { //PSALMS
                    fp = fopen("asv\\oldt\\psm.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 20) { //PROVERBS
                    fp = fopen("asv\\oldt\\prv.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 21) { //ECCLESIATES
                    fp = fopen("asv\\oldt\\ecc.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 22) { //SOLOMON
                    fp = fopen("asv\\oldt\\sol.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 23) { //ISAIAH
                    fp = fopen("asv\\oldt\\ish.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 24) { //JEREMIAH
                    fp = fopen("asv\\oldt\\jer.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }else if(book == 25) { //LAMENTATIONS
                    fp = fopen("asv\\oldt\\lam.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }else if(book == 26) { //EZEKIEL
                    fp = fopen("asv\\oldt\\eze.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 27) { //DANIEL
                    fp = fopen("asv\\oldt\\dan.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 28) { //HOSEA
                    fp = fopen("asv\\oldt\\hos.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 29) { //JOEL
                    fp = fopen("asv\\oldt\\jol.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 30) { //AMOS
                    fp = fopen("asv\\oldt\\amo.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 31) { //OBADIAH
                    fp = fopen("asv\\oldt\\oba.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 32) { //JONAH
                    fp = fopen("asv\\oldt\\jon.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 33) { //MICAH
                    fp = fopen("asv\\oldt\\mic.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 34) { //NAHUM
                    fp = fopen("asv\\oldt\\nah.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 35) { //HABAKKUK
                    fp = fopen("asv\\oldt\\hab.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 36) { //ZEPPHANIAH
                    fp = fopen("asv\\oldt\\zep.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 37) { //HAGGAI
                    fp = fopen("asv\\oldt\\hag.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 38) { //ZECHARIAH
                    fp = fopen("asv\\oldt\\zec.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else if(book == 39) { //MALACHAI
                    fp = fopen("asv\\oldt\\mal.txt", "r");
                    if (fp == NULL) {
                        printf("\n\nError: could not open file");
                        return 1;
                    }
                    while (fgets(buffer, MAX_LENGTH, fp))
                        printf("\n%s", buffer);
                    fclose(fp);
                    break;
                }
                else {
                    printf("INVALID");
                    break;
                }
                break;
            case '2':
                printf("\n\nWhoever is slow to anger has great understanding, but he who has a hasty temper exalts folly.");
            }
            break;
        case '2': //KJV
            printf("\n\nBut if we hope for what we do not see, we wait for it with patience.");
            break;
        }
        printf("\n\n");
    }
}
