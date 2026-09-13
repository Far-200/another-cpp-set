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
    while(temp != nullptr){
        cout << temp->data << " ";
        count++;
        temp = temp->next;
    }

    cout << "\nNumber of Nodes: " << count << endl;
    return 0;
}