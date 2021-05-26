#include <stdio.h>

#include <stdlib.h>

#include "btree.h"

int main() {

  int choice,n;

  while(1) {

    printf("\n1.Insert\n2.InOrder Traversal\n3.PreOrder Traversal\n4.PostOrder Traversal\n5.Search\n6.exit\n");

    scanf("%d", &choice);

    switch(choice) {

      case 1:

      insert();

      break;

      case 2:

      inOrder (root);

      break;

      case 3:

      preOrder (root);

      break;

      case 4:

      postOrder (root);

      break;

      case 5:

      if(root == NULL)

      printf("\n Tree is empty \n");

      else

      {

        printf("\n Enter data to search \n");

        scanf("%d", &n);

        if(searching(root, n))

        printf("\n Data is not present in tree\n");

        else

        printf("\n Data is present\n");

      }

      break;

      case 6:

      exit(0);

      default:

      printf("\n Invalid Location n");

      break;

    }

  }

}
