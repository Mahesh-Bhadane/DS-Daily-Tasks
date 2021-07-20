#include<stdio.h>

int rec(int i , int j ,int k , int n,int a[])
{
  int sum;
  for( i = 0 ; i<j ;)
  {
      sum = a[i] + a[j];
      if( sum > k)
      {
        j--;
      }
      else if( sum < k)
      {
        i++;
      }
      else if( sum == k )
      {
        printf("equal to sum of array[%d]  = %d and array[%d] = %d",i,a[i],j,a[j]);
        return 1;
      }
  }
  return 0;
  }
  
  
int main()
  {
  int n ;
  printf("Enter Number of Arrays = ");
  scanf("%d",&n);
  int a[n],i,j,k,x;
  printf("Enter the Number to search in addition of Two Number :");
  scanf("%d",&x);
  printf("Enter The Value of Array \n");
  for( i = 0 ; i <=n-1;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&a[i]);
  }
  
  for( i = 0 ; i <=n-1;i++)
  {
     for( j = 0 ; j <=n-i-1;j++)
     {
     if( a[j]>a[j+1])
     {
       
       a[j] = a[j]^a[j+1];
       a[j+1] = a[j]^a[j+1];
       a[j] = a[j]^a[j+1];
    }
    }
  }
  k = x ;
  j = n-1;
  rec(i,j,k,n,a);
  return 0 ;
}
