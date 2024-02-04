
#include<iostream>
using namespace std;

void printHalfStarLeftPattern(int n){
    // printHalfStarLeftPattern like as ---> 
    /*

     *
     **
     ***
     ****
     *****

    */
   // for ->use row
    for(int i=1;i<=n;i++){
        // for ->use colunm
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printHalfStarRightPattern(int n){
    // printHalfStarLeftPattern like as ---> 
    /*

         *
        **
       ***
      ****
     *****
        
    */
   // for ->use row
    for(int i=1;i<=n;i++){
        // for use for space
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        // for ->use colunm
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printInvertedHalfStarLeftPattern(int n){
    // printInvertedHalfStarLeftPattern like as --->
    /*
      *****
      ****
      ***
      **
      *

    */

   for(int i=n;i>=1;i--){
    for(int j=i;j>=1;j--){
        cout<<"*";
    }
    cout<<endl;
   }

}

void printInvertedHalfStarRightPattern(int n){
    // printInvertedHalfStarLeftPattern like as --->
    /*
      *****
       ****
        ***
         **
          *

    */

   // for -> use for row
   for(int i=n;i>=1;i--){
    //for -> use for space
     for(int s=n-i;s>0;s--){
        cout<<" ";
     }
    // for -> use for colunm
    for(int j=i;j>=1;j--){
        cout<<"*";
    }
    cout<<endl;
   }

}


void printFullTriangleOrPyramidPattern(int n){
    // printFullTriangleOrPyramidPattern as like
     /*
           *
          * *
         * * *
        * * * *
       * * * * *

     */
    
    for(int i=1;i<=n;i++){
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


void printFullTriangleOrPyramidPatternRevrse(int n){
    // printFullTriangleOrPyramidPattern as like
     /*

       * * * * *
        * * * *
         * * *
          * *
           *

     */
    
    for(int i=n;i>=1;i--){
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void printPascalTrianglePattern(int n){
    // Pascal triangle look like --->
   /* 
            1
           1 1
          1 2 1
         1 3 3 1
        1 4 6 4 1

    */

   for(int i=1;i<=n;i++){
    int coef=1;
    // space
    for(int s=n-i;s>0;s--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<coef<<" ";
        coef=coef*(i-j)/j;
    }
    cout<<endl;
   }

}

void printHallowDiamonPattern(int n){
 // left top triangle
for(int i=0;i<n;i++){
    for(int j=0;j<(n*2);j++){
        if(i+j<=n-1)  // upper left triangle
        cout<<"*";
        else
        cout<<" ";

        if((i+n)<=j) // upper right trinagle
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}

for(int i=0;i<n;i++){
    for(int j=0;j<(2*n);j++){
        if(i>=j) // bottom left trinagle
        cout<<"*";
        else
        cout<<" ";
        if(i>=(2*n-1)-j) // bottom right triangle
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}
}

void printNumberPyramid(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}

void printNumberPyramidReverse(int n){
    for(int i=n;i>=1;i--){
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void printDiamondStarPattern(int n){
    for(int i=1;i<=n;i++){
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++){
        cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

   

}

void printDiamondStarPattern1(int n){
    for(int i=1;i<=n;i++){
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++){
        cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int s=1;s<=i;s++){
            cout<<" ";
        }
        for(int j=1;j<=(n-i)*2-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printHollowSquarePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // print star only first and last row
            if(i==1 || i==n){
                cout<<"*";
            }
            else{
                        // print star only first and last colunm
            if(j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
  }
}

void printPyramidstarPattern(int n){
    for(int i=1;i<=n;i++){
        // space 
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printPyramidstarPatternReverse(int n){
    for(int i=n;i>=1;i--){
        // space 
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printStarPattern(int n){
    // upper triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // bottom triangle

      for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    // cout<<"printHalfStarLeftPattern -->"<<endl;
    // printHalfStarLeftPattern(n);

    // cout<<"printHalfStarLeftPattern -->"<<endl;
    // printHalfStarRightPattern(n);

    // cout<<"printInvertedHalfStarLeftPattern --->"<<endl;
    // printInvertedHalfStarLeftPattern(n);

    // cout<<"printInvertedHalfStarRightPattern --->"<<endl;
    // printInvertedHalfStarRightPattern(n);

    // cout<<"printFullTriangleOrPyramidPattern --->"<<endl;
    // printFullTriangleOrPyramidPattern(n);

    // cout<<"printFullTriangleOrPyramidPatternRevrse --->"<<endl;
    // printFullTriangleOrPyramidPatternRevrse(n);

    //  cout<<"printPascalTrianglePattern --->"<<endl;
    // printPascalTrianglePattern(n);

    //  cout<<"printHallowDiamonPattern --->"<<endl;
    // printHallowDiamonPattern(n);

    // cout<<"printNumberPyramid --->"<<endl;
    // printNumberPyramid(n);
   

    //  cout<<"printNumberPyramidReverse --->"<<endl;
    //  printNumberPyramidReverse(n);

    //  cout<<"printDiamondStarPattern --->"<<endl;
    //  printDiamondStarPattern(n);

    //  cout<<"printDiamondStarPattern1 --->"<<endl;
    //  printDiamondStarPattern1(n);

    //  cout<<"printHollowSquarePattern --->"<<endl;
    //  printHollowSquarePattern(n);

    //   cout<<"printPyramidstarPattern --->"<<endl;
    //   printPyramidstarPattern(n);

    //   cout<<"printPyramidstarPatternReverse --->"<<endl;
    //   printPyramidstarPatternReverse(n);

    //   cout<<"printStarPattern --->"<<endl;
    //   printStarPattern(n);


    

    

    
    return 0;

 
}
