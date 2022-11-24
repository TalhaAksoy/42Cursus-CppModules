//
// Created by Selim talha Aksoy on 11/24/22.
//

#include "replace.h"

Replace::Replace(char **argv, int argc){
	this->argcChecker(argc);
	this->openFile.open(argv[1]);
	if(this->openFile.fail()){
		std::cout << "File Not Exist" << std::endl;
		exit(0);
	}
	while(!this->openFile.eof() && this->openFile >> std::noskipws >> c)
		this->str += this->c;
}

Replace::~Replace() {
	this->openFile.close();
	this->newFile.close();
	std::cout << "All file closed" << std::endl;
}

int Replace::argcChecker(int argc) {
	if (argc != 4){
		std::cout << "Usage :: ./replace <file> old_str new_str" << std::endl;
		exit(0);
	}
	return (0);
}

int Replace::myReplace(char **argv) {
	int	pos;
	this->newFile.open((std::string(argv[1]) + ".replace").c_str());
	if (newFile.fail()){
		std::cout << "New File Not Created" << std::endl;
		exit(0);
	}
	for (int i = 0; i < (int)this->str.size(); i++){
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i){
			this->newFile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			this->newFile << str[i];
	}
	std::cout << "All Words Changed" << std::endl;
	return (0);
}

