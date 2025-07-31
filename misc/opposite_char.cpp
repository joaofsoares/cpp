#include <iostream>

char opposite(char c) {
	if (std::islower(c))
		return 'z' - c + 'a';
	else if (std::isupper(c))
		return 'Z' - c + 'A';
	else
		return c;
}

int main() {
	std::cout << convert('a') << std::endl;
	std::cout << convert('b') << std::endl;
	std::cout << convert('z') << std::endl;
  
	return 0;
}
