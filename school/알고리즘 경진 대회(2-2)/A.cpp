#include <iostream>
using namespace std;

int main() {
    double a, b;
    
	scanf("%lf %lf", &a, &b);
    printf("%.2lf", (a-b)/3+b);
}
