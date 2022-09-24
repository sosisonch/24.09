#include <iostream>
using namespace std;
int main() {
#include <iostream>
	using namespace std;
	int main() {

	//Boolean1◦
		//	.Дано целое число A.Проверить истинность высказывания : «Число A является положительным».
		int a;
		bool res;
		cin >> a;
		res = a > 0;
		cout << boolalpha << res endl;
	//	Boolean2◦
		//	.Дано целое число A.Проверить истинность высказывания : «Число A является нечетным».
		int a;
		boll res;
		cin >> a;
		res = a $ 2 != 0;
		cout << boolalpha << res << endl; */
			//Boolean3◦
			//.Дано целое число A.Проверить истинность высказывания : «Число A является четным».
			/*int  a;
			bool res;
			cin >> a;
			res = a % 2 == 0;
			cout << boolapha << res << endl;|*/
			//Boolean4◦
		//	.Даны два целых числа : A, B.Проверить истинность высказывания :
	//	«Справедливы неравенства A > 2 и B ≤ 3».
		int a, b;
		bool res;
		cin >> a >> b;
		res = a > 2 && b <= 3;
		cout << boolalpha << res << endl;
	//	Boolean5◦
		//	.Даны два целых числа : A, B.Проверить истинность высказывания :
		//«Справедливы неравенства A ≥ 0 или B < −2».
		int a, b;
		bool res;
		cin >> a >> b;
		res = a >= 0 || b < -2;
		cout << boolalpha << res << endl;
		//Boolean6◦
		//	.Даны три целых числа : A, B, C.Проверить истинность высказывания : 
		//«Справедливо двойное неравенство A < B < C».
		/*int a, b, c;

			bool res, res1;
		cin >> a >> b >> c;
		res = (a < b);
		res1 = (b < c);
		cout << boolalpha << res << endl;
		cout << boolalpha << res1 << endl; */
			//	Boolean7◦
				//.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Число B находится между числами A и C».
		/*	int a, b, c;
		cin >> a >> b >> c;
		res = (a < b < c);
		res1 = (c < b < a);
		cout << boolalpha << res << endl;
		cout << boolalpha << res1 << endl; */
			//	Boolean8◦
			//	.Даны два целых числа : A, B.Проверить истинность высказывания :
			//«Каждое из чисел A и B нечетное».
				/* int a,b;
				bool res, res1;

				cin >> a >> b;
				res = a % 2 ;
				res1 = b % 2 ;
				cout << boolaplha << res << endl;
				cout << boolaplha << res1 |<< endl;
				*/
				//Boolean9◦
			//	.Даны два целых числа : A, B.Проверить истинность высказывания :
		//	«Хотя бы одно из чисел A и B нечетное».
			/*int a, b;
		bool res, res1;
		cin >> a >> b;
		res = a % b;
		res1 = a % b;
		cout << boolaplha << res << endl;
		cout << boolaplha << res1 << endl;
		*/
		//Boolean10◦
		//	.Даны два целых числа : A, B.Проверить истинность высказывания : «Ровно одно из чисел A и B нечетное».
		/* int a, b
			bool res, res1;
		cin >> a >> b;
		res = a < b;
		res1 = b % a;
		cout << boolalpha < , res << endl;
		cout << boolaplha << res1 << endl;/*
	//	Boolean11◦
//. Даны два целых числа: A, B. Проверить истинность высказывания: «Числа A и B имеют одинаковую четность».
/*int a,b;
bool res,res1
cin >> a >> b
res  = a < b ;
res 1 = b < a ;
cout << boolapha << res  << endl;
cout << boolapha << res1 << endl;
*/
		//Boolean11◦
		//	.Даны два целых числа : A, B.Проверить истинность высказывания : «Числа A и B имеют одинаковую четность».
/* int a,b,c;
bool res,res1;
cin >> a >> b >> c ;
res = a % b !=0;
res1 = b % c !=0
*/
//Boolean13◦
//. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Хотя бы одно из чисел A, B, C положительное».
		* / int a, b, c;
		bool res, res1;
		cin >> a >> b >> c;
		res = a % b != 0;
		res1 = b < c;
		cout << boolalpha << res1 << endl;
		cout << boolalpha << res1 << endl;

	}
