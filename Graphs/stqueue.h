typedef struct Queue

{

  int front;

  int rear;

  int Size;

  int *array;

}Queue;

Queue *newQueue (int size) {

  Queue *queue = (Queue *)malloc (sizeof (Queue));

  queue->front = -1;

  queue->rear = -1;

  queue->Size = size;

  queue->array = (int *) malloc (queue->Size*sizeof (int));

  return queue;

}

int isEmpty (Queue *queue) {

  return queue->front == queue->rear;

}

int isFull (Queue *queue) {

  return queue->rear == queue->Size-1;

}

int addQueue (Queue *queue, int data) {

  if (isFull (queue))

  printf ("Queue is Full.\n");

  else

  queue->array[++queue->rear] = data;

  return data;

}

int peekQueue (Queue *queue) {

  if (isEmpty (queue))

  printf ("Queue is empty.\n");

  else

  return queue->array [queue->front+1];

  return -1;

}

int deQueue (Queue *queue) {

  if (isEmpty (queue))

  printf ("Queue is empty.\n");

  else

  return queue->array [++queue->front];

  return -1;

}

void display (Queue *queue) {

  int i;

  for (i = queue->front+1; i <= queue->rear; i++)

  printf ("%d-->", queue->array[i]);

  printf ("\n");

}
