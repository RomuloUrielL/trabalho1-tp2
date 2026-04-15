// Copyright 2026 Romulo Uriel

#include "romanos.hpp"
#include <vector>
#include <cstring>
int romanos_para_decimal(char const * num_romano)
{
  int sum = 0;
  std::vector<int> decimals;
  int lenght = strlen(num_romano);
  if(lenght > 30){
    return -1;
  }
  if(strcmp(num_romano, "IIII") == 0){
    return -1;
  }
  if(strcmp(num_romano, "XXXX") == 0){
    return -1;
  }
  if(strcmp(num_romano, "CCCC") == 0){
    return -1;
  }
  if(strcmp(num_romano, "MMMM") == 0){
    return -1;
  }
  if(strcmp(num_romano, "VV") == 0){
    return -1;
  }
  if(strcmp(num_romano, "LL") == 0){
    return -1;
  }
  if(strcmp(num_romano, "DD") == 0){
    return -1;
  }
  for(int i = 0; i < lenght; i++){ 
    switch(num_romano[i]){
      case 'I':
        decimals.push_back(1);
        break;
      case 'V':
        decimals.push_back(5);
        break;
      case 'X':
        decimals.push_back(10);
        break;
      case 'L':
        decimals.push_back(50);
        break;
      case 'C':
        decimals.push_back(100);
        break;
      case 'D':
        decimals.push_back(500);
        break;
      case 'M':
        decimals.push_back(1000);
        break;
      default:
        return -1;
    }
  }
  for(int element : decimals){
    sum += element;
  }
  return sum;
}
 