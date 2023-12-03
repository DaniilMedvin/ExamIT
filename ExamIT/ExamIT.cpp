#include <iostream>
#include <Windows.h> 
using namespace std;

int TickCost (int n, int m, int a, int b, int k, int c) {
    int IndTick = n * m * a;
    int GroupTick = (n + k - 1) / k * m * c;
    int UnlimTick = n * b * m;
    return min(IndTick, min(GroupTick, UnlimTick));
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

    cout << "Вартість квитків: " << TickCost(n, m, a, b, k, c) << " Грн" << endl;

    return 0;
}