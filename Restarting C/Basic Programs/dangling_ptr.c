#include <stdio.h>
int * fun(){
    int a;
    return &a;
}
int main(){
    int *ptr;
    ptr = fun(); //Dangling pointer
    // returns address of dangling pointer
    printf("%d",ptr);
    return 0;
}