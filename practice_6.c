//
// Created by 변민종 on 4/20/24.
//
#include "stdio.h"

void main_1() {
    int i, n, c = 'A';
    while(1) {
        printf("\n 횟수는 ?");
        scanf("%d", &n);
        for(i=1 ; i<=n; i++){
            printf("%c", c);
            if(c=='Q')
                goto end;
            c++;
        }
    }
    end:
    printf("\n\n END");
}

void array_ex() {
    static int x[] = {1, 2, 3, 4};
    static int y[] = {10, 20, 30, 40};
    int i, z[4];
    for (i=0; i<4; ++i)
        z[i] = x[i] + y[3-i];
    printf("반대 위치의 배열요소 합\n");
    for(i=0; i<4; ++i)
        printf("%d + %d = %d\n", x[i], y[3-i], z[i]);
};