#include <iostream>
#include "qsort.h"

void QSort::print_vector() {
    for (const auto &el: QSort::vec) {
        std::cout << el << ' ';
    }
    std::cout << std::endl;
}