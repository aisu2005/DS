#include<stdio.h>
#include<stdlib.h>
//set operations using bit strings
struct bit{unsigned char x:1;}l;
int uset[]={1,2,3,4,5,6,7,8,9},size=9;
void main()
{
void readset(struct bit[],int n);
void printset(struct bit[]);
void unionset(struct bit[],struct bit[],struct bit[]);
void interset(struct bit[],struct bit[],struct bit[]);
void difference(struct bit[],struct bit[],struct bit[]);
struct bit a[10]={0},b[10]={0},c[10]={0};
int n;
printf("Number of elements in set A:");
scanf("%d",&n);
readset(a,n);
printf("Number of elements in set B:");
scanf("%d",&n);
readset(b,n);
printf("Set A:");printset(a);
printf("Set B:");printset(b);
unionset(a,b,c);
printf("AUB=");printset(c);
interset(a,b,c);
printf("A intersect B="),printset(c);
difference(a,b,c);
printf("A-B="),printset(c);
}
//to read a set and store as bitstring
void readset(struct bit a[],int n)
{
int i,x,k;
printf("Enter %d elements:",n);
for(i=0;i<n;++i)
{
scanf("%d",&x);
for(k=0;k<size;++k)
if(uset[k]==x)//if member of universal set
{             //set 1 corresponding to x in a[]
a[k].x=1;
break;
}
}
}
//to print set from set representation
void printset(struct bit a[])
{
int k;
printf("{");
for(k=0;k<size;++k)
    if(a[k].x==1)
    printf("%d,",uset[k]);
printf("}\n");
return;
}
//to find union of 2 sets using bitstring
void unionset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x | b[k].x;
return;
}
//to find intersection of 2 sets
void interset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x & b[k].x;
return;
}
// to find the difference of 2 sets
void difference(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
if(a[k].x==1)
c[k].x=a[k].x ^ b[k].x;
return;
}































