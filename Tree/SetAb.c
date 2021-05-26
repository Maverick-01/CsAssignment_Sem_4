
#include<stdio.h>

#include<stdlib.h>

#include"btree.h"

int main() {

  int choice;

  while(1) {

    printf("\n1.Insert \n2.Display\n3.Total nodes \n4.Total leaf nodes\n5.Exit\n");

    printf("\n Enter your choice\n");

    scanf("%d", &choice);

    switch(choice) {

      

      case 1:

      insert();

      break;

      

      case 2:

      inOrder(root);

      break;

      

      case 3:

      count = 0;

      printf("\n %d Nodes present in Tree\n", nodeCount(root));

      break;

      

      case 4:

      count = 0;

      printf("\n %d Leaf nodes present in Tree\n", countLeafNode(root));

      break;

      

      case 5:

      exit(0);

      

      default:

      printf("\n Invalid Location n");

      break;

    }

  }

}
