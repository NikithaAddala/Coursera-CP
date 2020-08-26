int printTriangle(int size)
{
  int starCount = 0;
    for(int i = 0; i < size; ++i)
      {
        for(int j = 0; j <= i; ++j)
	  {
            printf("*");
            starCount += 1;
	  }
       printf("\n");
      }
  return starCount;
}


int main(void) {
  int numStars;
  printf("Here is a triangle with height 4\n");
  numStars = printTriangle(4);
  printf("That triangle had %d total stars\n", numStars);
  printf("Here is a triangle with height 7\n");
  numStars =  printTriangle(7);  //then call printTriangle, passing in 7, and assign the result to numStars
  printf("That triangle had %d total stars\n", numsStars);

  return 0;
}



