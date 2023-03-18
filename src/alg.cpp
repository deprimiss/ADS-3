// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int l = 0;
    int r = --size;
    int count = 0;
    while (l <= r) {
        int sr = (l + r) / 2;
        if (value < *(arr + sr)) {
            r = sr - 1;
        } else if (value > *(arr + sr)) {
            l = sr + 1;
        } else {
            for (int i = 1; *(arr + sr) == *(arr + (sr - i)); i++)
                count++;
            for (int i = 0; *(arr + sr) == *(arr + (sr + i)); i++)
                count++;
            return count;
        }
    }
  return 0; // если ничего не найдено
}
