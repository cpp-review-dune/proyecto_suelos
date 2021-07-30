#include<iostream>
int main(){
	int someNumber = 12345;
	int * ptrSomeNumber = & someNumber;
	std::cout<<"someNumber = "<<someNumber<<std::endl;
	std::cout<<"ptrSomeNumber ="<<ptrSomeNumber<<std::endl;
	std::cout<<"ptrSomeNumber apunta "<<*ptrSomeNumber<<std::endl;
	return 0;
}
