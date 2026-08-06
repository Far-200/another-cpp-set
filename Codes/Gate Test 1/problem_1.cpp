// C++ Basics Gate Test — Data Structures Admission Arc™ 💔
#include <iostream>
using namespace std;
int main(){
    int budget;
    int price;
    char coupon;
    int discount = 20;

    cout<< "Ente your budget: ";
    cin >> budget;

    cout << "Enter the price of the meal: ";
    cin >> price;

    cout << "Do you have a coupon? (y/n): ";
    cin >> coupon;

    // If customer has a coupon, apply discount
    if(coupon == 'y' || coupon == 'Y'){
        if(price >= discount){
            price = price - discount;
        } else {
            price = 0;
        } 
    }

    // If customer is short by some money
    if(price > budget){
        cout << "ORDER FAILED:" << endl;
        cout << "Final Price: " << price << endl;
        cout << "You are short by: " << price - budget << endl;
        return 0;
    }


    cout << "ORDER PLACED: " << endl;
    cout << "Final Price: " << price << endl;
    cout << "Balance: " << budget - price << endl;

    return 0;
}

/* Report.......💔 
The user inputs budget, price of the meal and if they have a coupon or not....
First check, if the user has a coupon... If yes, then apply the Rs. 20 discount..... Happy Customer maybe?💔
Then, if the user has no coupon, skip the if block for having a coupon and  get to the no coupon if- block.....💔
Print the final stuff and pray...💔
What am I doing with my life?💔
*/
