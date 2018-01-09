#ifndef _USA_H_
#define _USA_H_

#include <iostream>
#include <string>

struct USA {
  std::string flag;
  USA();
};

std::ostream& operator<<(std::ostream &output, const USA& murica);

#endif