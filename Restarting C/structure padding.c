// structure padding -> read more
// it is the process of inserting some extra bytes between variables just to align the data
// now a days memory is WORD addressable not byte addressable

// designated initialization in structures
struct ques
{
    int a;
    float b;
    int c;
};
void main()
{
    struct ques q = {.b = 1, .c = 10, .a = 15};
    printf("%d %f %d",q.a,q.b,q.c);
}