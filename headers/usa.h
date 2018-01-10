// Copyright 2018 Matthew Lu
#ifndef HEADERS_USA_H_
#define HEADERS_USA_H_

#include <iostream>
#include <string>

struct USA {
  std::string flag;
  USA();
};

std::ostream& operator<<(std::ostream &output, const USA& murica);

#endif  // HEADERS_USA_H_
