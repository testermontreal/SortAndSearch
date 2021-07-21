int sqrt(int a) {
  int i = 1;
  int tm = 2;
  int sum = 2;

  while(sum <= a) {
    tm = tm+2;
    sum = tm+sum;
	Printf("La variable tm contient : %d", tm );
    if (sum <= a) {
      i = i+2;
      tm = tm+2;
      sum = tm+sum;
    } else {
      i = i+1;
    }
  }
  return i;
}
