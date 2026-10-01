#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    int position;
    cout << "Enter position to enter a node (value is hardcoded for now, peasent): ";
    cin >> position;
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* newNode = new Node();
    Node* insertNode = new Node();
    Node* tail = new Node();

    head->data = 25;
    head->next = second;

    second->data = 50;
    second->next = third;

    third->data = 75;
    third->next = tail;

    newNode->data = 10;
    newNode->next = head;
    head = newNode;
    
    insertNode->data = 60;

    tail->data = 100;
    tail->next = nullptr;
    
    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }

    curr = head;
    cout << "Normal List" << endl;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }

    cout << endl;
    cout << "List after Inserting at position.  " << endl;
    
    curr = head;

    //Position Validation

    if(position < 1){
        cout << "My brother in pointers, position " << position << " does not exist. 💔 I will add the value whereever I want for now, until you give me the correct position." << endl;
    }

    else if(position == 1){
        //Forgot, great💔
        //Just one or two lines here....
        //Got it!!! insertNode will come here, then make insert node remember where thr previous node is pointing, then insert the node and make it point towards where the previous one was pointing.
        
        insertNode->next = head;
        head = insertNode;

    }
    else{
        for(int i = 1; i < position - 1 && curr != nullptr; i++){
            curr = curr->next;
        }
        
        if(curr != nullptr){
            insertNode->next = curr->next;
            curr->next = insertNode;
        }
    }

    curr = head;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
}