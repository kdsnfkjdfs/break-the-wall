#include <stdio.h>

int main(void) {

    int s;
    int py, px;
    int c = 0;
    scanf("%d", &s);
    char arr[s][s];

    for (int i = 0; i < s; i++) {
        if (i == 0 || i == s - 1) {
            for (int j = 0; j < s; j++) {
                arr[i][j] = '2';

            }

        }
        else {

            for (int j = 0; j < s; j++) {
                arr[i][j] = ' ';

            }
            arr[i][0] = '2';
            arr[i][s - 1] = '2';
        }
    }



    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%c", arr[i][j]);


        }

        printf("\n");
    }

    while (1) {
        scanf("%d %d", &py, &px);
        if (py - 1 == 0 && px - 1 == 0) {
            if (arr[py - 1][px - 1] == '0') {
                arr[py - 1][px - 1] += 1;
                arr[0][1] -= 1;
                arr[1][0] -= 1;
            }

        }

        if (py - 1 == 0 && px - 1 == s - 1) {
            if (arr[py - 1][px - 1] == '0') {
                arr[py - 1][px - 1] += 1;
                arr[0][s - 2] -= 1;
                arr[1][s - 1] -= 1;
            }

        }

        if (py - 1 == s - 1 && px - 1 == 0) {
            if (arr[py - 1][px - 1] == '0') {
                arr[py - 1][px - 1] += 1;
                arr[s - 2][0] -= 1;
                arr[s - 1][1] -= 1;
            }

        }

        if (py - 1 == s - 1 && px - 1 == s - 1) {
            if (arr[py - 1][px - 1] == '0') {
                arr[py - 1][px - 1] += 1;
                arr[s - 1][s - 2] -= 1;
                arr[s - 2][s - 1] -= 1;
            }

        }


        arr[py - 1][px - 1] -= 1;

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                printf("%c", arr[i][j]);

            }


            printf("\n");
        }

        for (int i = 0; i < s; i++) {
            for (int j = 1; j < s - 1; j++) {
                if (arr[i][j] == '0') {
                    c = 1;

                }
            }
        }

        for (int i = 1; i < s - 1; i++) {
            for (int j = 0; j < s; j++) {
                if (arr[i][j] == '0') {
                    c = 1;

                }
            }
        }

        if (c == 1) {
            printf("\n");
            printf("///////////////////////////");
            printf("³¡³² \n");
            break;
        }
    }


    return 0;
}