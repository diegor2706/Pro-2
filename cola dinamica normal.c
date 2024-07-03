// IMPLEMENTACIóN COLA DINÁMICA
# define QNULL NULL
# typedef int tItemQ;
# typedef struct tNodeQ *tPosQ;
struct tNodeQ {
                tItemQ item;
                tPosQ rear;
} tQueue;

void createEmptyQueue (tQueue *Q){ 
    Q -> front = QNULL;
    Q -> rear = QNULL;
}

bool isEmptyQueue (tQueue *Q) {
    return Q.front == QNULL;
}

tItem front (tQueue Q){
    return Q.front -> item;
}

bool createNode (tPosQ *p){
   *p = malloc (sizeof(struct tNodeQ));
   return ((*p) != QNULL);
}

void dequeue (tPosQ *Q){
    tPosQ p;

    p = Q -> front;
    Q -> front = p -> next;

    if (Q -> front == QNULL){
          Q -> rear = QNULL;
      }
    free (p);
}

bool enqueue (tItemQ d, tQueue *Q){
    tPosQ p;

    if(!createNode(&p){
        return false;
    }
    else {
          p -> item = d;
          p -> next = QNULL;

          if (Q-> front == QNULL){
                Q -> front = p;
          }
          else  {
                 Q -> rear -> next = p;
                 return true;
                }
      }
}
