#include<stdio.h>

#include<stdlib.h>

#include"btree.h"

int main () {

  int arr[100],

  n;

  printf ("Enter size of array : ");

  scanf ("%d", &n);

  insert2 (arr, n);

  printf("Before heap sort\n");

  display(arr, n);

  heapSort(arr, n);

  printf("After heap sort \n");

  display (arr, n);

  return 0;

}
