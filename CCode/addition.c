#include<stdio.h>

int sum(int x, int y){
	return x + y;
}

int sum(int x, int y, int z){
	return x + y + z;
}

int main(){
	sum(2, 3);
}
