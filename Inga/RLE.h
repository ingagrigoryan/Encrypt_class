#pragma once
#include "Header.h"

class RLE: public Crypto {
public:
	int encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size);
	int decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size);
};
