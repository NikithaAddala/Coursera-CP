int printTriangle(int size) {
  int starCount = 0;
  for(int i = 0; i < size; ++i) {
    for(int j = 0; j <= i; ++j) {
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
  //now print "Here is a triangle with height 7\n"
  printf("Here is a triangle with height 7\n");
  //then call printTriangle, passing in 7, and assign the result to numStars
  numStars = printTriangle(7);
  //finally, print "That triangle had %d total stars\n", such that the %d
  //prints the value of numStars
  printf("That triangle had %d total stars\n", numStars);

  return 0;
}
