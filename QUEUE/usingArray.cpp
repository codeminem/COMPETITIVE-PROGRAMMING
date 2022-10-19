//जय हनुमान जी!
#include<iostream>
#include<queue>
using namespace std;

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                DONT CHANGE ANYTHING ABOVE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
const int mod= 1e9+7;
//move rear to the next position and insert the element 

struct Queue
{
  int size;
  int front;
  int rear;
  int *Q;
};

void create(struct Queue*q,int size){
  q->size=size;
  q->front=q->rear=-1;
  q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int x){
  if(q->rear==q->size-1)
  {
    cout<<"q is filled";
  }
  else{
    q->rear++;
    q->Q[q->rear]=x;
  }
}
int dequeue(struct Queue *q){
  int x=-1;
  if(q->front==q->rear){
    cout<<"queue is empty";
  }
  else{
    q->front++;
    x=q->Q[q->front];
  }
  return x;
}

void Display(struct Queue q){
  for(int i=q.front+1;i<=q.rear;i++){
    cout<<q.Q[i];
  }
}

signed main()
{ 
  struct Queue q;
  create(&q,5);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);

  Display(q);

  return 0;
}
//2nd way


