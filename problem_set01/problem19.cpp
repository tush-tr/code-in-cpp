#include <iostream>
using namespace std;
int main() {
  int n=9;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1 || j==1 || j==n || i==n){
				cout<<5<<" ";
			}
			else if(i==2 || j==2 || j==8 || i==8){
				cout<<4<< " ";
			}
			else if(i==3 || j==3 || i==7 || j==7){
				cout<<3<<" ";
			}
			else if(i==4 || j==4 || i==6 || j==6){
				cout<<2<<" ";
			}
			else{
				cout<<1<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}