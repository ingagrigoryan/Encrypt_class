#include "Cesar.h"
#include <iostream>
using namespace std;

int Cesar::encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}

	for (int i = 0; i < src_size; i++){
		*(p_out + i) =  *(p_str + i) + 3;
	}
	out_size = src_size;
	return 0;
}

int Cesar::decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}

	for (int i = 0; i < src_size; i++) {
		*(p_out + i) = (char)*(p_str - 3);
	}
	return 0;
}
