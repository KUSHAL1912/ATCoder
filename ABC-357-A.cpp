#include <iostream>

using namespace std;

int countDisinfectedAliens(int N, int M, int H[]) {
    int totalHands = 0;
    int count = 0;

    for (int i = 0; i < N; ++i) {
        totalHands += H[i];
        if (totalHands <= M) {
            count++;
        } else {
            break;
        }
    }

    return count;
}