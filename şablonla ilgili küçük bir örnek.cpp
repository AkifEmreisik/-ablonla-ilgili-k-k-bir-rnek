#include<iostream>

template<typename T,typename U>
T max(T a,U b){
	return (a>b) ? a : b;
}


int main(){
	
std::cout<<max<>(7.5,7);
	
	
	return 0;
}
