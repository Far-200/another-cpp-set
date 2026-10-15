#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Enter total warehouses: ";
    cin >> n;
    vector<int> quantity(n);
    cout << "Enter the quantities: " << endl;
    for(int i = 0; i < n; i++){
        cout << "Enter Quantity: " << i + 1 << endl;
        cin >> quantity[i];
    }
    cout << endl;
    //Finding maximum
    int max = quantity[0];
    int second_max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(quantity[i] > max){
            max = quantity[i];
            //second_max = max;
            quantity[i] = second_max;
        }
        if(second_max < max){
            second_max = quantity[i];
            quantity[i] = second_max;
        }
    }
    cout << "Maximum Value: "; 
    cout << max << endl;
    cout << second_max << endl;
    
    cout << "Warehouse and it's contents: " << endl;
    for(int i = 0; i < n; i++){
        cout << quantity[i] << " " << endl;
    }
    return 0;
}