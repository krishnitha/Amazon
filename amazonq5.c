#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int i=0;
    int j=n-1;
    int res_l=0,res_r=0;
    int diff=1000000;
    while(i<j)
    {
         if (fabs(arr[i] + arr[j] - x) < diff)
            {
               res_l = i;
               res_r = j;
               diff = fabs(arr[i] + arr[j] - x);
            }
            if (arr[i] + arr[j] > x)
               j--;
            else 
               i++;
    }
printf(" The closest pair is %d and %d",arr[res_l],arr[res_r]);
    return 0;
}