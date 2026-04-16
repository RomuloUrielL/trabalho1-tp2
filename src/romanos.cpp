// Copyright 2026 Romulo Uriel

#include "romanos.hpp"
#include <vector>
#include <cstring>
int romanos_para_decimal(char const * num_romano)
{
  int sum = 0;
  int countV = 0;
  int countL = 0;
  int countD = 0;
  std::vector<int> decimals;
  int lenght = strlen(num_romano);
  if(lenght > 30){
    return -1;
  }
  
  for(int i = 0; i < lenght; i++){ 

    if((i + 3) < lenght){
      if(num_romano[i] == 'I' ||
        num_romano[i] == 'X' ||
        num_romano[i] == 'C' ||
        num_romano[i] == 'M'){
        if(num_romano[i] == num_romano[i + 1] &&
          num_romano[i] == num_romano[i + 2] &&
          num_romano[i] == num_romano[i + 3]){
          return -1;
        }
      } 
    }
    
    switch(num_romano[i]){
      case 'I':
        decimals.push_back(1);
        break;
      case 'V':
        countV++;
        if(countV > 1){
          return -1;
        }
        decimals.push_back(5);
        break;
      case 'X':
        decimals.push_back(10);
        break;
      case 'L':
        countL++;
        if(countL > 1){
          return -1;
        }
        decimals.push_back(50);
        break;
      case 'C':
        decimals.push_back(100);
        break;
      case 'D':
        countD++;
        if(countD > 1){
        return -1;
          }
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
 