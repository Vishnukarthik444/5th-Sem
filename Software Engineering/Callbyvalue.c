# include <stdio.h>

void callValue(int, int);

int main(){
    int x = 10, y = 20;
    callValue(x,y);
    printf("Before calling value: x = %d, y = %d\n", x,y);
}

void callValue(int x,int y){
     x = 100;
     y = 200;
    printf("After calling value: x = %d, y = %d\n", x,y);
}

