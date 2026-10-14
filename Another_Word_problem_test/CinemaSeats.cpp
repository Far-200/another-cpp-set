#include <iostream>
#include <vector>
using namespace std;
//Cinema Seats it seemeth

int main(){
    cout << "Enter number of seats: ";
    int n;
    cin >> n;
    vector<int> seats(n);
    int available = 0;
    int unavailable = 0;
    int index = 0;
    //int unavailable_seats(unavailable);
    cout << "Seats:" << endl;
    for(int i = 0; i < seats.size(); i++){
        seats[i] = i + 1;
        cout << seats[i] << " ";
        if(seats[i] % 3 == 0 && seats[i] % 5 == 0){
            unavailable++;
            continue;
        }
        if(seats[i] % 3 == 0){
            unavailable++;
            continue;            
        }
        if(seats[i] % 5 == 0){
            unavailable++;
            continue;
        }
        
        seats[index] = seats[i];
        index++;
    }
    cout << endl;
    cout << "Fetching available seats..." << endl;
    available = n - unavailable;
    cout << "Available seats: " << available << endl;
    cout << "Available seat numbers: " << endl;
    for(int i = 0; i < index; i++){
        cout << seats[i] << " ";
    }
    cout << endl;
    cout << "Unavailable seats: " << unavailable << endl;
    for(int seat_num = 1; seat_num <= n; seat_num++){
        if(seat_num % 3 == 0 || seat_num % 5 == 0){
            cout << seat_num << " ";
        }
    }
    return 0;
}