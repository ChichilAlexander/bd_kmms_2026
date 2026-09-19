#include <iostream>
#include <vector>

void bubble_sort(int* const arr, const int size);
void print_array(const char* const comment, int* arr, const int size);

int main() {
    int arr_size;
    std::cout << "Введите длину масива:";
    std::cin >> arr_size;
    int* arr = new int[arr_size];
    std::cout<<"Введите элементы массива:";
    for (int i=0;i<arr_size; i++){
       std::cin >> arr[i];
    }
    print_array("Массив до сортировки:", arr, arr_size);
    bubble_sort(arr, arr_size);
    print_array("Массив после сортировки:", arr, arr_size);
    delete[] arr;
}

void bubble_sort(int* const arr, const int size) {
	int temp;
	for (int i = 0; i<size-1; i++){
        for (int j = 0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
	}
}

void print_array(const char* const comment, int* arr, const int size) {
	std::cout<<comment << " ";
	for (int i = 0; i<size; i++){
        std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
}




