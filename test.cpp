#include<iostream>

int foo(int param) {
	param = param + 12;
	return param;
}

int main(){
	int i = 1;

	std::cout<<"Hello World"<<std::endl;
	std::cout<<"The value is: "<<foo()<<std::endl;

	std::cout << "Good Bye" << std::endl;
	return 0;
}
