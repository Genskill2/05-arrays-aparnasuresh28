
/* Enter your solutions in this file */
#include <stdio.h>
int max(int[], int);
int min(int[], int);
float average(int[], int);
int mode(int [], int);
int factors(int, int []);

int max( int arr[], int n)
{int i,max;

 for (int i = 1; i < n; ++i) 
 {
    if (arr[0] < arr[i])
     {
      arr[0] = arr[i];}}
      max=arr[0];
      return max;

}

int min(int a[], int k)
{int j,min;
for(j=1;j<k;++j)
{
if(a[0]>a[j])
{a[0]=a[j];}
}
min=a[0];
return min;}

float average( int c[], int l)
{int i,s=0;
float avg=0;
for(i=0;i<l;++i)
{s+=c[i];
}
avg=s/l;
return avg;
}



int mode(int a[],int n) {
   int maxval = 0, maxct = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxct) {
         maxct = count;
         maxval = a[i];
      }
   }

   return maxval;
}


int factors( int n, int a[])
{

int i=2,j=0,count=0;
while(n!=1)
  {
     if(n%i==0)
       {
         while(n%i==0)
           {count++;
           a[j]=i;
           j++;
           
            n=n/i;
            }
        }
        i++;
        }
        return count;
 }
        
