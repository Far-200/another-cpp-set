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
    cout << "Seats:" << endl;
    for(int i = 0; i < seats.size(); i++){
        seats[i] = i + 1;
        cout << seats[i] << " ";
        if(seats[i] % 3 && seats[i] % 5 == 0){
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
        index++;
    }
    cout << endl;
    cout << "Fetching available seats..." << endl;
    available = n - unavailable;
    cout << "Available seats: " << available << endl;
    cout << "Available seat numbers: " << endl;
    vector<int> avail_seats(available);
    for(int i = 0; i < available; i++){
        for(int j = 0; j < index - i - 1; j++){
            avail_seats[i] = i;
            cout << avail_seats[i] << " ";
            j++;
        }
    }
    cout << endl;
    cout << "Unavailable seats: " << unavailable << endl;
    return 0;
}