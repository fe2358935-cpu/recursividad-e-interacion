#include <iostream>
#include "recursividad e interacion.h"

using namespace std;

int sumaRecursiva(int n) {
	if (n <= 9)
		return n;
	else
		return sumaRecursiva(n / 10) + n % 10;
}

int interativa(int n) {
	int suma = 0;

	while (n > 9) {
		suma += n % 10;
		n /= 10;
	}
	return (suma + n);
}
int main() {
	int cantidad, n;

	cout << "cuantos numeros vas a ingresar? ";
	cin >> cantidad;

		for (int i = 1; i <= cantidad; i++) {
			cout << "ingresa el numero {i + 1}: ";
			cin >> n;

			cout << "recursiva: " << recursiva(n) << endl;
			cout << "interativa: " << interativa(n) << endl;
		}
	return 0;
}