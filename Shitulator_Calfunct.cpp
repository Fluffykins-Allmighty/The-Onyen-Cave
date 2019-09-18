#include "CalFunct.hpp"

CalFunct::CalFunct(void){
	std::cout << "\n!Functions Loaded!\n\n" << std::endl;
}

CalFunct::~CalFunct(void) {
	std::cout << "!Memory Destroyed!\n\n";
}


double CalFunct::geometry(double g_num1, double g_num2, std::string g_opr) {
	if (g_opr == "v=4/3(pi)(r3)") {
		m_result = 3.14f * (4 * g_num1 * g_num1 * g_num1) / 3;
		std::cout << " V = 4 * 3.14 * (" << g_num1 << "^3) / 3\n";
		std::cout << " =========================================\n";

	}
	else if (g_opr == "v=h*(pi)*(r2)") {
		m_result = g_num2 * 3.14f * (g_num1 * g_num1);
		std::cout << " V = " << g_num1 << " * 3.14 * (" << g_num1 << "^2)\n";
		std::cout << " =========================================\n";

	}
	else if (g_opr == "v=s3") {
		m_result = g_num1 * g_num1 * g_num1;
		printf(" V = %f * %f * %f\n ===================================\n", g_num1, g_num1, g_num1);

	}
	else if (g_opr == "v=1/3lwh") {
		std::cout << "Enter pyramid height: ";
		std::cin >> m_num3;
		std::cout << " =========================================\n\n";

		m_num4 = g_num1 * g_num2;
		m_result = m_num4 * m_num3 / 3;
		std::cout << " V = (" << g_num1 << " * " << g_num2 << ") * " << m_num3 << " / 3 \n";
		std::cout << " =========================================\n";
	}
	else {
		std::cout << "...not a valid formula, bud. e,..,e\n";
	}
	return m_result;
}

double CalFunct::arithmetic(double a_num1, double a_num2, char a_opr) {
	switch (a_opr) {
	case '+':
		m_result = a_num1 + a_num2;
		break;

	case '-':
		m_result = a_num1 - a_num2;
		break;

	case '*':
		m_result = a_num1 * a_num2;
		break;

	case '/':
		m_result = a_num1 / a_num2;
		break;

	default:
		std::cout << " All fucked up, are ya bud? o,..,o" << std::endl;
		std::cout << " ===========================================\n\n";
		break;
	}

	return m_result;
}
