#include "CalFunct.hpp"

CalFunct calculate;

int main(void) {
	double num1{}, num2{}, result{};
	char oprtr{}, Y_N{};
	std::string oprtn{}, name{};
	bool isYes{ true };

	

	std::cout << "    Welcome to the Shitulator! ^,..,^\n===================================== \n\n";
	std::cout << "Enter your name, please: ";
	std::cin >> name;

	do {
		std::cout << " Okiedokes, " << name << std::endl;
		std::cout << std::endl;

		std::cout << " Pick a function set\n";
		std::cout << " ===================\n";
		std::cout << " # Arithmatic  |0| #\n";
		std::cout << " # Geometry    |1| #\n";
		std::cout << " # Calculus    |X| #\n";
		std::cout << " # Algebra     |X| #\n";
		std::cout << " ===================\n";
		std::cin >> oprtr;

		if (oprtr == '0') {
			std::cout << "  Available Operators \n";
			std::cout << " ======================\n";
			std::cout << " # Addition       |+| #\n";
			std::cout << " # Subtraction    |-| #\n";
			std::cout << " # Multiplication |*| #\n";
			std::cout << " # Devision       |/| #\n";
			std::cout << " ======================\n\n";

			std::cout << "Enter number: ";
			std::cin >> num1;
			std::cout << " =====================================\n\n";

			std::cout << " Enter oprerator: ";
			std::cin >> oprtr;
			std::cout << " =====================================\n\n";

			std::cout << " Enter Number: ";
			std::cin >> num2;
			std::cout << " =====================================\n\n";

			result = calculate.arithmetic(num1, num2, oprtr);

			std::cout << " " << num1 << " " << oprtr << " " << num2 << " = " << result << std::endl;
			std::cout << " =====================================\n\n";
			std::cout << std::endl;
		}
		else if (oprtr == '1') {
			std::cout << "      Available Formulas \n";
			std::cout << " =============================\n";
			std::cout << " # SphereVol |v=4/3(pi)(r3)| #\n";
			std::cout << " # CylandVol |v=h*(pi)*(r2)| #\n";
			std::cout << " # CubeVol   |v=s3         | #\n";
			std::cout << " # PyramiVol |v=1/3lwh     | #\n";
			std::cout << " =============================\n\n";

			std::cout << " Enter number: ";
			std::cin >> num1;
			std::cout << " =====================================\n\n";

			std::cout << " Enter opration formula: ";
			std::cin >> oprtn;
			std::cout << " =====================================\n\n";

			std::cout << " Enter Number: ";
			std::cin >> num2;
			std::cout << " =====================================\n\n";

			
			std::cout << " \n Answer: " <<  calculate.geometry(num1, num2, oprtn) << "cm3" << std::endl;
			std::cout << " ===================================\n\n";
		}
		else {
			std::cout << " Walnut strikes again! e,..,e\"\n\n";
			continue;
		}

		std::cout << " Would you like to continue, " << name << "?\n y/n:";;
		std::cin >> Y_N;
		std::cout <<  " =========================\n\n";

		switch (Y_N) {
		case 'y':
			isYes = true;
			break;

		case 'n':
			isYes = false;
			break;

		default:
			std::cout << " !!InVaLiD EnAtRy, WaLnUt!! e,..,0";
			continue;
		}


	} while (isYes);

	if (!isYes)
		std::cout << "  ({[ Later " << name << " ]})" << std::endl;
	std::cout << std::endl;
	

	return 0;
}
