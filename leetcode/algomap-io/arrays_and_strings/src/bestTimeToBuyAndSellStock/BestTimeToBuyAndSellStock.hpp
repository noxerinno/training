#ifndef BESTTIMETOBUYANDSELLSTOCK_H
#define BESTTIMETOBUYANDSELLSTOCK_H

#include <vector>

class BestTimeToBuyAndSellStock {
public:
    BestTimeToBuyAndSellStock();
    int maxProfit(std::vector<int>& prices);
private:
    void displayVector(std::vector<int>& prices);
    static bool decreasingOrderComparator(int a, int b);
};

#endif  // BESTTIMETOBUYANDSELLSTOCK_H