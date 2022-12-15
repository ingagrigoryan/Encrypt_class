#include <iostream>
#include <string.h>
#include "Cesar.h"
using namespace std;

int main()
{
    char input[10];
    char output[10];
    
    strcpy(input, "Test text");
    unsigned int len = 9;
    Cesar cesar;
    cesar.encrypt(input, 9, output, len);
    *(output + len) = 0;
    cout << output;
    return 0;
}
