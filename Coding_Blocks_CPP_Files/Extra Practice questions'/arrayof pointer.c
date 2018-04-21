#include<stdio.h>
#include<string.h>
int main()
{
    char *ptra[]={"hello","how","are","you"};
    char arrcpy[50][100];
    char *ptr="hello" ;
    //strcpy(ptr,ptra);
    //printf("adress is %x", ptr,*ptr);
  /*  for(int j=0;j<4;j++)
    {
        strcpy(arrcpy+j,*(ptra+j));
    }*/
    strcpy(arrcpy,*ptra);
   // arrcpy somehow change this arrcpy and edit in array of pointers .

  printf("address\t%u and\t value pointed is %s\t\n",arrcpy,arrcpy);
        int i;
        for(i=0;i<strlen(arrcpy);i++)
            {
                scanf("%c",&arrcpy[i]);

            }
          printf("address\t%u and\t value pointed is %s",arrcpy,arrcpy);
    return 0;

}
