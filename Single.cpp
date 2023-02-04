
#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;//pointer which will point to the object of node type only
        Node(){//constructor
            data=0;
            next=NULL;
        }
        Node(int d){//parameterised constructor
            data=d;
        }
};
class SinglLinkedList{
    public:
        Node* head;
        SinglLinkedList(){
            head=NULL;//at the very beginning
        }
        SinglLinkedList(Node* n){//pass by address
            head=n;
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
    void append(Node* n){
        if (head==NULL){
            head=n;
            cout<<"node appended"<<endl;
        }
        else{
            Node* temp=head;
             while (temp->next!=NULL){
                 temp=temp->next;
             }
             temp->next=n;
             cout<<"node appended"<<endl;
        }
    }
    void addbeg(Node* n){
        n->next=head;
        head=n;
    }
    int addpos(Node *n,int k){
        if(exists(k)==NULL){
            cout<<"No node exists"<<endl; 
        }
        Node* temp=head;
        while (temp->data!=k){
                 temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
}
  void insertNodeAfter(int k, Node * n) {
    Node * ptr = exists(k);
    {
        n -> next = ptr -> next;
        ptr -> next = n;
        cout << "Node Inserted" << endl;
      }
    }
    
    void print(){
        Node* temp=head;
        
        while(temp->next!=NULL){
            cout<< (temp->data) <<" --> ";
            temp=temp->next;
        }
    }
  };

int main() {

  SinglLinkedList s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> data1;
      n1 -> data = data1;
      s.append(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;
      
    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> data1;
      n1 -> data = data1;

      s.insertNodeAfter(k1, n1);
      break;
    case 6:
        cout<<"Printing the values of the linked list";
        s.print();
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
