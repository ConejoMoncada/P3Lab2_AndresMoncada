#include<iostream>
#include<math.h>
#define PI 3.14159265

using std::cin;
using std::cout;
using std::endl;

bool primo(int n){
	bool p = true;
	for (int i = 2; i < n; i++){
		if (n % i == 0)
			p = false;
	}
	return p;
}
void cubos (int n){
	int imp = -1;
	for (int i = 1; i <= n; i++){
		cout << i << "³ = ";
		for (int j = 0; j < i; j++){
			imp += 2;
			cout << imp << " ";
			if( j != i -1)
				cout << "+ ";
		}
		cout << "= " << (i*i*i) << endl;
	}
}
void triangulo (double a, double b, double c){
	if(a+b > c && b+c > a && a+c > b){
		double h=0, c1=0, c2=0;//hipotenusa y catetos
		double a1=0, a2=0, a3=0; //ángulos
		double arad; //uno de los tres ángulos en radianes
		double s, area;
		if(sqrt(a*a+b*b) == c || sqrt(b*b+c*c) == a || sqrt(a*a+c*c) == b){
			cout << "Es un triángulo rectángulo" << endl;
			if (a>h){
				h = a;
				c1 = b;
				c2 = c;
			}
			if (b>h){
				h = b;
				c1 = a;
				c2 = c;
			}
			if (c>h){
				h = c;
				c1 = b;
				c2 = a;
			}
			a1 = 90.0;
			a2 = asin(c1/h)*180/PI;
			a3 = asin(c2/h)*180/PI;
			area = c1*c2/2;
			cout << "Ángulos: " << a1 << ", " << a2 << ", " << a3 << endl;
			cout << "Área: " << area << endl;
		}else{
			cout << "No es triángulo rectángulo" << endl;
			s = (a+b+c)/2;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
			arad = acos((a*a + b*b - c*c)/(2*a*b));//ángulo opuesto a c
			a3 = arad * 180/PI;
			a1 = asin(a*sin(arad)/c) *180/PI;
			a2 = asin(b*sin(arad)/c) *180/PI;
			cout << "Ángulos: " << a1 << ", " << a2 << ", " << a3 << endl;
			cout << "Área: " << area << endl;
		}
	}else
		cout << "Los lados no forman un triángulo" << endl;
}
main(){
	int op = 0;
	do{
		cout << "Ingrese una opción: ";
		cin >> op;
		switch(op){
			case 1: cubos(4);
				break;
			case 2: triangulo(1,1,4);
				triangulo(3,5,4);
				triangulo(6,6,7);
				break;
		}
	}while(op != 0);
}
