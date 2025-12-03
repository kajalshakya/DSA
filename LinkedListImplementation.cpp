#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next=NULL;
    }

    ~Node(){
        // cout<<"~node "<<data<<endl;
        if(next!=NULL){
            delete next;
            next=NULL;
        }

    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head=NULL;
        tail=NULL;
    }

    ~List(){
        // cout<<"~list"<<endl;
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }

    void push_front(int val){
      Node* newNode=new Node(val);// dynamic
      
      if(head==NULL){
        head=tail=newNode;
      }
      else{
        newNode->next=head;
        head=newNode;
      }
    }

    void push_back(int val){
        Node* newNode=new Node(val);//dynamic
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void insert(int val,int pos){
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"position is invalid"<<endl;
                return;
            }
            temp=temp->next;
        }

        //temp is now at position-1 i.e. prev/left
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;

    }

    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
    }

    void pop_back(){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;//temp is tail's previous
    }

    int searchIte(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;

    }

};
int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();//1->2->3->4->5->null 

    // // ll.push_back(4);
    // // ll.push_back(5);
    // // ll.printList();//1->2->3->4->->5-> null 

    // // ll.insert(100,2);
    // // ll.printList();//1->2->100->3->4->->5-> null 

    // // ll.pop_front();
    // // ll.printList();//1->2->null 

    // ll.pop_back();
    // ll.printList();//1->2->null 

    cout<<ll.searchIte(7)<<endl;
    
    return 0;

}