/** 
cpp-overflow is designed to show integer overflow in cpp
*/ 

#include <iostream>
using namespace std;


int main(){
	char stopme;

	int myint=1;
	for (int i=1; i<19; i=i+1){
	
	myint=myint*i;
	cout << "myint = " << myint << endl;
	}

	cin >> stopme;  //holds console open in some cases
	return 0;
}
