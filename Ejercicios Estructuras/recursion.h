#pragma once

int factorial(int _n) {
	if (_n > 1) {
		return _n * factorial(_n - 1);
	}
	else {
		return 1;
	}
}

int fibonacci(int _n) {
	if (_n <= 1) {
		return _n;
	}
	else {
		return fibonacci(_n - 1) + fibonacci(_n - 2);
	}
}