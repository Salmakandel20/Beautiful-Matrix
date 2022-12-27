#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int number,numberOfMoves=0;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>number;
			if(number==1){
				numberOfMoves=abs(3-i)+abs(3-j);
			
			}
		}
	}
	cout<<numberOfMoves;
}
