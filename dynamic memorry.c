#include<stdio.h>
#include<stdlib.h>
void reorder(int n,int *x);
int main()
{
    int i,n,*x;
    printf("how many number will be attend::");
    scanf("%d",&n);
    puts("");
    x=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("i=%d  x= ",i+1);
        scanf("%d",x+i);

    }

    reorder(n,x);
      for(i=0;i<n;i++)
    {
        printf("i=%d  x=%d\n",i+1,*(x+i));

    }

}
void reorder(int n,int *x)
{
    int i, item, temp;
    for(item =0;item<n-1;item++)
    {
        for(i=item+1;i<n;i++)
        {
            if(*(x+i)<*(x+item))
            {
                temp=*(x+item);
                *(x+item)=*(x+i);
                *(x+i)=temp;
            }
        }
    }
}
