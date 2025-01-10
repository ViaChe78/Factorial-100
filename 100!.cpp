#include <iostream>
#include <vector>

void multiply(std::vector<int>& number, int x) {
		int carry = 0; // Initialize carry
	for (size_t i = 0; i < number.size(); i++) {
				int product = number[i] * x + carry; // Multiply and add carry
		number[i] = product % 10; // Store the last digit
				carry = product / 10; // Update carry

	}

	// Handle remaining carry
		while (carry) {
		number.push_back(carry % 10); // Add the last digit of carry
				carry /= 10; // Update carry

	}

}

void factorial(int n) {
		std::vector<int> result; // Vector to store digits of the result
			result.push_back(1); // Initialize result as 1
	// Multiply numbers from 2 to n
				for (int i = 2; i <= n; i++) {
		multiply(result, i);

	}

	// Print the result in reverse order
	std::cout << n << "! = ";

	for (auto it = result.rbegin(); it != result.rend(); ++it) {
				std::cout << *it; // Print digits in reverse order

	}

	std::cout << std::endl;

}

int main() {
		int n = 12345; // Change this value to compute other factorials
	factorial(n);
		return 0;

}
