#include "replace.h"

int main(int argc, char **argv){
	Replace rpl(argv, argc);
	return (rpl.myReplace(argv));
}