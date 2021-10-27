#include<stdio.h>

struct list{
    int value;
    struct list *next;
    int node;
};

typedef struct list liststr;

int main(){

    int count,number,zero,nodes;
    //scanf("%d",&count);
    nodes=1;
    liststr *head = malloc(sizeof(liststr));


    scanf("%d",&number);

    head->value=number;
    head->next=NULL;
    head->node=nodes;

    liststr *current = head;
    zero=1;
    while(1){
        scanf("%d",&number);
        if(number<0){
            break;
        }
        nodes=nodes+1;
        current->next = malloc(sizeof(liststr));

        current = current->next;
        current->value = number;
        current->node=nodes;
        current->next = NULL;

    zero=zero+1;
    }
    current = head;

    printf("Integer:");
    while(current->next!=NULL){
        printf(" %d",current->value);
        current = current->next;
    }
    printf(" %d\n",current->value);
    printf("nodes: %d",current->node);

return 0;}
