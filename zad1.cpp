#include <iostream>

void func(int * niz, int n) {
	niz = new int[n];
	niz[0] = 1, niz[1] = 1;
	for (int i = 2; i < n; i++) {
		niz[i] = niz[i - 1] + niz[i-2];
		std::cout << niz[i];
	}
}

int main() {

	int n;
	std::cin >> n;
	int* niz;

	func(niz, n);
}