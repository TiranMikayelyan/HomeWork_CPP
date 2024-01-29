// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//xndir61
#include <iostream>
#include<cmath>
using namespace std;
//int main()
//{
//	int x,c,a,b;
//	string t;
//	cout<<"x=";
//	cin >> x;
//	if (x >= 100 && x <= 999) {
//		a = x % 10, b = (x / 10) % 10, c = x / 100;
//		if (c == b + a) cout << "True";
//		else cout << "False";
//	}
//	else cout << "x="; cin >> x;
//	
//}

//xndir81
//int main()
//{
//	double x = 2.4, y;
//	while (x <= 7.6)
//	{
//		y = tan(2 * x + x * x);
//		cout << "x="<<x<<"         y="<<y<<endl;
//		x += 0.2;
//	}
//}
//xndir13
//int main()
//{
//	double x, y, z;
//	cin >> x >> z;
//	if (x >= 1 && x <= 7) y = pow(fabs(x) + 2 * fabs(z), 1 / 4.0) + exp(fabs(x + 1));
//	else y = pow(tan(pow(x + z,7)),2);
//	cout << "y=" << y;
//}
//xndir 88
//int main()
//{
//	double x = 10, y;
//	while (x <= 20)
//	{
//		if (x > 12) y = 3 * log(x) / log(3);
//		else y = pow(x, 3);
//		cout << "x=" << x << "  y=" << y << endl;
//		x += 2;
//	}
//}
//
//
//xndir92
//int main()
//{
//	double x = -2.7 , y;
//	do {
//		y = pow(x + x * x, 7);
//		cout << "x=" << x << "    y=" << y << endl;
//		x += 0.5;
//	} while (x <= 33);
//	
//}
//xndir96
//int main()
//{
//	double x = -5, y;
//	do {
//		if (x > 2) y = pow(3, x + 4);
//		else y = -8;
//		cout << "x=" << x << "   y=" << y << endl;
//		x += 2;
//	} while (x <= 8);
//}

//xndir 100
//int main()
//{
//	double x = -30, y;
//	do {
//		if (x > 5) y = sin(x);
//		else y = cos(x);
//		cout << "x=" << x << "  y=" << y << endl;
//		x += 3.5;
//	} while (x <= 30);
//}

//xndir167
//int main()
//{
//	double w = 1, x;
//	int n, k,fact = 1;
//	cout << "x="; cin >> x;
//	do {
//		cout << "n="; cin >> n;
//	} while (n <= 0);
//	for (k = 1; k <= n; k++)
//	{
//		fact *= k;
//		w *= pow(-1, k) / pow(2 * x + 1, k) * fact;
//	
//	}
//	cout << "w=" << w;
//}

//xndir32
//int main()
//{
//	double a, b, c,min;
//	cin >> a >>b >> c;
//	if (a > b) min = b;
//	else min = a;
//	if (c < min) min = c;
//	cout << "min=" << min;
//}

//xndir227
//int main()
//{
//	unsigned int i, n, x[20];
//	double  p = 1;
//	do { cout << "n="; cin >> n; } while (n < 2 || n>20);
//	for (i = 0; i <= n; i++)
//	{
//		cout << "x[" << i << "]="; cin >> x[i];
//	}
//	for (i = 0; i <= n; i++)
//	{
//		if(i % 2 != 0) p *= x[i] * x[i];
//	}
//	cout << "p=" << p;
//}


// xndir157
//int main()
//{
//	int n, i, k; double v, s = 0, p = 0;
//	cout << "v="; cin >> v;
//	do{cout << "n = "; cin >> n;} while(n < 1);
//	for(k = 1; k <= n; k++)
//	{for(i=1;i<=k;i++)
//		p += v * i + k;
//	s += p * (k + 5);
//	}
//	cout << "s=" << s;
//	
//}

//xndir295
//int main()
//{
//	int p,n, i, x[10], y[10], h = 0;
//	do { cout << "n= ", cin >> n; } while (n < 2 || n>10);
//	for (i = 0; i < n; ++i) { cout << "x[" << i << "]=", cin >> n; }
//	cout << "p="; cin >> p;
//	for (i = 0; i < n; ++i) {
//		if (x[i] % p == 0) y[h++] = x[i];
//	}
//	if (h > 0)  for (i = 0; i < h; ++i) cout << "y[" << i << "] =" << y[i] << endl; 
//	else cout << "chkan tarrer";
//}


//xndir 116

//int main() {
//	int n, i; double x=3, y=3, s = x * x + sin(y);
//	do { cin >> n; } while (n < 4);
//	for (i = 2; i <= n - 3; ++i) { x = x - y; y = y * y - 6; s += x * x + sin(y); }
//	cout << 's=' << s;
//}


// xndir 335
//int main()
//{
//	int n, i, h = 0; double x[10], y[10], max;
//	do { cout << "n= ", cin >> n; } while (n < 2 || n>10);
//	for (i = 0; i < n; ++i) { cout << "x[" << i << "]="; cin >> x[i]; }
//	max = x[0]; 
//	for (i = 1; i < n; ++i) 
//		if (x[i] > max) max = x[i];
//	for (i = 0; i < n; i++) if (x[i] < max) y[h++] = i; 
//	 for (i = 0; i < h; i++) cout << "y[" << i << "] =" << y[i] << endl;
//	return 0;
//}

//xndir 440
//#include <iostream>
//using namespace std;
//
//int main()
//{
//int n, i, j, s = 0; double x[10][10];
//do { cout << "n= ", cin >> n; } while (n < 2 || n>10);
//for (i = 0; i < n; ++i) for (j = 0; j < n; j++) { cout << "x[" << i << "]" << "[" << j << "]="; cin >> x[i][j]; }
//for (i = 1; i < n; i++) { for (j = n - i; j < n; j++)  s += x[i][j] - (int)x[i][j];} cout << s;
//return 0;
//}

