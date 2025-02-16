inline void range(int *ar, int max_len, int start, int stop, int step) {
  for (int i = 0; i < max_len && start + i * step < stop; ++i)
    ar[i] = start + i * step;
}