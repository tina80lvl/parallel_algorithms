//
// Created by  Valentina Smirnova on 17.01.2022.
//

#ifndef PARALLEL_ALGORITHMS_QSORT_H
#define PARALLEL_ALGORITHMS_QSORT_H


#include <utility>
#include <vector>

class QSort {
public:
    QSort(std::vector<int> vec) : vec(vec) {};
    virtual void sort(size_t start, size_t end) = 0;
    void print_vector();

    std::vector<int> vec;
};

#endif //PARALLEL_ALGORITHMS_QSORT_H
