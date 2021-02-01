// A scalene triangle is a triangle that has three unequal sides, such as those illustrated above.
// An isosceles triangle is a triangle with (at least) two equal sides
// An equilateral triangle is a triangle with all three sides of equal length

#include<iostream>

using namespace std;
int main(){
    int sideA,sideB,sideC;
    cin>>sideA>>sideB>>sideC;
    if(sideA==sideB && sideB==sideC){
        cout<<"Triangle is equilateral";
    }
    else if(sideA==sideB || sideB==sideC || sideA==sideC){
        cout<<"Triangle is isosceles";
    }
    else{
        cout<<"Triangle is scalene";
    }

    return 0;
}