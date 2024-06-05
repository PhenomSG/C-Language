#include <stdio.h>
int main(){
    int a[4] = {1,2,3,4};
    // int a[2] = {1,2,3,4}
    // excess element ignored
    // a[2] = 2[a] = *(a+2) = *(2+a)
    printf("%d\n",a[2]);
    printf("%d\n",*(a+2));
    printf("%d\n",*(2+a));
    printf("%d\n",2[a]);
}