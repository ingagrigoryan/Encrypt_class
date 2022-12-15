#include <iostream>
#include <math.h>
#include "vector_to_matrix.h"

using namespace std;

Vec::Vec(int X){
  x = X;
}

void Vec::setArr(){
  for(int i = 0; i < x; i++){
    arr[i] = i + 3;
  }
  for(int i = 0; i < x; i++){
    cout << arr[i] << "  ";
  }
  cout << endl;
}

void Vec::getA(){
  k = sqrt(x);
  for(int i = 0; i < k; i++){
    for(int j = 0; j < k; j++){
      A[i][j] = arr[j + i * k];
    }
  }
  
  for(int i = 0; i < k; i++){
    for(int j = 0; j < k; j++){
      cout << A[i][j] << " ";
    }
  }
  cout << endl;
}

void Vec::getB(){
  k = sqrt(x);
  for(int i = 0; i < k; i++){
    for(int j = 0; j < k; j++){
      B[i][j] = A[i][j];
    }
  }
  
  for(int i = 0; i < k; i++){
    for(int j = 0; j < k; j++){
      cout << B[i][j] << " ";
    }
  }
  cout << endl;
}


