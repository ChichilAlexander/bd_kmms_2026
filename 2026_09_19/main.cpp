#include <iostream>
#include <vector>
#include "io.hpp"
#include "sortings.hpp"

int main() {
    int arr_size;
    std::cout << "Введите длину масива:";
    std::cin >> arr_size;
    int arr[arr_size];
    std::cout<<"Введите элементы массива:";
    for (int i=0;i<arr_size; i++){
       std::cin >> arr[i];
    }
    biv::print_array("Массив до сортировки:", arr, arr_size);
    biv::bubble_sort(arr, arr_size);
    biv::print_array("Массив после сортировки:", arr, arr_size);
}




