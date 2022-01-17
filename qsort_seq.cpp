
#import "qsort_seq.h"

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

size_t QSortSeq::partition (size_t low, size_t high)
{
    int pivot = vec[high];    // pivot
    size_t i = (low - 1);  // Index of smaller element

    for (size_t j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (vec[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&vec[i], &vec[j]);
        }
    }
    swap(&vec[i + 1], &vec[high]);
    return (i + 1);
}

void QSortSeq::sort(size_t low, size_t high) {
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        size_t pi = QSortSeq::partition(low, high);

        // Separately sort elements before
        // partition and after partition
        QSortSeq::sort(low, pi - 1);
        QSortSeq::sort(pi + 1, high);
    }
}