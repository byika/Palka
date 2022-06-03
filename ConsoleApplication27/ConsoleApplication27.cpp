#include <string>
#include <iostream>
using namespace std;



int main()
{


	////1.Ввести три числа и найти наименьшее среди них.
	//float num_1, num_2, num_3;
	//
	//
	//cout << "BBEDUTE 3 LYUBblX CHUCLA: \n";
	//cin >> num_1 >> num_2 >> num_3;
	//
	//if (num_1 > num_2 && num_1 > num_3) {
	//	cout << "1 ChUCLO bOLShE \n";
	//}
	//else if (num_2 > num_1 && num_2 > num_3) {
	//	cout << "2 ChUCLO bOLShE \n";
	//}
	//else if (num_3 > num_1 && num_3 > num_2) {
	//	cout << "3 ChUCLO bOLShE \n";
	//}
	//else {
	//	cout << "ChUCLA POBTOpYAYUTCYA \n";
	//}
	//
	////2.Ввести число, и выяснить - положительное оно, отрицательное, или равно нулю?
	//float num_4;
	//
	//
	//cout << "BBEDUTE LYUBOE CHUCLO: \n";
	//cin >> num_4;
	//
	//if (num_4 == 0) {
	//	cout << "ChUCLO = 0 \n";
	//}
	//else if (num_4 > 0) {
	//	cout << "ChUCLO bOLShE 0\n";
	//}
	//else {
	//	cout << "ChUCLO MEHShE 0 \n";
	//
	//}
	//
	//
	////3.Реализовать калькулятор.Вводятся 2 любых вещественных числа в переменные a и b.Необходимо вывести на экран меню с пунктами :
	////1) a + b
	////2) a – b
	////3) a* b
	////4) a / b
	////5) a% b
	////При выборе соответствующего пункта меню происходит вывод результата вычисления(должна быть проверка деления на 0!)
	//
	//std::string choice; // управляющая переменная
	//float num1, num2;
	//
	//
	//
	//do {
	//	cout << "1 - cymma\n";
	//	cout << "2 - paznoctb\n";
	//	cout << "3 - proizvedenie\n";
	//	cout << "4 - delenie\n";
	//	cout << "5 - delenie po modulyu\n";
	//	cout << "6 - cTepeHb\n";
	//	cout << "0 - BblX0D\n";
	//	cin >> choice;
	//
	//	if (choice == "0") {
	//		cout << "BblX0D\n";
	//	}
	//	else {
	//		cout << "BBEDUTE 2 LYUBblX CHUCLA: \n";
	//		cin >> num1 >> num2;
	//		if (choice == "1") {
	//			cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
	//		}
	//		else if (choice == "2") {
	//			cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
	//		}
	//		else if (choice == "3") {
	//			cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
	//		}
	//		else if (choice == "4") {
	//			if (num2 == 0) {
	//				cout << "HA HOLb DELUTb HELbZYA\n";
	//			}
	//			else {
	//				cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
	//			}
	//		}
	//		else if (choice == "5") {
	//			cout << num1 << " % " << num2 << " = " << int(num1) % int(num2) << "\n";
	//		}
	//		else if (choice == "6") {
	//			cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
	//		}
	//	}
	//} while (choice != "0" || choice != "1" || choice != "2" ||
	//	choice != "3" || choice != "4" || choice != "5" || choice != "6");


	//4.Ввести с клавиатуры символ. Определить, чем он является: цифрой, буквой или знаком пунктуации. 
	char n, o;

	cout << "BBEDUTE LYUBOI CUMBOL: \n";

	cin >> n;

	cout << n << " - ChTO ETO??? \n" << " 1 - num \n" << " 2 - str \n" << " 3 - symbol \n";

	cin >> o;

	if (o == 1) {
		cout << "ETO ChUCLO \n";
	}
	else if (o == 2) {
		cout << "ETO CTPOKA \n";
	}
	else if (o == 3) {
		cout << "ETO CUMBOL \n";
	}


	//5.Ввести число и определить кратно ли оно 3, 5, и 7 одновременно.

	int n1;

	if (n1 % 3 == 0 && n1 % 5 == 0 && n1 % 7 == 0 &&) {
		cout << "KPATHOE \n";
	}
	else {
		cout << "HE KPATHOE \n";
	}


	//6.Вводится целое число (не более 4 разрядов!). Определить количество цифр в нём.
	int n2;

	if (n2 / 1000.0 > 0) {
		cout << "4 \n";
	}
	else if (n2 / 100.0 > 0) {
		cout << "3 \n";
	}
	else if (n2 / 10.0 > 0) {
		cout << "2 \n";
	}
	else {
		cout << "1 \n";
	}
}
