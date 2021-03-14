#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

std::vector<std::pair<std::string,std::string>> tmp;

int main() {
  std::ifstream sc("i.qqz");

  while (!sc.eof()) {
    std::string c;
    std::getline(sc,c,';');
    if (c.empty()) continue;

    //stripping whitespace
    std::string ws = " \f\n\r\t\v";
    std::size_t cfnw = c.find_first_not_of(ws);
    if (cfnw == -1) continue;
    c = c.substr(cfnw,c.find_last_not_of(ws)-cfnw+1);

    //comments
    if (!c.rfind("//",0)) continue;

    //tokeniser - WIP

    std::cout << c;
  }
  sc.close();
  return 0;
}
