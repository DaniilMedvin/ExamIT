#include <iostream>
#include <Windows.h> 
using namespace std;

int minCost(int n, int m, int a, int b, int c, int k) {
    int minCost = INT_MAX;

    for (int i = 0; i <= n; ++i) {
        int indTick = i * a;
        int groupTick = (n - i + k - 1) / k * c;
        int totalCost = indTick + groupTick;
        if (i * m >= n) {
            minCost = min(minCost, totalCost);
        }
    }

    int unlimTick = (n + k - 1) / k * c;
    minCost = min(minCost, unlimTick);
    minCost = min(minCost, b * n);

    return minCost;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c, n, k, m;
    cout << "Введіть кількість людей: ";
    cin >> n;
    cout << "Введіть кількість поїздок: ";
    cin >> m;
    cout << "Введіть вартість квитка на одну поїздку: ";
    cin >> a;
    cout << "Введіть вартість безлімітного квитка на одну людину: ";
    cin >> b;
    cout << "Введіть кількість людей у групі для групового квитка : ";
    cin >> c;
    cout << "Введіть вартість групового безлімітного квитка 'для группи людей':";
    cin >> k;

    cout << "Вартість квитків: " << minCost(n, m, a, b, k, c) << " Грн" << endl;

    return 0;
}