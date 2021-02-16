#include <iostream>
using namespace std;
 
int maxProfit(int p[], int st, int e)
{
    if (e <= st)
        return 0;
 
    int profit = 0;
 
    for (int i = st; i < e; i++) {
 
        for (int j = i + 1; j <= e; j++) {
 
            if (p[j] > p[i]) {
 
                int curr_profit = p[j] - p[i]
                                  + maxProfit(p, st, i - 1)
                                  + maxProfit(p, j + 1, e);
 
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int p[] = { 58, 110, 160, 235, 134, 554 };
    int n = sizeof(p) / sizeof(p[0]);
    cout << maxProfit(p, 0, n - 1);
    return 0;
}
r
