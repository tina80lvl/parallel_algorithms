#include "qsort_seq.h"

int main() {
    std::vector<int> v = {5, 2, 3, 6, 3, 1};
    QSortSeq seq_object(v);
    seq_object.print_vector();
    seq_object.sort(0, 6);
    seq_object.print_vector();

    return 0;
}
