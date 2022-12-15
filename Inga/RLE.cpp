#include "RLE.h"
#include <iostream>
using namespace std;

int RLE::encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}

	int count = 1;
  for(int i = 0; i < src_size; i++){
    while(i < src_size - 1 && p_str[i] == p_str[i+1]){
      p_out[i] = p_str[i];
      count++;
      p_out[i+1] = count;
      i++;
    }
    return p_str[i], count;
    count = 1;
  }
	out_size = src_size;
	return 0;
}

int RLE::decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}
  for(int i = 0; i < src_size; i++){
    p_out[i] = p_str[i];
  }
	src_size = out_size;
	return src_size;
}
