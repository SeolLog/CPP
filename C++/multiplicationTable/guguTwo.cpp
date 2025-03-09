#include <stdio.h>
void guguTwo(int dan){
    for(int i=1; i<=9; i++){
        printf("%2d * %2d = %2d\n", dan, i, dan * i);
    }
}
int main(){
    guguTwo(2);
}

