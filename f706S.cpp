#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H, M, S, T;
    cin >> H >> M >> S >> T;

    int totalSeconds = H * 3600 + M * 60 + S + T * 5400;

    totalSeconds = ((totalSeconds % (36 * 3600)) + (36 * 3600)) % (36 * 3600);

    int newH = totalSeconds / 3600;
    int newM = (totalSeconds / 60) % 60;
    int newS = totalSeconds % 60;

    cout << newH << ":" 
         << setfill('0') << setw(2) << newM << ":" 
         << setfill('0') << setw(2) << newS;

    return 0;
}
