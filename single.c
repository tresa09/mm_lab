#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char filename[100],file[100][100];
int i,n=0,j;
int flag;
void create_file()
{
printf("Enter name of file");
scanf("%s",&filename);
flag=0;
for(i=0;i<n;i++)
{
    if(strcmp(filename,file[i])==0)
    {
flag=1;
    }
}
if(flag==1)
{
    printf("file already exists");

}
else{

strcpy(file[n],filename);
n++;
}
printf("file %s created",filename);
}
void delete_file()
{
printf("Enter name of file to be deleted");
scanf("%s",&filename);

    flag=0;
for(i=0;i<n;i++)
{
    if(strcmp(filename,file[i])==0)
    {
flag=1;
for(j=i;j<n-1;j++)
{
    strcpy(file[j],file[j+1]);
    
}
printf("deleted");
n--;
    }
}
if(flag==0)
{
    printf("no such file");
}

}
void display_file()
{
    printf("FILES ARE\n");
    for(i=0;i<n;i++)
    {
        printf("\n %s",file[i]);
    }
}







void main()
{
    char directory[100];
    printf("enter name of directory");
    scanf("%s",&directory);
    int n;
    do{
        printf("\nchoose option \n1)CREATE \n2)DELETE \n3)DISPLAY \n4)EXIT");
        scanf("%d",&n);
        switch (n)
        {
        case 1:create_file();
        break;
        case 2:delete_file();
        break;
        case 3:display_file();
        break;
        }

 }while(n!=4);
}
