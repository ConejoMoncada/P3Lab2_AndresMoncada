#include<iostream>;
#include<c.math>;

using std::cin;
using std::cout;
using std::endl;

boolean primo(int n){
	boolean p = true;
	for (int i = 2; i < n; i++){
		if (n % i == 0)
			p = false;
	}
	return p;
}
cuadrados (int n){
	int imp = -1;
	for (int i = 1; i <= n; i++){
		cout << i << "³ = ";
		for (int j = 0; j < i; j++){

