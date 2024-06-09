#include <iostream>


<<<<<<< HEAD

=======
int main() {
	setlocale(LC_ALL, "rus");
	const int maxSize = 100; // Максимальный размер массива
	int n;
	std::cout << "Введите размер массива (не более " << maxSize << "): ";
	std::cin >> n;
	if (n > maxSize || n <= 0) {
		std::cout << "Ошибка: неверный размер массива\n";
>>>>>>> b5f9417c962c8aebce77444e638140933538d57f
		return 1;
<<<<<<< HEAD
=======
	}

	int arr[maxSize];
	std::cout << "Введите элементы массива:\n";
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	selectionSort(arr, n);

	std::cout << "Отсортированный массив:\n";
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
>>>>>>> parent of 8086744 (Version 2.0)
}