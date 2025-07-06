#include <algorithm>
#include <iostream>

#include "BestTimeToBuyAndSellStock.h"

using namespace std;

BestTimeToBuyAndSellStock::BestTimeToBuyAndSellStock() {}

int BestTimeToBuyAndSellStock::maxProfit(vector<int>& prices) {
    // Trim data
    prices.erase(unique(prices.begin(), prices.end()), prices.end());
    displayVector(prices);
    
    if ((prices.size() < 2) || (is_sorted(prices.begin(), prices.end(), decreasingOrderComparator))) {
        return 0;
    }

    int buyPrice = *prices.begin();
    int profit = 0;

    prices.erase(prices.begin());

    for (int currentPrice : prices) {
        if (currentPrice < buyPrice) {
            buyPrice = currentPrice;
        } else if (currentPrice - buyPrice > profit) {
            profit = currentPrice - buyPrice;
        }
    }
    
    return profit;
}

void BestTimeToBuyAndSellStock::displayVector(vector<int>& prices) {
    for (int price : prices) {
        cout << price << ' ';
    }

    cout << endl << endl;
}

bool BestTimeToBuyAndSellStock::decreasingOrderComparator(int a, int b) {
    return a > b;
}