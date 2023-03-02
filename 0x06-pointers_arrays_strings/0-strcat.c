#include 'main.h'

char *_strcat(char *dest, char *src)
{
  int len1=0,len2=0;
  char *temp=0;
  for(int i=0;dest[i]!='\0';i++)len1++;
  for(int i=0;src[i]!='\0';i++)len2++;
  temp = new char[len1+len2+100];
  strcpy(temp,dest);
  strcat(temp,src);
  dest = temp;
  return dest;
}
