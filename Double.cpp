
#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(){
            data=0;
            next=NULL;
            prev=NULL;
        }
        Node(int d){
            data=d;
        }
};
class DoublyLinkedList{
    public:
        Node* head;
        Node* tail;
        DoublyLinkedList(){
            head=NULL;
            tail=NULL;
        }
    Node* exists(int k){
        Node* temp=NULL;
        Node* al=NULL;
        if(head==NULL){
            cout<<"Empty list"<<endl;
        }
        else{
            while (temp->next!=NULL){
                if(temp->data==k){
                    cout<<"Found"<<endl;
                    al=temp;
                    break;
                }
                temp=temp->next;
            }
        }
            return al;
        
    }
    void append(int n1){
        Node* n=new Node(n1);
        
        if (head==NULL){
            head=n;
            cout<<"node appended"<<"  "<<n1<<endl;
            tail=head;
        }
        else{
            tail->next=n;
            n->prev=tail;
            n->next=head;
            head->prev=n;
            tail=n;
            cout<<"node appended"<<"  "<<n1<<endl;
        }
    }
    void addbeg(int n1){
        
        Node* n=new Node(n1);
        n->next=head;
        head->prev=n;
        tail->next=n;
        n->prev=tail;
        head=n;
    }
    void delbeg(){
        Node* temp=head->next;
        tail->next=head->next;
        head->next->prev=tail;
        free(head);
        head=temp;
    }
    void delend(){
        Node* temp=tail->prev;
        head->prev=tail->prev;
        tail->prev->next=head;
        free(tail);
        tail=temp;
    }
    void delnext(int n1){
        Node* temp=head;
        while(temp->data!=n1){
            temp=temp->next;
        }
        temp->next->next->prev=temp;
        temp->next=temp->next->next;
    }
    void print(){
        Node* temp=head;
        
        while(temp->next!=head){
            cout<< (temp->data) <<" --> ";
            temp=temp->next;
        }
        cout<<temp->data;
    }
  };

int main() {

DoublyLinkedList s;
s.append(1);
cout<<"dome";
s.append(3);
s.append(4);
s.append(2);
s.append(10);
s.append(21);
s.append(19);
s.delbeg();
s.delend();
s.delnext(2);
s.print();
  return 0;
}
