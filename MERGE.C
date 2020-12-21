#include<stdio.h>
#include<conio.h>
void main()
{
int a1[100],a2[100],a3[100],m,n,i,j,k=0;
clrscr();
printf("enter the limit of array a\n ");
scanf("%d",&m);
printf("Enter the limit of array b");
scanf("%d",&n);
printf("Enter the sorted elements in array a1\n");
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("Enter the sorted elements of array a2");
for(i=0;i<n;i++)
{
scanf("%d",&a2[i]);
}
i=0;
j=0;
while(i<m &&j<n)
{
if(a1[i]<a2[j])
{
a3[k]=a1[i];
i++;
}
else
{
a3[k]=a2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
a3[k]=a2[k];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
a3[k]=a1[i];
i++;
k++;
}
}
printf("After merging\n");
for(i=0;i<m+n;i++)
{
printf("%d",a3[i]);
}
getch();
}
