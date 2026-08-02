    #include <iostream>
    using namespace std;
    int main(){
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int i = 0;
        while(i < n){
            i++;
            if(i == 20){
                break;
            }
            if(i % 3 == 0){
                continue;
            }
            cout << i << endl;
        }
        return 0;
    }