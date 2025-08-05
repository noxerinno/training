#ifndef JEWELSANDSTONES_HPP
#define JEWELSANDSTONES_HPP

#include <map>
#include <string>

class JewelsAndStones
{
public:
    JewelsAndStones();
    int numJewelsAndStones(std::string jewels, std::string stones);
private:
    void printStonesMap(std::map<char,int> stonesMap);
};

#endif  // JEWELSANDSTONES_HPP