#include <stdio.h>
// #hash mark 
// stdio.h: standard input output

int main(){
    int i = 1;
    int dan = 3;

    loop:
        printf("%2d x %2d = %2d\n, dan, i, dan*i");
        i++;
        if(i<=9) goto loop;
}