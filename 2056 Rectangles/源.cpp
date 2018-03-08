
#include <stdio.h>

int main() {
	double x[4], y[4];
	double t, s;
	int i, j;
	int max(double m, double n);
	int min(double m, double n);
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) != EOF) {
		int sign = 0;
		if (max(x[0], x[1]) < min(x[2], x[3]) || max(x[2], x[3]) < min(x[0], x[1]) || max(y[0], y[1]) < min(y[2], y[3]) || max(y[2], y[3]) < min(y[0], y[1]))
			sign = 1;
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 4; j++) {
				if (x[i] > x[j]) {
					t = x[i];
					x[i] = x[j];
					x[j] = t;
				}
			}
		}
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 4; j++) {
				if (y[i] > y[j]) {
					t = y[i];
					y[i] = y[j];
					y[j] = t;
				}
			}
		}
		if (sign) s = 0;
		else s = (x[2] - x[1]) * (y[2] - y[1]);
		printf("%.2lf\n", s);
	}
	return 0;
}

int max(double m, double n) {
	m = m > n ? m : n;
	return m;
}

int min(double m, double n) {
	m = m < n ? m : n;
	return m;
}