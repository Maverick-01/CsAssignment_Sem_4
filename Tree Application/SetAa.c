#include <stdio.h>

#include <stdlib.h>

#include "btree.h"

int main() {

  int choice;

  while(1) {

    printf("\n1.Insert\n2.Display\n3.Level Order\n4.Exit\n\nEnter your choice\n");

    scanf("%d", &choice);

    switch(choice) {

      case 1:

      insert();

      break;

      case 2:

      inOrder (root);

      break;

      case 3:

      levelOrder (root);

      break;

      case 4:

      exit (0);

      break;

      default:

      printf("\n Invalid Location n");

      break;

    }

  }

}
  
