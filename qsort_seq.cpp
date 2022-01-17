
#import "qsort_seq.h"


size_t QSortSeq::partition(size_t low, size_t high) {
    int x = vec[low];
    size_t i = low;
    size_t j;

    for (j = low + 1; j < high; j++) {
        if (vec[j] <= x) {
            i = i + 1;
            std::swap(vec[i], vec[j]);
        }

    }

    std::swap(vec[i], vec[low]);
    return i;
}

void QSortSeq::sort(size_t low, size_t high) {
    size_t r;
    if (low < high) {
        r = partition(low, high);

        QSortSeq::sort(low, r);
        QSortSeq::sort(r + 1, high);
    }
}