// Write an Expression for finding Distance between 2 point

// parameters

// x1,y1 -- first point

// x2,y2 -- second point



// just write formula at line

// d=√[(x2-x1)^2+(y2-y1)^2

// dist=


#include <iostream>
#include<math.h>
using namespace std; 

int main(){
    int x1,x2;
    int y1,y2;
    int d;
    cout<<"Enter x1 and y1";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2";
    cin>>x2>>y2;
    d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    cout<<d<<endl;


}