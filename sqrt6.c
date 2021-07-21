int sqrt(int a) {
  int i = 0;
  int tm = 1;
  int sum = 1;
 
  while(sum <= a) {
    tm = tm+2;
    if (sum <= a) {
      i = i+2;
      tm = tm+2;
      sum = tm+sum;
    } else {
      i = i+1;
    }
    sum = tm+sum;
  }
  return i;
}
