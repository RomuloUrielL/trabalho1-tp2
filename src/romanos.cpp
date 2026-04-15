// Copyright 2026 Romulo Uriel

#include "romanos.hpp"
int romanos_para_decimal(char const * num_romano)
{
  if(*num_romano == 'I'){
    return 1;
  }
  if(*num_romano == 'V'){
    return 5;
  }
  if(*num_romano == 'X'){
    return 10;
  }
  if(*num_romano == 'L'){
    return 50;
  }
  if(*num_romano == 'C'){
    return 100;
  }
  if(*num_romano == 'D'){
    return 500;
  }
  if(*num_romano == 'M'){
    return 1000;
  }
  return -1;
}
 