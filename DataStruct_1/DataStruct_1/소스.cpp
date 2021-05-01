#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int sumAlgorithmA(int n) {
    return n * (n + 1) / 2;
}

int sumAlgorithmB(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int sumAlgorithmC(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < i; j++)
            sum += 1;
    return sum;
}

int main(void)
{
    clock_t start, finish;
    double duration;
    int n, result[3];

    cout << "n : ";
    cin >> n;

    start = clock();
    result[0] = sumAlgorithmA(n);
    finish = clock();

    cout << "A result : " << result[0] << endl;
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "A duration : " << duration << endl << endl << endl;

    start = clock();
    result[1] = sumAlgorithmB(n);
    finish = clock();

    cout << "B result : " << result[1] << endl;
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "B duration: " << duration << endl << endl << endl;

    start = clock();
    result[2] = sumAlgorithmC(n);
    finish = clock();

    cout << "C result: " << result[2] << endl;
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "C duration: " << duration << endl << endl << endl;

    return 0;
}