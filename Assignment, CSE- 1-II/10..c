#include<stdio.h>
int main()
{
    int row,col,largest1,largest2;
    printf("Enter the matrix row & column: ");
    scanf("%d %d",&row,&col);

    int a[row][col],i,j;
    for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            printf("Matrix row & column[%d,%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
     //   printf("\n");
    }
    largest1=a[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(largest1<a[i][j])
                largest1=a[i][j];
        }
    }
    largest2=a[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           if(largest1>a[i][j]){
            if(largest2<a[i][j])
                largest2=a[i][j];
           }
        }
    }
    printf("The second largest element in a matrix is %d\n",largest2);
    return 0;
}
