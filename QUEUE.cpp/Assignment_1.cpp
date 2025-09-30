#include <iostream>
using namespace std;

int TimeCalculate(int *ticket, int n, int k) {
    int time = 0;
    while (ticket[k] > 0) {
        for (int i = 0; i < n; i++) {
            if (ticket[i] == 0) {
                continue; // Skip people who are done
            }

            ticket[i] -= 1;
            time += 1;

            // Check if person 'k' is done
            if (ticket[k] == 0) {
                return time; // Exit immediately once k is done
            }
        }
    }
    return time;
}

int main() {
    int ticket[] = {2, 3, 2};
    int n = sizeof(ticket) / sizeof(int);
    int k = 2;
    cout << TimeCalculate(ticket, n, k);
    return 0;
}
