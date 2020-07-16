#include <iostream>
#include <random>
int randNum();

using namespace std;
int main() {
    int win_num;
    bool inputCorrect = false;
    int inputCount = 0;
    while(!inputCorrect) {
        inputCount++;
        if(inputCount!=1){
            cout<<"The number must be between 1000000000 and 9999999999"<<endl;
        }
        cout << "Pick the winning number" << endl;
        cin >> win_num;
        if(!(win_num<1000000000||win_num>9999999999)){
            inputCorrect = true;
        }
    }
    default_random_engine generator;
    uniform_int_distribution<int> distr(1000000000,9999999999);
    int count = 0; //keeps count of the amount of times it takes to randomly pick the winning number.
    bool var = true;
    while(var==true) {
        int random_num = (int)distr(generator);
        count++;
        if(random_num==win_num){
            cout<<"numbers match took:"<<count<<endl;
            cout<<"Random Num:"<<random_num<<endl;
            cout<<"winning Num:"<<win_num<<endl;
            break;
        }
    }
    return 0;
}


