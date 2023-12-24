// Write an Expression for calculating Volume of a Cylinder

// parameters

// radius -- radius of Cylinder

// height -- height of Cylinder

// take pi=3.14



// write expression at line

// volume= Pi * r*r *h

#include <iostream>
using namespace std; 

int main(){
    float pi = 3.14;
    int r,h;
    cin>>r>>h;
    float volume;
    volume = pi*r*r*h;
    cout<<volume<<endl;

}