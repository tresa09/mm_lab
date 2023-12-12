#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    
    FILE *f1,*f2,*f3;
    char add[100];
   char line[100];
    int i,j,hexadd,start;
    printf("enter new starting address");
    scanf("%x",&start);
    f1=fopen("reinput.txt","r");
    f2=fopen("reoutput.txt","w");
do{
fscanf(f1,"%s",line);
    if(line[0]=='T')
    {
        for(i=1,j=0;i<=6;i++,j++)
        {
add[j]=line[i];
        }
        add[j]='\0';
    

sscanf(add,"%x",&hexadd);
printf("---hadd %x----",hexadd);

hexadd=hexadd+start;//only change from absolute loader
printf("\n update---hadd %x----",hexadd);

    i=9;
    while(line[i]!='$')
    {
        fprintf(f2,"%x \t %c%c \n",hexadd,line[i],line[i+1]);
        hexadd+=1;
        i=i+2;
    }

    }

}while(!feof(f1));
fclose(f1);
fclose(f2);


}
/*
-----input-------
HCOPY000000000232
T000000111420334830391020364203348303910203$
T0020000C298300230000282030302015$
E001000

*/

/*
------output----
3000 	 14 
3001 	 20 
3002 	 33 
3003 	 48 
3004 	 30 
3005 	 39 
3006 	 10 
3007 	 20 
3008 	 36 
3009 	 42 
300a 	 03 
300b 	 34 
300c 	 83 
300d 	 03 
300e 	 91 
300f 	 02 
3010 	 03 
5000 	 29 
5001 	 83 
5002 	 00 
5003 	 23 
5004 	 00 
5005 	 00 
5006 	 28 
5007 	 20 
5008 	 30 
5009 	 30 
500a 	 20 
500b 	 15 

*/