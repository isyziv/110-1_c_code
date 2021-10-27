#include<stdio.h>

struct list{
    int value;
    struct list *next;
};

typedef struct list liststr;

int main(){

    int count,number,zero;
    //scanf("%d",&count);

    liststr *head = malloc(sizeof(liststr));


    scanf("%d",&number);

    head->value=number;
    head->next=NULL;

    liststr *current = head;
    zero=1;
    while(1){
        scanf("%d",&number);
        if(number<0){
            break;
        }
         current->next = malloc(sizeof(liststr));

        current = current->next;
        current->value = number;
        current->next = NULL;
    zero=zero+1;
    }
    current = head;

    printf("Integer:");
    while(current->next!=NULL){
        printf(" %d",current->value);
        current = current->next;
    }
    printf(" %d",current->value);

return 0;}

