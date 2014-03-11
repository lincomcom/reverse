#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char A[12];//這邊必須設比10大2，因為要抓\n
    FILE *fptr;
    fptr = fopen("data.txt", "r");


      if(fptr==NULL){
     printf("Error!!");
       }

while (fgets(A,12,fptr)!= NULL){
        //抓每一行12個字元(包括\n)

     /* caculate s*/

     for(i=strlen(A)-2;i>=0;i--)
     printf("%c",A[i]);

 printf("\n");
}

    return 0;
}
