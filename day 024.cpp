#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(void){
    Node *head,*newNode,*ptr,*prev;

    head = NULL;
    int tempNum;
    char c;
    scanf("%d%c",&tempNum,&c);

    do{
        newNode= new Node();
        newNode->data=tempNum;

        if(head==NULL){
            head=newNode;
            head->next = NULL;
            ptr = head;
        }

        else{
            ptr->next=newNode;
            ptr=newNode;
            ptr->next=NULL;
        }

        if(c=='\n'){
            break;
        }
    }while(scanf("%d%c",&tempNum,&c));

    ptr=head;
    newNode = new Node();
    prev = new Node();
    prev = NULL;


    //1->2->3
    while(ptr!=NULL){
        newNode = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = newNode;
    }

    head = prev;
    ptr = head;


    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }






}