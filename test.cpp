#include<iostream>
#define INC 12
int foo(int param) {
	param = param + INC;
	return param;
}

int main(){
	int i = 1;

	std::cout<<"Hello World"<<std::endl;
	std::cout<<"The value is: "<<foo()<<std::endl;

	std::cout << "Good Bye" << std::endl;
	return 0;
}
