#include <iostream>
#include "usa.h"

USA::USA() {
  flag = std::string{"| * * * * * * * * * * USAUSAUSAUSAUSAUSAUSAUSAUSA|\n"} 
  + std::string{"|  * * * * * * * * *  :::::::::::::::::::::::::::|\n"}
  + std::string{"| * * * * * * * * * * USAUSAUSAUSAUSAUSAUSAUSAUSA|\n"}
  + std::string{"|  * * * * * * * * *  :::::::::::::::::::::::::::|\n"}
  + std::string{"| * * * * * * * * * * USAUSAUSAUSAUSAUSAUSAUSAUSA|\n"}
  + std::string{"|  * * * * * * * * *  ::::::::::::::::::::;::::::|\n"}
  + std::string{"| * * * * * * * * * * USAUSAUSAUSAUSAUSAUSAUSAUSA|\n"}
  + std::string{"|::::::::::::::::::::::::::::::::::::::::::::::::|\n"}
  + std::string{"|USAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSA|\n"}
  + std::string{"|::::::::::::::::::::::::::::::::::::::::::::::::|\n"}
  + std::string{"|USAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSA|\n"}
  + std::string{"|::::::::::::::::::::::::::::::::::::::::::::::::|\n"}
  + std::string{"|USAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSAUSA|\n"};
}

std::ostream &operator<<(std::ostream &output, const USA &merica) {
  output << merica.flag;
  return output;
}