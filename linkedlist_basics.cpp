#include<iostream>
using namespace std;

 class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int val){
            data=val;
            next=NULL;  
        }
        ~Node(){
          //  cout<<" node"<<data<<endl;
            if(next != NULL){
                delete next;
                next=NULL;
            }
        }
    };

class List{
    public:
        Node* head;
        Node* tail;
    
    public:
        List(){
            head=NULL;
            tail=NULL;
        }
        ~List(){
           // cout<<"list\n";
            if(head != NULL){
                delete head;
                head=NULL;
            }
        }
        void push_front(int val){
            // creating  a new node
            Node* newNode = new Node(val);//dynamic
            //now cheking linklist is empty or not
            if(head==NULL){
                head=tail=newNode;
            }
            else{
                newNode->next= head;
                head=newNode;
            }
        }
        void push_back(int val){
             // creating  a new node
             Node* newNode =new Node(val);//dynamic
            //now cheking linklist is empty or not
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
            for(int i =0; i<pos-1;i++){
                if(temp==NULL){
                    cout<<"position is invalid\n";
                    return;
                }
                temp=temp->next;
            }
            // temp is now at pos - 1 i.e. prev/left
            newNode->next=temp->next;
            temp->next=newNode;
        }
        void pop_front(){
            if(head==NULL){
                cout<<"Linklist is empty\n";
                return;
            }
            // Store the current head node in a temporary pointer
            Node* temp = head;

            // Move head to the next node
            head = head->next;

            // Disconnect the old head node from the list
            temp->next = NULL;

            // Delete the old head node to free memory
            delete temp;

        }
        void pop_back(){
            // Move to the node just before the last node
            Node* temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }

            // Remove the last node from the list
            temp->next = NULL;

            // Delete the old tail node
            delete tail;

            // Update tail to the new last node
            tail = temp;
        }
        int searchItr(int key){
            //itretive search 0(n)
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
               //recursive search
        int recursiveSearch(Node* temp, int key) {
            //base case
            if(temp == NULL) {
                return -1;
            }

            if(temp->data == key) {
                return 0;
            }

            int idx = recursiveSearch(temp->next, key);

            if(idx == -1) {
                return -1;
            }

            return idx + 1;
        }

        //recursive search wrapper
        int recursiveSearch(int key){
            return recursiveSearch(head, key);
        }

        //reversing a list(imp) 0(1)
        void reverse(){
            Node* curr=head;
            Node* prev=NULL;
            tail=head;

            while(curr!=NULL){
                Node*next=curr->next;
                curr->next=prev;
                //updations for next itr
                 prev=curr;
                 curr=next;
            }
            head =prev;
           
        }
        //remove nth from end imp
        int size(){
            int sz=0;
            Node*temp=head;
            while(temp!=NULL){
                temp=temp->next;
                sz++;
            }
            return sz;
        }

        void removeNth(int n){//0(n) or 0(1)
            int Size=size();
            Node* prev=head;
            for(int i=0;i<(Size-n);i++){
                prev=prev->next;
            }
            Node* toDel=prev->next;
            cout<<"going to delete: "<<toDel->data<<endl;
            prev->next=prev->next->next;
        }

        bool isCycle(Node* head){
            Node* slow=head;
            Node* fast=head;
            
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;

                if(slow==fast){
                    cout<<"cycle exist";
                    return true;
                }
            }cout<<"does not exist";
                return false;
        }

      

      
        void printList(){
            // Start from the first node
            Node* temp = head;

            // Go through each node one by one
            while (temp != NULL) {
    
            // Print the value of the current node
            cout << temp->data<<" -> ";

             // Move to the next node
            temp = temp->next;
}
             cout<<"NULL\n";
        }
       
    };
int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.reverse();
    
    
    // ll.printList();//1->2->3->4->5->null
    ll.isCycle(ll.head);
   
   
  return 0;
}