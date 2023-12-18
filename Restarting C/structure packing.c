// structure packing
// int - 4
// char - 1
// padding - size = 8
//packing - size = 5

#include <stdio.h>
#pragma pack(1)

struct abc
{
    char a;
    int b;
};

int main()
{
    struct abc s;
    printf("Size of s: %d",sizeof(s));
}
