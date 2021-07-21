/* Bubble sort of a given array 'table' of 
   a given length 'l'.
 */

void sort (int * table, int l) 
{
  int i, temp, nb;
  char fini;
  fini = 0;
  nb = 0;
  while ( !fini && (nb < l-1)){      /* line 11 */
    fini = 1;
    for (i=0 ; i<l-1 ; i++)          /* line 13 */
      if (table[i] < table[i+1]){    /* line 14 */
	fini = 0;
	temp = table[i];
	table[i] = table[i + 1];
	table[i + 1] = temp;
      }
    nb++;
  }
}
