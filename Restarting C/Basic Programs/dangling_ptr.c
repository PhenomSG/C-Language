#include <stdio.h>
int * fun(){
    //static int a;
    // if we use static we can access it
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