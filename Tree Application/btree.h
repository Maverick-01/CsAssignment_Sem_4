typedef struct node {

  int data;

  struct node *left,

  *right;

}Node;

typedef struct Queue {

  Node *item[50];

  int front,rear;

}Queue;

Node *root = NULL, *temp = NULL, *root2 = NULL;

static int count = 0;

void create() {

  int data;

  scanf("%d", &data);

  temp = (Node *)malloc(sizeof(Node));

  temp->data = data;

  temp->left = temp->right = NULL;

}

void search(Node *t) {

  if((temp->data >= t->data) && (t->right != NULL))

  search(t->right);

  else if((temp->data >= t->data) && (t->right == NULL))

  t->right = temp;

  else if((temp->data < t->data) && (t->left != NULL))

  search(t->left);

  else if((temp->data < t->data) && (t->left == NULL))

  t->left = temp;

}

void insert() {

  int n,

  i;

  printf("\nEnter how many elements. \n");

  scanf("%d", &n);

  printf("\n Enter data of node\n");

  for(i = 0; i < n; i++) {

    create();

    if(root == NULL)

    root = temp;

    else

    search(root);

  }

}

void inOrder(Node *t) {

  if(root == NULL) {

    printf("\n No element in the tree\n");

  }

  if(t != NULL) {

    inOrder(t->left);

    printf(" %d \t", t->data);

    inOrder(t->right);

  }

}

void preOrder(Node *t) {

  if(root == NULL) {

    printf("\n No element in the tree\n");

  }

  if(t != NULL) {

    printf(" %d \t", t->data);

    preOrder(t->left);

    preOrder(t->right);

  }

}

void postOrder(Node *t) {

  if(root == NULL) {

    printf("\n No element in the tree\n");

  }

  if(t != NULL) {

    postOrder(t->left);

    postOrder(t->right);

    printf(" %d \t", t->data);

  }

}

int searching(Node *t, int n) {

  if(t != NULL) {

    if(t->data == n)

    return 0;

    else if(t->data > n)

    searching(t->left, n);

    else if(t->data <= n)

    searching(t->right, n);

  }

  return 1;

}

int nodeCount(Node *t) {

  if(root == NULL) {

    printf("\n No element in the tree\n");

    return 0;

  }

  if(t != NULL) {

    nodeCount(t->left);

    count++;

    nodeCount(t->right);

  }

  return count;

}

int countLeafNode(Node *t) {

  if(root == NULL) {

    printf("\n No element in the tree\n");

    return 0;

  }

  if(t != NULL) {

    countLeafNode(t->left);

    countLeafNode(t->right);

    if(t->right == NULL && t->left == NULL)

    count++;

  }

  return count;

}

int flag = 0;

void insert1(int f) {

  int n,

  i;

  printf("\nEnter how many elements \n");

  scanf("%d", &n);

  if(f == 1) {

    for(i = 0; i < n; i++) {

      create();

      if(root == NULL)

      root = temp;

      else

      search(root);

    }

  }

  else

  {

    for(i = 0; i < n; i++) {

      create();

      if(root2 == NULL)

      root2 = temp;

      else

      search(root2);

    }

  }

}

Node *copyTree(Node *t) {

  struct node *copy = NULL;

  if(t != NULL) {

    copy = (Node *)malloc(sizeof(Node));

    copy->left = NULL,

    copy->right = NULL;

    copy->data = t->data;

    copy->left = copyTree(t->left);

    copy->right = copyTree(t->right);

  }

  return copy;

}

int compare(Node *a, Node *b) {

  if(a != NULL && b != NULL) {

    if(a->data != b->data) {

      flag = 0;

      return 0;

    }

    compare(a->left, b->left);

    compare(a->right, b->right);

  }

  return -1;

}

int init (Queue *queue) {

  return queue->front= queue->rear=-1;

}

int isEmpty (Queue *queue) {

  return queue->front == queue->rear;

}

void enQueue (Queue *queue,Node *node) {

  queue->item [++queue->rear] = node;

}

Node *removes(Queue *queue) {

  return queue->item [++queue->front];

}

void levelOrder (Node *tree) {

  int level =0,count =0;

  Queue *queue;

  init (queue);

  enQueue (queue,tree);

  enQueue (queue,NULL);

  printf ("\nLevel %d Total 1 Node ",level);

  printf ("\nLevel %d -->",level);

  while (!isEmpty (queue)) {

    temp = removes (queue);

    if (temp==NULL){

      if (!isEmpty (queue)) {

        level++;

        enQueue (queue,NULL);

        printf ("\nLevel %d Total Node %d ",level,count);

        printf ("\nLevel %d -->",level);

        count = 0;

      }

    }

    else {

      printf ("\n%d\t",temp->data);

      if (temp->left!=NULL) {

        enQueue (queue,temp->left);

        count++;

      }

      if (temp->right!=NULL){

        enQueue (queue,temp->right);

        count++;

      }

    }

  }

  printf ("\nLevel of Tree is %d \n",level+1);

}

void generate(int *arr,int n){

  for (int i=0;i<n;i++)

  arr[i] = rand ()%100;

}

void insert2 (int *arr,int n){

  generate (arr,n);

}

void display (int *arr,int n){

  for (int i=0;i<n;i++)

  printf ("%d \n",arr [i]);

}

void hippy (int *arr,int n,int i){

  int max = i,temp,left=2*i+1,right=2*i+2;

  while (left < n && arr [left]> arr [max])

  max = left;

  

  while (right < n && arr [right] > arr [max])

  max = right;

  

  if (max != i) {

    temp = arr [i];

    arr [i] = arr [max];

    arr [max] = temp;

    hippy (arr,n,max);

  }

}

void heapSort (int *arr,int n){

  int i,temp;

  for (i=n/2-1;i>=0;i--)

  hippy (arr,n,i);

  for(i=n-1;i>=0;i--){

    temp=arr[0];

    arr[0]=arr[i];

    arr[i]=temp;

    hippy(arr,i,0);

  }

}
