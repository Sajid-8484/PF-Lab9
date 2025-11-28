#include <iostream>
using namespace std;
void remainbalance(float& balance,float recharge_amount){
     balance+=recharge_amount;
}
int main(){
    float balance,recharge_amount;
    cout<<"Enter balance : ";
    cin>>balance;
    cout<<"Enter recharge Amount: ";
    cin>>recharge_amount;
    remainbalance(balance,recharge_amount);
    cout<<"Recharge successful.Updated balance: "<<balance;
    return 0;
}