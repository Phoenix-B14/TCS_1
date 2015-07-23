#include <stdio.h>
int main()
{
  FILE *fp1,*fp2;
  fp1=fopen("file1.c","r");
  fp2=fopen("comment.txt","w+");
  getComment(fp1,fp2);
  fclose(fp1);
  fclose(fp2);
}
