#include <iostream>
#include <string>

//User Input to form a Student Profile🫠🫠
using namespace std;

int main(){
    string name;
    cout << "Enter your name:" << endl;
    cin >> name;
    
    int age;
    cout << "Gimme age:" << endl;
    cin >> age;
    
    int semester;
    cout << "Enter your semester:" << endl;
    cin >> semester;
    
    double cgpa;
    cout << "Enter your CGPA:" << endl;
    cin >> cgpa;
    
    char grade;
    cout << "Enter your grade:" << endl;
    cin >> grade;
    
    cout << "----Student Profile----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Semester: " << semester << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}