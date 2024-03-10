#pragma once
#include <iostream>
#include <string.h>
using namespace std;


int existaImpare(int v[], int dim) {


	for (int i = 0; i < dim; i++) {

		if (v[i] % 2 != 0) {
			return true;
		}
	}
	return false;
}

int nrPrim(int n) {

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;;
		}
	}
	return true;
}

int elemPrime(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (nrPrim(v[i])) {
			return true;
		}
		
	}
	return false;
}

int verifPare(int v[], int dim) {


	for (int i = 0; i < dim; i++) {

		if (v[i] % 2 != 0) {
			return true;
		}
	}
	return false;
}