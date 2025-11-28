#include <iostream>
using namespace std;
void rembalance(float total_balance,float withdrawal_amount){
    cout<<"Attempting withdrawal…\n";
     cout<<"Withdrawal successful. New balance inside function: "<<total_balance-withdrawal_amount<<endl;
}
int main(){
    int balance,withdrawal;
    cout<<"Enter balance : ";
    cin>>balance;
    cout<<"Enter Withdrwal Amount: ";
    cin>>withdrawal;
    rembalance(balance,withdrawal);
    cout<<"Balance in main: "<<balance<<endl;
    return 0;
}