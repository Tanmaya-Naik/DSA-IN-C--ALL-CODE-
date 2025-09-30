#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    int AcNumber=145189;
    string username="Tammaya";
    float balance=50000;
    float total;
    int currbalance;
    public:
    void deposite(int amount){
    total=balance+amount;
        cout<<"Your total balance after deposit is="<<total<<endl;
    }
    void withdrawl(int amount){
         currbalance=total-amount;
        cout<<"Your total balance after withdrawl is="<<currbalance<<endl;
    }
    void getBalance(){
        // int curbalce=total-currbalance;
        cout<<"The total bank balance of your is "<<currbalance;
    }
};
int main(){
    BankAccount TN;
    TN.deposite(15000);
    TN.withdrawl(50000);
    TN.getBalance();
    return 0;
}