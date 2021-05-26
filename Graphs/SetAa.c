#include<stdio.h>

#include<stdlib.h>

void acceptGraph(int arr[20][20],int n)

{

  int i,j;

  for(i=0;i<n;i++)

  {

    for(j=0;j<n;j++)

    {

      arr[i][j]=0;

      

      if(i!=j)

      {

        printf("\nis there edge between %d and %d (1:True,0:False):",i+1,j+1);

        scanf("%d",&arr[i][j]);

      }

    }

  }

}

void printGraph(int arr[20][20],int n)

{

  int i,j;

  for(i=0;i<n;i++)

  {

    for(j=0;j<n;j++)

      printf("%d\t",arr[i][j]);

   printf("\n");

    

  }

}

int main()

{

  int arr[20][20];

  int n;

  printf("\nEnter vertices:");

  scanf("%d",&n);

  acceptGraph(arr,n);

  printGraph(arr,n);

}
