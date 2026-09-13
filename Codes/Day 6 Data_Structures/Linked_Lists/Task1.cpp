#include <iostream>
using namespace std;
//Struct Node
struct Node{
    int data;
    Node* next;
};

int main(){
    //counter
    int count = 0;
    //Head Node
    Node* head = new Node();
    head->data = 25;

    //Second Node
    Node* second = new Node();
    second->data = 50;
    head->next = second;

    //third Node

    Node* third = new Node();
    third->data = 75;
    third->next = nullptr;
    second->next = third;
    
    //Well.........shit
    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    //cout << "\nNumber of Nodes: " << count << endl;

    //Insertion
    Node* newNode = new Node();
    newNode->data = 10;
    newNode->next = head;
    head = newNode;
    //Node* temp = head;
    /*while(temp != nullptr){
        cout << temp->data << " ";
        count++;
        temp = temp->next;
    }*/
    //head->next = nullptr;
    //cout << "\nLet's see...: " << head->data << endl; 
    //10 should come....but how?
    //Could use newNode->data, but that defeats the purpose of linking from head.

    //insertion at end
    Node* tail = new Node();
    
    tail->data = 100;
    tail->next = nullptr;
    temp->next = tail;

    cout << "Please work🫠: " << tail->data << endl;

    //Now to print full list...
    //How but?
    Node* curr = new Node();
    curr = head;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
    return 0;
}