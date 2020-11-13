// Ітераційний спосіб

#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Create(int* c, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(int* c, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

double Avg(int* c, const int size) {
    double S = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
        if (i % 2 == 0) {
            S += c[i];
            k++;
        }
    return S / k;
}

int main() {
    srand((unsigned)time(NULL));  // ініціалізація генератора випадкових чисел  
    const int n = 10;
    int a[n];

    int Low = 15;
    int High = 85;

    Create(a, n, Low, High);
    Print(a, n);
    cout << "Average = " << Avg(a, n) << endl;

    return 0;
}
