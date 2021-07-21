int sqrt(int a) {
  int i = 0;
  int tm = 1;
  int sum = 1;

  while(sum < a) {
    i = i+1;
    tm = tm+2;
    sum = tm+sum;
  }
  return i;
}
