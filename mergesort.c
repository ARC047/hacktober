#include<stdio.h>
void main()
{
  int a[25],b[25],c[50],ano,bno,index,index2;
  printf("Enter the number of elements in the first array:");
  scanf("%d",&ano);
  for(index=0;index<ano;index++)
    scanf("%d",&a[index]);
  printf("Enter the no. of elements in the second array:");
  scanf("%d",&bno);
  for(index=0;index<bno;index++)
    scanf("%d",&b[index]);
  for(index=0,index2=0;index<ano&&index2<bno;)
  {
    if(a[index]<b[index2])
    {
      c[index+index2]=a[index];
      index=index++;
    }
    else
    {
      c[index+index2]=b[index2];
      index2=index2++;
    }
  }
  for(;index<ano;index++)
    c[index+index2]=a[index];
  for(;index2<bno;index2++)
    c[index+index2]=b[index2];
  printf("The newly merged array is:\n");
  for(int q=0;q<index+index2;q++)
    printf("%d\t",c[q]);
}
