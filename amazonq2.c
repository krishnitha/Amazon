#include<stdio.h>
int main()
{
    int n;
    printf("Enter the sixe of the matrix");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[0][i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // }
    int same;
    for(int i=0;i<n;i++)
    {
        same=-1;
        for(int l=1;l<n;l++){
        for(int j=0;j<n;j++)
        {
            if(a[0][i]==a[l][j]){
                same=a[0][i];
                break;
            }
            else
            {
                same=-1;
            }


        }
        if(same==-1)
            break;
        }
        arr[i]=same;
        // printf("%d\n",arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
            printf("%d ",arr[i]);
        else
            count++;
    }
    if(count==n)
    {
        printf("No common elements");
    }

    return 0;
}