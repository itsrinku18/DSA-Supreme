#include<iostream>
#include<assert.h>
using namespace std;


int main(){
    // int n;
   // cin>>n;
    

    // Question No. 1. rectangle pattern
    // for(int i=0;i<n;i++){
    //     // 
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Question No.2. square pattern
    //   for loop  print row line
    // for(int row=0;row<n;row++){
    //     // for loop  print row line obseration
    //     for(int col=0;col<n;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    
    // Question No.-> 5. half pyramid
    // int n;
    // cin>> n;

    // first method 
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // second method
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // Question No.-> 6. Inverted half pyramid
    // int n;
    // cin>> n;

    // 1st method
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

   // 2nd method
    // for(int row=n;row>0;row--){
    //     for(int col=row;col>0;col--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Question No.->7 Numeric half pyramid
    // int n;
    // cin>> n;

    // first Method.
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // Second Method.
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<=row;col++){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // third Method.
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }


    // Question No. 8. Inverted Numeric half pyramid
    // int n;
    // cin>> n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // Question No. 10. Full pyramid Pattern
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     int k=0;
    //     for(int col=0;col<((2*n)-1);col++){
    //         if(col<n-row-1){
    //             cout<<" ";
    //         }
    //         else if(k<(2*row+1) ){
    //             cout<<"*";
    //             k++;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // // Question No.12  full pattern

    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     // space
    //     for(int space =0;space<n-row-1;space++){
    //         cout<<" ";
    //     }
    //     // print star
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Qurestion No.13 Inverted full
    // int n;
    // cin>>n;

    //   for(int row=0;row<n;row++){
    //     // space 
    //     for(int space=0;space<row;space++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // Question No.14 Solid star full Pattern
    // int n;
    // cin>>n;


    //  for(int row=0;row<n;row++){
    //     // space
    //     for(int space =0;space<n-row-1;space++){
    //         cout<<" ";
    //     }
    //     // print star
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int row=0;row<n;row++){
    //     // space 
    //     for(int space=0;space<row;space++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    
    // Questions No. 15. Hollow Diamond.
//     int n;
//     cin>>n;

//    // first half
//     for(int row=0;row<n;row++){
//         // space
//         for(int space=0;space<n-row-1;space++){
//             cout<<" ";
//         }
//         // star
//         for(int col=0;col<2*row+1;col++){
//            if(col==0){
//             cout<<"*";
//            }
//            else if(col==2*row){
//             cout<<"*";
//            }
//            else{
//             cout<<" ";
//            }
//         }
//         cout<<endl;

//     }
//     // second Half
//     for(int row=0;row<n;row++){
//         for(int space=0;space<row;space++){
//             cout<<" ";
//         }
//         for(int col=0;col<2*n-2*row-1;col++){
//             if(col==0){
//                 cout<<"*";
//             }
//             else if(col==2*n-2*row-2){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;

//     }


// Question No.16 Flipped Solid Pattern.

// int n;
// cin>>n;

// // first half
// for(int row=0;row<n;row++){
//     // half payrmid
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
//     // space wala full pyrmid
//     for(int col=0;col<2*row+1;col++){
//         cout<<" ";
//     }
//     // half pyramid
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
//     cout<<endl;

// }

// // bottom part
// for(int row=0;row<n;row++){
//     // half payrmid
//     for(int col=0;col<row+1;col++){
//         cout<<"*";
//     }
//     // space wala full pyrmid
//     for(int col=0;col<2*n-2*row-1;col++){
//         cout<<" ";
//     }
//     // half pyramid
//     for(int col=0;col<row+1;col++){
//         cout<<"*";
//     }
//     cout<<endl;

// }

// Questions No.17
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<row+1;
//     }
//     cout<<endl;
// }

// Question No.18
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<row+1;
//         if(col !=row){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<n-row;
//         if(col !=n-row-1){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }


// Question No.19. 
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     int col;
//     for(col=0;col<row+1;col++){
//         cout<<col+1;
//     }
//     // reverse counting
//     for( int col=row;col>=1;col--){
//         cout<<col;
//     }
//     cout<<endl;
// }


// Question No. 20
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     int col;
//     for(col=0;col<row+1;col++){
//         int ans=col+1;
//         char ch=ans+'A'-1;
//         cout<<ch;
//     }
//     // reverse counting
//     for( int col=row;col>=1;col--){
//         int ans=col;
//         char ch=ans+'A'-1;
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Question No.-> 21.
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int space=0;space<n-row-1;space++){
//         cout<<" ";
//     }
//     for(int col=0;col<row+1;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Question No.-> 22.
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int space=0;space<row;space++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// // Question No.-> 23.
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<row+1;
//     }
//     cout<<endl;
// }

// // Question No.-> 24.
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     // space
//     for(int k=0;k<n-row-1;k++){
//         cout<<" ";
//     }
//     for(int col=0;col<row+1;col++){
//         cout<<row+1;
//     }
//     cout<<endl;
// }

// // Question No.-> 25.
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     // space
//     for(int k=0;k<row;k++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<row+1;
//     }
//     cout<<endl;
// }

// // Question No.-> 26.  Floyd's Traingle Pattern.
// int n;
// cin>>n;

// int count=1;
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<count++<<" ";
//     }
//     cout<<endl;
// }

// Question no.> 27.
// int n;
// cin>>n;


// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         char ch='a'+row;
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Question no.> 28.
// int n;
// cin>>n;


// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         char ch='a'+col;
//         cout<<ch;
//     }
//     cout<<endl;
// }

// // Question No.-> 30.
// int n;
// cin>>n;

// char ch='a';
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<ch++;
//     }
    
//     cout<<endl;
// }


    // Quesstion No.-> 31
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     // space
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // Quesstion No.-> 32.
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     // space
    //     for(int k=0;k<row;k++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // Question No.33 . Full pyramid Pattern
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     //space
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
    //     // print star
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     //space
    //     for(int k=0;k<row;k++){
    //         cout<<" ";
    //     }
    //     // print star
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Question No.34# . Full pyramid Pattern
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     //space
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
    //     // print star
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //  for(int row=1;row<n;row++){
    //     //space
    //     for(int k=1;k<=row;k++){
    //         cout<<" ";
    //     }
    //     // print star
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // //Question No.->35. 
    // int n;
    // cin>>n;
    
    // for(int row=0;row<n;row++){
        
    //     // space
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
    //    int count=1;
    //     // pattern print
    //     for(int col=0;col<2*row+1;col++){
    //         if( col==0 || row==n-1){
    //             cout<<count++;
    //         }
    //        else if(col==2*row){
    //         cout<<count;
    //        }
    //        else{
    //         cout<<" ";
    //        }
    //     }
    //     cout<<endl;
    // }

     //Question No.->36 a+b=a*a+2*a*b+b*b. ??? 
    // int n;
    // cin>>n;
    
    // for(int row=1;row<=n;row++){
    //     int coef=1;
    //     // space
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<coef<<" ";
    //         coef=coef*(row+1-col+1)/col+1;          
    //        }
    //         cout<<endl;
        
    //     }
       
    // }

    // Question No.->39 Numeric palindrome Equilateral Pyramid.
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     // space
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
    //     int col;
    //     for( col=0;col<row+1;col++){
    //         cout<<col+1;
    //     }
        
    //     //reverse counting
    //     for(col=col-1;col>=1;col--){
    //         cout<<col;
    //     }
      
    //     cout<<endl;
    // }


    // Question No.->40 Solid half Diamond.
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){

    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //     for(int row=1;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Question No.-> 41. Fancy pattern1.
    // int n;
    // cin>>n;
    // assert(n<=9);
    // for(int row=0;row<n;row++){
    //     int start_num_index=8-row;
    //     int num=row+1;
    //     int count_num=num;
    //     for(int col=0;col<17;col++){
    //         if(col==start_num_index && count_num > 0){
    //             cout<<num;
    //             start_num_index+=2;
    //             count_num--;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Question No.-> 42 Fancy Pattern2.
    // int n;
    // cin>>n;

    // // upper pyramid.
    // int count=1;   
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<count;
    //         count++;
    //         if(col!=row){
    //           cout<<"*";
    //         }  
    //     }
    //     cout<<endl;
    // }

    // // lower pyrmid
    // int start=count-n; 
    // for(int row=0;row<n;row++){
    //     int k=start;
    //     for(int col=0;col<n-row;col++){
    //         cout<<k;
    //         k++;
    //         if(col!=n-row-1){
    //           cout<<"*";
    //         }

    //     }
    //     start=start-(n-row-1);
    //     cout<<endl;
    // }

    // Question No.-> 43. ??? 

    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //         if(col==0){
    //         cout<<"*";
    //         }
    //         else{
    //             cout<<col;
    //         }
    //     }
    //     // reverse printing 
    //     for(col=col-1;col>=1;col--){
    //         cout<<col;
    //         if(col==2*row-1){
    //             cout<<"*";
    //         }
    //     }

    //     cout<<endl;
    // }

    //  for(int row=1;row<n;row++){
    //     int col;
    //     for(col=0;col<n-row;col++){
    //         cout<<col+1;
    //     }
    //     // reverse printing 
    //     for(col=col-1;col>=1;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

    // Question No.-> 44. Butterfly pattern.
    // int n;
    // cin>>n;

    // // first half
    // for(int row=0;row<n;row++){
    //     //half pyrmid
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     // space
    //     for(int space=0;space<2*(n-row-1);space++){
    //         cout<<" ";
    //     }
    //     //half pyrmid
    //             for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    // // Second half

    //  for(int row=0;row<n;row++){
    //     //half pyrmid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     // space
    //     for(int space=0;space<2*row;space++){
    //         cout<<" ";
    //     }
    //     //half pyrmid
    //             for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    // Question No.-> 45.-> Numeric full pyramid.
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     // space 
    //     for(int k=0;k<n-row-1;k++){
    //         cout<<" ";
    //     }
        
    //     for(int col=0;col<row+1;col++){
    //         cout<<row+col+1;
            
    //     }
    //     int start=2*row;
    //     // reverse counting.
    //     for(int s=0;s<row;s++){
    //         cout<<start;
    //         start=start-1;
    //     }

    //     cout<<endl;
    // }
    

   

}

    


    
 

