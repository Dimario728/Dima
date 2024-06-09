#include <iostream>




=======
int main() {
	setlocale(LC_ALL, "rus");
	const int maxSize = 100; // Ìàêñèìàëüíûé ðàçìåð ìàññèâà
	int n;
	std::cout << "Ââåäèòå ðàçìåð ìàññèâà (íå áîëåå " << maxSize << "): ";
	std::cin >> n;
	if (n > maxSize || n <= 0) {
		std::cout << "Îøèáêà: íåâåðíûé ðàçìåð ìàññèâà\n";
>>>>>>> b5f9417c962c8aebce77444e638140933538d57f
		return 1;

=======
	}

	int arr[maxSize];
	std::cout << "Ââåäèòå ýëåìåíòû ìàññèâà:\n";
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	selectionSort(arr, n);

	std::cout << "Îòñîðòèðîâàííûé ìàññèâ:\n";
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;

}
