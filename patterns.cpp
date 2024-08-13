#include <iostream>
using namespace std;
 int main(){
   /*  int a,b;
    cin >> a >> b; // cin dont read spcae tab and enter .
    // a = cin.get(); // this read space tab and enter
    cout << a+b << endl; */

/*     int a,b;
    cout << "enter the value of a: " << endl;
    cin>>a;
    cout << "ENter the value of b: " << endl;
    cin>> b;

    if (a>b){
        cout<< "A is greater" << endl;
    }
    if (b>a){
        cout << "B is greater" <<endl;
    }a
 */

/*     int a;
    cout << "enter the value of a:" << endl;
    cin >>a;

    if (a>0){
        cout <<" a is postitve" << endl;
    }
    else if (a<0) {
        cout << "a is negative"<<endl;
    }
    else{
        cout << "a is zero" <<endl;
    } */

// what is the output of this code
   /* int a = 9;
   if(a==9){
    cout<< "NINEY";
   }
   if (a>0){
    cout << " a is positive";

   }
   else{
    cout << " a is negative";
   } */
// what is the output o fthis  code
/*   int a = 2;
  int b = a +1;
  if ((a==3)==b){
    cout <<a;
  }
  else{
    cout<<a+1;
     
  } */

// what is the output of this code

/*     int a=24;
    if (a>20){
        cout << "Love";

    } // one the condition is true  the loop is terminated and output will be printed 
    else if ( a==24){
        cout << " Lovely";
    }
    else {
        cout << "sandy";
    }
    cout << a; */


// print upper and lower case if ch is between a-z or A-Z or 0-9
/* 
    char ch;
    cout << " enter the value of ch: " << endl;
    cin >> ch;

    if (ch >= 'a' && ch <='z'){
        cout << " this is lower case" << endl;
    }
    else if (ch >='A' && ch <='Z' ){
        cout << "this is upper case" << endl;
    }
    else if ( ch >= '0' && ch <= '9' ){
        cout << "This is a number" << endl;
    }
   */  
//<=============================WHILE LOOP=========================>
/* 
    int n;
    cout<< " Enter the value of n: ";
    cin>> n ;
    int i = 1;
    while (i<=n){
        cout << i << " ";
        i = i+1;
    } // 1 2 3 4 5
   */  
//<=====================================================================>
/*     // sum of n natural number with while loop
    int n;
    cin>>n;

    int i =1;
    int sum = 0;
    while (i<=n)
    {
        sum = sum +i;
        cout << sum <<endl;
        i = i+1;
    }

    cout << "the sum is: " << sum << endl;
     */

    // sum of n natural number with for formula
    /* 
    int n;
    cin>>n;

    int sum;
    sum= (n*(n+1))/2;

    cout << "the sum is: " << sum << endl;
 */
//<============================================================================>
// find the sum of all even numbers from 1 to n
/* 
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;

     
    while(i<=n){
        if (i%2==0){
        sum = sum+i;
        cout <<  i << endl;
         cout << " the sum of ever numbe is :" << sum << endl;
        }
        i = i+1;
    
   
    }
  */

//<=====================================================================>
// convert  a temperature from fahrenheit to celsius
/* 
    double fahrenheit, celsius;
    cout << " Enter temperature in fahrenheit: ";
    cin>>fahrenheit;
    
    celsius = (5.0/9.0)*(fahrenheit -32); // use 5.0/9.0 instead of 5/9  to ensure floating poitn division
    cout << " Temperature in celsius is : " << celsius <<endl; 
     */
// <=====================================================================>
// chceck whether a number is prime or not
/* 
    int n;
    cin >> n;

    int i=2;  // 2 is the first prime number and prime means that it is divisible by 1 and itself
                // so always start from 2 and end with n-1
 while (i<n){
    if (n%i==0){
          cout<<" the number is not prime for : "<< i << endl;
       }
     else{
         cout<< " the number is  prime for :  " << i << endl;
        }
          i= i+1; // move to next number // otherwise it will be infinite loop
    }
     */

// <=====================================================================>

// pattern 1
    // ***
    // ***
    // ***

/* 
   int n;
   cin >>n;

   int i =1;

   while(i<=n){  // 1st row
        int j=1;
        while(j<=n){ // 1st coloumn
             cout<<"*";
             j = j+1;
            }
    cout << endl;
    i = i+1;
   }
     */

// <=====================================================================>
// pattern 2
    // 1 1 1
    // 2 2 2
    // 3 3 3
/* 
    int n;
    cin >>n;

     int i =1;

    while(i<=n){  // 1st row
        int j=1;
        while(j<=n){ // 1st coloumn
             cout<<i << " " ;
             j = j+1;
            }
    cout << endl;
    i = i+1;
   }
     */

// <=====================================================================>
// pattern 3
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

/*     int n;
    cin >>n;
    int i = 1;

    while(i<=n){  // 1st row
        int j = 1;
        while(j<=n){ // 1st coloumn
             cout << j  << " " ;
             j = j + 1;
            }
    cout << endl;
    i = i + 1;
   }
 */

// <=====================================================================>
// pattern 4
    // 3 2 1
    // 3 2 1
    // 3 2 1
/* 
    int n;
    cin >>n;

    int i =1;

    while (i<=n){
        int j =1;
        while (j<=n){
            cout<<n-j+1;
            j=j+1; 
        }
        cout << endl;
        i=i+1;
    }
 */
// <=====================================================================>
// pattern 5
//1  2  3  4  5
//6  7  8  9  10
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25

/* 
    int n;
    cin >>n;

    int i = 1;

    int count = 1;

    while (i<=n){
        int j=1;
        while(j<=n){
            cout << count << "    " ;
            count= count + 1; //
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;

    }
 */

// <=====================================================================>
// pattern 6
// *
// * *
// * * *
// * * * *
// * * * * *

/*     int n;
    cin >>n;

    int i = 1;

    

    while (i<=n){
        int j=1;
        while(j<=i){
            cout <<"*" ;
             
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;
    } */

   // second method

   /*  int n;
    cin >>n;

    int row = 1;

    while (row<=n){
        int col=1;
        while(col<=row){
            cout <<"*" ;
             
            col = col + 1;
        }
        cout<< endl;
        row = row + 1; */

// <=====================================================================>
// pattern 7
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

/*     int n;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << i << " ";
            j=j+1;

        }
        cout << endl;
        i = i+1;
    } */
    
    //second method
/*     int n;
    cin >>n;

    int row = 1;

    while (row<=n){
        int col=1;
        while(col<=row){
            cout << row <<"" ;
             
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;

    } */
   // <=====================================================================>

// pattern 8
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15    // here we know that counting is starting so use count variable

/*     int n;
    cin>>n;
    
    int i=1;
    int count =1;

    while (i<=n){
        int j=1;
        while (j<=i){
            cout<<count<<" ";
            j=j+1;
            count=count+1;

        }
        cout<<endl;
        i=i+1;
    } */

   // <=====================================================================>
// pattern 9
// 1
// 2 3
// 3 4 5
// 4 5 6 7   
// here we know that couting is starting with row number . 

// method 1
/*  int n;
    cin>>n;
    int i =1;
    while (i<=n){
        int j=1;
        int value =i;
        while(j<=i){
            cout<<value << " ";
            j=j+1;
            value = value + 1;
        }
        cout << endl;
        i =i +1;

    }
 */
// method 2
// wihout using value varibable //
/*     int n;
    cin>>n;
    int i =1;
    while (i<=n){
        int j=0;
        //int value =i;
        while(j<=i){
            cout<<i+j << " " ;     //i+j and j=0 
            j=j+1;

            //value = value + 1;
        }
        cout << endl;
        i =i +1;

    } */

// <=====================================================================>
// pattern 10
// 1
// 2 1
// 3 2 1
// 4 3 2 1

/*     int n;
    cin>>n;

    int i =1;
    while (i<=n){
        int j= 1;
        while (j<=i){
            cout << (i-j+1) << " " ;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    } */

// <=====================================================================>
// pattern 11
// A A A
// B B B
// C C C

/*     int n;
    cin>>n;

    int i =1;
    while (i<=n){
        char ch = 'a' + i -1;   // logic
        int j=1;
        while(j<=n){
            cout<< ch ;
            j=j+1;

        }
        cout<<endl;
        i =i+1;
    } */
// <=====================================================================>
// pattern 12
// A B C
// A B C
// A B C

/*     int n;
    cin>>n;

    int i =1;
    while (i<=n){
        int j=1;
           // logic
        while(j<=n){
            char ch = 'a' + j -1;
            cout<< ch ;
            j=j+1;

        }
        cout<<endl;
        i =i+1;
    } */

// <=====================================================================>
// pattern 13
// A B C
// D E F
// G H I

/*     int n;
    cin >> n;
    int i =1;
    char ch ='A';
    while (i<=n){
        int j =1;
        
        while(j<=n){
            cout << ch;
            ch = ch +1;
            j = j +1;

        }
        cout << endl;
        i = i + 1;

    }
     */

// <=====================================================================>
// pattern 14
// A B C
// B C D
// C D E
// D E F
/*     int n;
    cin >> n;
    int i =1;
    
    while (i<=n){
        int j =1;
        
        
        while(j<=n){
            char ch ='A' +i +j -2;
            cout << ch;
            j = j +1;
        }
        cout<< endl;
        i = i+1;
    }
 */
// <=====================================================================>
// pattern 15
/* // A
// B B
// C C C
// D D D D
    int n;
    cin >> n;
    int i =1;
    
    while (i<=n){
        int j =1;    
        while(j<=i){
            char ch = ('A' + i - 1);
            cout << ch;
            j = j +1;
        }
        cout<< endl;
        i = i+1;
    } */

// <=====================================================================>
// pattern 16
// A
// B C
// D E F
// G H I J

/*     int n;
    cin >> n;
    int i =1;
    char ch = 'A';
    
    while (i<=n){
        int j=1;
        
        while (j<=i){
           
            cout << ch;
            j = j + 1;
            ch = ch + 1;

        }
        cout<< endl;
        i = i+1;

    } */

// <=====================================================================>
// pattern 17
// A
// B C
// C D E
// D E F G
/*     int n;
    cin>> n;
    int i =1;
    
    while (i<=n){
        int j =1;
        while (j<=i){
            char ch = 'A' + i + j-2;
            cout<<ch;
            j=j+1;
        }
        cout<< endl;
        i = i+1;
    } */

// <=====================================================================>
// pattern 18
// D
// C D
// B C D
// A B C D

/*     int n;
    cin>> n;
    int i =1;
    
    while (i<=n){
        int j =1;
        char ch = 'A' + n - i;
        while (j<=i){
            
            cout<<ch;
            j=j+1;
            ch = ch + 1;
        }
        cout<< endl;
        i = i+1;
    }    */  

// <=====================================================================>
// pattern 19   (do it in easy  way)
// A B C
// B C D
// C D E
// D E F
/*      int n;
    cin >> n;
    int i =1;
    
    while (i<=n){
        int j =1;
        
        
        while(j<=n){
            char ch ='A' + i + j -2;
            cout << ch;
            j = j +1;
        }
        cout<< endl;
        i = i+1;
    } */

//  <=====================================================================>
// pattern 20
//      *
//    * *
//  * * *
//* * * *

/*     int n;
    cin>> n;
    int i =1;
    
    while (i<=n){

        // space print karlo
        int space = n-i; // 4-1=3
        while(space){   //value =3->2->1
            cout<<" ";
            space = space -1;
        }

        // star print karlo
        int j =1;
        while (j<=i){            
            cout<<"*";
            j=j+1;
        }
        cout<< endl;
        i = i+1;
    } */

// <=====================================================================>
// pattern 21
// * * * *
// * * *
// * *
// *

/*     int n;
    cin>> n;
    int i =0;
    
    while (i<=n){
        // star print karlo
        int star = n-i;
        while(star)
        {
            cout<<"*";
            star = star -1;
        }

    cout << endl;
    i = i+1;
    } */

// <=====================================================================>
// pattern 22   
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

/*     int n;
    cin>> n;
    int i =1;
    
    while (i<=n){

        // space print karlo 
        int space = i-1;
        while(space){
            cout<< " ";
            space= space -1;
        }

        // star print karlo
        int star = n-i+1;
        while(star)
        {
            cout<<"*";
            star = star -1;
        }

    cout << endl;
    i = i+1;
    } */

// <=====================================================================>
// pattern 23
// 1 1 1 1
//   2 2 2
//     3 3
//       4
   /*  int n;
    cin>> n;
    int i =1;
    
    while (i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space -1;
        }
        int j =1;
        while (j<=(n-i+1)){
            cout <<i;
            j=  j +1;
        }
        cout << endl;
        i = i + 1;
    } */

// <=====================================================================>
// pattern 24
//          1
//        2 2
//      3 3 3
//    4 4 4 4
//  5 5 5 5 5

/*     int n;
    cin>> n;    
    int i =1;
    
    while (i<=n){

        int space = n-i;
        while(space){
            cout<<" ";
            space = space -1;
        }

        int j =1;
        while (j<=i){
            cout <<i;
            j=  j +1;
        }
        cout << endl;
        i = i + 1;
    } */

// <=====================================================================>
// pattern 25
// 1 2 3 4 
//   2 3 4
//     3 4
//       4

/*     int n;
    cin>> n;
    int i =1;
    
    while (i<=n){
        int space = i-1;  ///
        while(space){
            cout<<" ";
            space = space -1;
        }
        int j =i;  // 
        while (j<=n){
            cout <<j;
            j=  j +1;
        }
        cout << endl;
        i = i + 1;
    } */

// <=====================================================================>
// pattern 26
//       1
//     2 3
//   4 5 6
// 7 8 9 10

/*     int n;
    cin>> n;
    int i =1;
    int count = 1;
    
    while (i<=n){
        int space = n-i;  ///
        while(space){
            cout<<" ";
            space = space -1;
        }
        int j =1;  // 
        while (j<=i){
            cout <<count;
            count = count +1;
            j=  j +1;
        }
        cout << endl;
        i = i + 1;
    } */

// <=====================================================================>
// pattern 27
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

/*     int n;
    cin>> n;
    int row =1;
    
    while (row<=n){

        // Print karo space (1st trinagle)
        int space = n-row;  ///
        while(space){
            cout<<" ";
            space = space -1;
        }

        // Print karo 2nd triangle (j)
        int j =1;  // 
        while (j<=row){
            cout <<j;
             
            j=  j +1;
        }

        // Print karo 3rd triangle
        int start = row -1;
        while (start){
            cout<< start;
            start = start -1;
        }
        cout << endl;
        row =row + 1;
    } */

// <=====================================================================>
// pattern 28
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1


/*     int n;
    cin>> n;
    int i =1;
    
    while (i<=n){
        int start=1;  // first triangle
        while (start<=n-i+1){
            cout<<start;
            start= start +1;    
        }

        int star1=2*(i-1); // middle star triangle
        while(star1){
            cout<<"*";
            star1 = star1 -1;
        }

        int j =n-i+1; // last triangle
        while (j){
            cout<<j;
            j = j -1;
        }

        cout<< endl;
        i = i+1; 

    }*/

   // second method with seperate loops for star triangles

/*     int n;
    cin >> n;
    int i = 1;

    while (i <= n) {
        // Print the first sequence of numbers
        int num1 = 1;
        while (num1 <= n - i + 1) {
            cout << num1 << " ";
            num1 = num1 + 1;
        }

        // Print the first set of stars
        int star1 = i - 1;
        while (star1) {
            cout << "* ";
            star1 = star1 - 1;
        }

        // Print the second set of stars
        int star2 = i - 1;
        while (star2) {
            cout << "* ";
            star2 = star2 - 1;
        }

        // Print the second sequence of numbers
        int num2 = n - i + 1;
        while (num2 >= 1) {
            cout << num2 << " ";
            num2 = num2 - 1;
        }

        cout << endl;
        i = i + 1; */
    

    return 0;
}



        

    return 0;
}
