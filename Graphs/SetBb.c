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

void dfs(int arr[20][20],int n,int v)

{

  int w;

  static int visit[20]={0};

  visit[v]=1;

  printf("v%d\t",v+1);

  

  for(w=0;w<n;w++)

  {

    if(arr[v][w]==1 && visit[w]==0)

     dfs(arr,n,w);

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

  

  printf("\nDepth First  traversal is:\n");

  dfs(arr,n,0);

  

}
