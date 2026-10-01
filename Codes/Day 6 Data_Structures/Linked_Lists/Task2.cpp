    //Linked List Continues
    #include <iostream>
    using namespace std;

    struct Node{
        int data;
        Node* next;
    };

    int main(){
        Node* head = new Node();
        Node* second = new Node();
        Node* third = new Node();
        Node* newNode = new Node();
        Node* tail = new Node();
        
        head->data = 25;
        head->next = second;
        
        second->data = 50;
        second->next = third;
        
        third->data = 75;
        third->next = nullptr;

        newNode->data = 10;
        newNode->next = head;
        head = newNode;

        tail->data = 100;
        tail->next = nullptr;
        
        Node* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }

        curr->next = tail;

    //Insert at any position coming soon💔
        int position = 1;
        
        Node* insertNode = new Node();
        insertNode->data = 5;

        curr = head;

        if(position == 1){
            insertNode->next = head;
            head = insertNode;
        }
        else{
            for(int i = 1; i < position - 1; i++){
                
                curr = curr->next;
            }
            insertNode->next = curr->next;
            curr->next = insertNode;
        }
        

        curr = head;

        while(curr != nullptr){
            cout << curr->data << " ";
            curr = curr->next;
        }

        return 0;
    }