/* Une implementation de la recherche dichotomique
   d'un element "elem" dans un tableau ordonne "A" */

int search( int A[8], int elem)
{
  int cur ;
  
  for( cur=0; cur<8; cur++ ) {
    if ( elem == A[cur] ) {
      return(cur);
    } else {
      if ( elem < A[cur] ) {
	return(-1);
      }
    }
  }
  return(-1) ;
}

