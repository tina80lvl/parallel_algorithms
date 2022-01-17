#ifndef PARALLEL_ALGORITHMS_QSORT_SEQ_H
#define PARALLEL_ALGORITHMS_QSORT_SEQ_H

#include "qsort.h"

class QSortSeq : public QSort {
public:
    QSortSeq(std::vector<int> vec) : QSort(vec) {};
    void sort(size_t start, size_t end) override;
private:
    size_t partition (size_t low, size_t high);

};

#endif //PARALLEL_ALGORITHMS_QSORT_SEQ_H
