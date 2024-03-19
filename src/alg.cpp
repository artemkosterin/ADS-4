// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int counter = 0;
  for (int i = 0; i < len; i++) {
      for (int j = i + 1; j < len; j++) {
          if (arr[i] + arr[j] == value) {
              counter++;
          }
      }
  }
  return counter;
  return 0;
}
int countPairs2(int *arr, int len, int value) {
  int counter = 0, right = len - 1;
  while (arr[right] > value) {
      right--;
  }
  for (int i=0; i< right; i++) {
      for (int j = right; j > i; j--) {
          if (arr[i] + arr[j] == value) {
            counter++;
          }
      }
  }
  return counter;
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int counter = 0;
  for (int i = 0; i < len; ++i) {
      int h = len - 1;
      int l = i + 1;
      int secEl = value - arr[i];
      while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] == secEl) {
          counter++;
          int mmid = mid - 1;
          while ((mmid > i) && (arr[mmid] == arr[mid])) {
            counter++;
            mmid--;
            }
          int bmid = mid + 1;
          while ((i < bmid) && (arr[bmid] == arr[mid])) {
            counter++;
            bmid++;
            }
          break;
          } else if (arr[mid] > secEl) {
              h = mid - 1;
          } else {
              l = mid + 1;
          }
      }
  }
  if (counter) {
      return counter;
  }
  return 0;
}
