#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string	levelArray[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};
	void (Harl::*funcArray[4]) (void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	for(int i = 0; i < (int)levelArray->size() - 1; i++){
		void (Harl::*select)(void) = funcArray[i];
		if (level == levelArray[i] ){
			(this->*select)();
		}
	}
}