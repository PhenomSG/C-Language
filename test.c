#include<stdio.h>
#define FILENAME "abc.txt"
int main(){
    FILE *fp;
    char ch;
    int linesCount=0;

    //open file in read mode
    fp=fopen(FILENAME,"r");
    if(fp==NULL){
        printf("File \"%s\" does not exist!!!\n",FILENAME);
        return -1;
    }
    
    //read character by character and check for new line
    while((ch=getc(fp))!=EOF){
        if(ch=='\n')
            linesCount++;
        }
        //close the file
        fclose(fp);

        //print number of lines
        printf("Total number of before adding lines are: %d\n",linesCount);
        
        fp=fopen(FILENAME,"a"); //open fine in append mode
        while((ch = getchar())!=EOF){
            putc(ch,fp);
        }
        fclose(fp);

        fp=fopen(FILENAME,"r");
        if(fp==NULL){
            printf("File \"%s\" does not exist!!!\n",FILENAME);
            return -1;
        }
        //read character by character and check for new line
        while((ch=getc(fp))!=EOF){
            if(ch=='\n')
                linesCount++;
            }
            //close the file
            fclose(fp);
            //print number of lines
            printf("Total number of after adding lines are: %d\n",linesCount);
    return 0;
}