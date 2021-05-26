#include<stdio.h>

#include<stdlib.h>

#include"btree.h"

int main() {

  int choice;

  while(1) {

    printf("\n1.Insert element in tree A\n2.display Tree A\n3.Copy of Tree A in B\n4.Insert element in tree B\n5.display Tree B\n6.Comparing of tree A and B\n7.Exit\n");

    printf("\n Enter your choice\n");

    scanf("%d", &choice);

    switch(choice) {

      

      case 1:

      insert1(1);

      break;

      

      case 2:

      inOrder(root);

      break;

      

      case 3:

      if(root == NULL)

      printf("\n Tree is empty \n");

      else

      {

        root2 = copyTree(root);

        inOrder(root2);

      }

      break;

      

      case 4:

      insert1(2);

      break;

      

      case 5:

      inOrder(root2);

      break;

      

      case 6:

      if(root == NULL || root2 == NULL)

      printf("\n Tree is empty\n");

      else

      compare(root, root2);

      if(flag == 0)

      printf("\n Both trees are  equal \n");

      else

      printf("\n Both trees are not equal \n");

      break;

      

      case 7:

      exit(0);

      

      default:

      printf("\n Invalid Location n");

      break;

    }

  }

}
  
