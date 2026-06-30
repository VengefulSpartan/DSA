#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(){
        data=0;
        next=nullptr;
    }
    Node(int x){
        data=x;
        next=nullptr;
    }
    Node(int x, Node* val){
        data=x;
        next=val;
    }
};

class LinkedList{
    private:
        Node* head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void InsertAtEnd(int val){
        Node* dabba= new Node(val);
        //if the LL is empty
        if(head==nullptr){
            head=dabba;
            return;
        };
        //if LL exists the we have to "traverse"
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        };
        temp->next=dabba;
    }
    void display(){
        Node* temp=head;
        while(temp->next!=nullptr){
            cout <<"["<<temp->data<<" , "<<temp->next<<"] -> ";
            temp=temp->next;
        };
        cout<<"["+to_string(temp->data)+" ,null ]";
    }
};

int main(){
    LinkedList mylist;
    mylist.InsertAtEnd(1);
    mylist.InsertAtEnd(2);
    mylist.InsertAtEnd(3);
    mylist.InsertAtEnd(4);
    mylist.InsertAtEnd(5);
    mylist.display();
}
