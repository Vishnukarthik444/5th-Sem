//Write a C program to show that C programming Language support only Call by Value
# include <stdio.h>

void callValue(int, int);

int main(){
    int x = 10, y = 20;
    callValue(x,y);
    printf("Before calling value: x = %d, y = %d\n", x,y); // Initial value of x and y
}

void callValue(int x,int y){
     x = 100;
     y = 200;
    printf("After calling value: x = %d, y = %d\n", x,y); // Values after function call
}

