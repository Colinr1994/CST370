public class CommonElements

{

     // main method

     public static void main(String[] args)

     {

          // Declare two arrays

          int a[] = { 2, 5, 5, 5 };

          int b[] = { 2, 2, 3, 5, 5, 7 };

          // Declare required variables

          int i = 0;

          int j = 0;

          // Display a output message

          System.out.println("Common elements are:");



          // use while loop, to check the

          // array elements

          while (i < a.length && j < b.length)

          {

              if (a[i] == b[j])

              {

                   // display an array element

                    System.out.println(a[i]);

                    // Increment variables

                    i++;

                   j++;

              } // end of if

              else if (a[i] > b[j])

              {

                   j++;

              } // end of else-if

              else

              {

                   i++;

              } // end of else

          } // end of while

     } // end of main method

} // end of class
