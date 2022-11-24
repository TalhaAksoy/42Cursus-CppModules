//
// Created by Selim talha Aksoy on 11/23/22.
//

#include <iostream>
#include <fstream>

int errorCheck(std::string filename, std::string str1, std::string str2){
	if (filename.empty() || str1.empty() || str2.empty())
		return (1);
	return(0);
}

int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Usage ./replace filename searchStr replaceStr" << std::endl;
		return (0);
	}
	std::string filename = argv[1];
	std::string searchStr = argv[2];
	std::string replaceStr = argv[3];
	if (errorCheck(filename, searchStr, replaceStr)) {
		return (0);
	}
	std::ifstream ifs(filename);
	std::string line;
	size_t pos = 0;
	std::ofstream newFile(filename + ".replace");
	if(!ifs.is_open()){
		std::cout << "File cant open " << std::cout;
		return (0);
	}
	while(getline(ifs, line)){
		while((pos = line.find(searchStr)) != std::string::npos){
			std::cout << line.substr(pos) << std::endl;
		}
	}

}