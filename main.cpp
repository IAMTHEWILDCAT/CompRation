#include"Complex.h"
#include"Rational.h"



int main() {
	/*Complex g,h;
	cin >> g>>h;
	Complex neo = g*h;
	cout << neo;*/
Rational r(80,35);
r.simplify();
cout<<r;
	system("pause");
	return 0;
}

//for (int i = 0; i < 10; i++) {
	//	cout << i<<" ";		
	//}

	//int i = 0;
	//while (i < 50) {
	//	i += 3; // i = i+3
	//	cout << i;
	//}

	////sum from 0 to N, div 3, not div 5
	//int n;
	//cin >> n;
	//int s = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	if ((i % 3 == 0)&&(i%5!=0))
	//		
	//	{
	//		s += i;
	//	}
	//	
	//}
	//cout << s;
