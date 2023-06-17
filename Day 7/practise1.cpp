//reversing the linked list 

#include<iostream>
using namespace std;

class Struct {
    public:
    int data;
    Struct *next;
};

void Traverse(Struct *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}
Struct* reverse(Struct *head){
    Struct *newHead = new Struct();
    newHead=NULL;
    while(head!=NULL){
newHead->next = head->next;
head->next=newHead;
newHead=head;
head=head->next;
    }
    return newHead;
}
int main()
{
Struct *head = new Struct ();
Struct *second = new Struct();
Struct *third = new Struct();
Struct *fourth = new Struct();
head->data=20;
head->next = second;
second->data = 30;
second->next= third;

third->data = 40;
third->next = fourth;

fourth->data = 50;
fourth->next = NULL;
Traverse (head);
cout<<"after reversing"<<endl;
reverse(head);
Traverse(head);
    return 0;
}
oreversing hte  