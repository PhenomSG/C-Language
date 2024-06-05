#include <stdio.h>
int main(){
    int i;
    int *pi = &i;
    scanf("%d",pi); //  if 5
    printf("%d\n",i+5); // 10
}
/*
int main(){
    int i =10;
    int *ptr;
    printf("%d",*ptr);
    // uninitialised pointer
    // has garbage value
}
*/