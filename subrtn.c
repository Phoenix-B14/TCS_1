#include<stdio.h>
#include<stdlib.h>
int getComment(FILE *pFp1,FILE *pFp2)
{
  int i,flg=0;
  size_t n=1000;
    char *lne;
  lne=(char *)malloc(sizeof(char)*n);
  while(!feof(pFp1))
    {
      getline(&lne,&n,pFp1);
      for(i=0;lne[i]!='\0';i++)
	{
	  if(lne[i]=='/' && flg==0)
	    {
	      if(lne[i+1]=='/')
		fprintf(pFp2,"%s",lne);
	      else if(lne[i+1]=='*')
	       	  flg=1;
	    }
	  else if(lne[i]=='*' && flg==1)
	    {
	      if(lne[i+1]=='/')
		{
		  flg=0;
		  fprintf(pFp2,"%s",lne);
		}
	    }
	}
      if(flg==1)
	fprintf(pFp2,"%s",lne);      
    }
}
