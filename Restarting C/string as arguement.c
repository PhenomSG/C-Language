// string as arguement
// strings are always passed as call by "reference"

void display(char []);

void main()
{
    char str[] = "Sahaj";
    display(str);
}

void display(char str[])
{
    printf("String is %s",str);
}