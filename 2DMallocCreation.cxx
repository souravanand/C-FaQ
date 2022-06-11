    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {

        int r=4,c=6;
        int ** arr=(int**)malloc(r*sizeof(int*));

        for(int i=0;i<r;i++)
        {
            arr[i]=(int*)malloc(c*sizeof(int));

        }

       int count=1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=count++;
            }
     
     
        }

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                    printf("%d ",arr[i][j]);
            }
            printf("\n");
     
     
        }
    }
