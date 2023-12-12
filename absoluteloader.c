#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *f1,*f2,*f3;
    char add[100];
   char line[100];
    int i,j,hexadd;
    f1=fopen("abinput.txt","r");
    f2=fopen("aboutput.txt","w");
do{
fscanf(f1,"%s",line);
    if(line[0]=='T')
    {
        for(i=1,j=0;i<=6;i++,j++)
        {
add[j]=line[i];//address
        }
        add[j]='\0';
    



sscanf(add,"%x",&hexadd);//converts string to hex



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
------input------
HCOPY001000000032
T001000111420334830391020364203348303910203$
T0020000C298300230000282030302015$
E001000
*/
/*
------output--------
1000 	 14 
1001 	 20 
1002 	 33 
1003 	 48 
1004 	 30 
1005 	 39 
1006 	 10 
1007 	 20 
1008 	 36 
1009 	 42 
100a 	 03 
100b 	 34 
100c 	 83 
100d 	 03 
100e 	 91 
100f 	 02 
1010 	 03 
2000 	 29 
2001 	 83 
2002 	 00 
2003 	 23 
2004 	 00 
2005 	 00 
2006 	 28 
2007 	 20 
2008 	 30 
2009 	 30 
200a 	 20 
200b 	 15 



*/