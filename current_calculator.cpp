// write a program that calculates the current through a 200-μF capacitor whose voltage is given;
//        ⎧  50t V          0 < t < 1
// v(t) = ⎪  100 - 50t V    1 < t < 3
//        ⎪  -200 + 50t V   3 < t < 4
//        ⎩  0 V            otherwise

// The program should prompt the user to enter time, t.

#include <stdio.h>

int main(void) {
    double t, i;
    const double C = 200e-6;   /* 200 μF */

    printf("Enter time t (in seconds): ");
    if (scanf("%lf", &t) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    /* i = C * dv/dt */
    if (t > 0.0 && t < 1.0) {
        i = C * 50.0;          /* v = 50t  →  dv/dt = 50 */
    } else if (t > 1.0 && t < 3.0) {
        i = C * (-50.0);       /* v = 100 - 50t  →  dv/dt = -50 */
    } else if (t > 3.0 && t < 4.0) {
        i = C * 50.0;          /* v = -200 + 50t  →  dv/dt = 50 */
    } else {
        i = 0.0;               /* otherwise v = 0  →  dv/dt = 0 */
    }

    printf("Current i(%.3f) = %.6f A\n", t, i);
    return 0;
}






