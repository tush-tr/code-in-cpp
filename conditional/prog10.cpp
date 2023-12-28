/*
function Discount(float amount)

if amount>=5000 offer 20% discount

if 2000<=amount<5000 offer 10% discount

if amount<2000 offer 5% discount
*/
#include <iostream>
using namespace std; 

int main(){
    int amount;
    float disAmount;
    if(amount>5000){
        disAmount = amount-(amount*20/100);
    }
    else if(amount>=2000 && amount<5000){
        disAmount = amount-(amount*10/100);
    }else{
        disAmount = amount-(amount*5/100);
    }
    //write nested onditions to print discounted amount 
    cout<<disAmount;

}