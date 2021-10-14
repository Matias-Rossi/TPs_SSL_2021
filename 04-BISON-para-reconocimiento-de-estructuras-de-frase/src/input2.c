/* add.c
* a simple C program
*/
      

      
    int main()
    {
        int i, sum = 0, last = 5;
       
        for ( i = 1; i <= last; i++ ) {
          sum += i;
        } /*-for-*/
        printf("sum = %d\n", sum);

        return 0;
    }

    int hola(int m, char z) {
        printf("hola");
    }