
#include<iostream>
using namespace std;


void printCountingtSquarePattern1(int n){
     // Counting print In SquarePattern like as ---> 1 2 3 4,1 2 3 4,1 2 3 4,1 2 3 4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printCountingtSquarePattern2(int n){
     // Counting print In SquarePattern like as ---> 1 1 1 1,2 2 2 2,3 3 3 3,4 4 4 4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void printCountingtSquarePattern3(int n){
     // Counting print In SquarePattern like as ---> 1 2 3 4,5 6 7 8,9 10 11 12,13 14 15 16
     int value=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<value<<" ";
            value=value+1;
        }
        cout<<endl;
    }
}

void printCountingtSquarePattern4(int n){
     // Counting print In SquarePattern like as ---> 4 3 2 1,4 3 2 1,4 3 2 1 12,4 3 2 1
     
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void printCountingInvertedHalfStarLeftPattern1(int n){
// Counting print In InvertedHalfStarLeft like as ---> 4444,333 ,22  , 1
for(int i=n;i>=1;i--){
    for(int j=i;j>=1;j--){
        cout<<i<<" ";
    }
    cout<<endl;
}

}

void printCountingInvertedHalfStarLeftPattern2(int n){
// Counting print In InvertedHalfStarLeft like as ---> 1111,222 ,33  ,4
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<n-i+1<<" ";
    }
    cout<<endl;
}

}

void printCountingHalfStarRightPattern(int n){
    // Counting print In  printCountingHalfStarRightPattern like as --->    1,  22, 333,4444   
    for(int i=1;i<=n;i++){
        // for space
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void printCountingInvertedHalfStarRightPattern(int n){
    //Counting print In InvertedHalfStarLeft like as ---> 1111, 222,  33,   4
    for(int i=n;i>=1;i--){
        // for space
        for(int s=n-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<n-i+1;
        }
        cout<<endl;

    }
}


void printCountingLeftTrianglePattern1(int n){
    // Counting print In Triangle left Pattern like as ---> 1 ,2 2,3 3 3,4 4 4 4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

void printCountingLeftTrianglePattern2(int n){
    // Counting print In Triangle left Pattern like as ---> 1 ,1 2,1 2 3,1 2 3 4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printCountingLeftTrianglePattern3(int n){
    // Counting print In Triangle left Pattern like  as---> 1 ,2 3,4 5 6,7 8 9 10
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}

void printCountingLeftTrianglePattern4(int n){
     // Counting print In Triangle left Pattern like as ---> 1 ,2 3,3 4 5 ,4 5 6 7
    for(int i=1;i<=n;i++){
       int count=i;
       for(int j=1;j<=i;j++){
        cout<<count<<" ";
        count=count+1;
       }
       cout<<endl;
    }
}

void printCountingLeftTrianglePattern5(int n){
     // Counting print In Triangle left Pattern like as ---> 1 ,2 1,3 2 1,4 3 2 1
    for(int i=1;i<=n;i++){
        // for(int j=i;j>=1;j--){
        //     cout<<j<<" ";
        // }
        // OR

           for(int j=1;j<=i;j++){
            cout<<i-j+1<<" ";
           }

        cout<<endl;
    }
}

void printNumberTraingle(int n){
    // for row
    for(int i=1;i<=n;i++){
        // for space
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        // left triangle
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // right triangle
        for(int m=i-1;m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
}

void printAlphabetSquarePattern1(int n){
    // Albhabet Square Pattern like as ---> A A A,B B B,C C C
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          //  cout<<ch<<" ";
          // OR
          char ch1='A'+i-1;
          cout<<ch1<<" ";
        }
       // ch++;
        cout<<endl;
    }
}

void printAlphabetSquarePattern2(int n){
    // Albhabet Square Pattern like as ---> A B C,A B C,A B C
    
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        
        cout<<endl;
    }
}

void printAlphabetSquarePattern3(int n){
    // Albhabet Square Pattern like as ---> A B C,D E F,G H I
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        
        cout<<endl;
    }
}

void printAlphabetSquarePattern4(int n){
    // Albhabet Square Pattern like as ---> A B C,B C D,C D E
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch1='A'+i+j-2;
            cout<<ch1<<" ";

        }
        cout<<endl;
    }
}


void printAlphabetLeftTrianglePattern1(int n){
    // Albhabet LeftTrianglePattern Pattern like as ---> A,B B,C C C,D D D D
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }

}

void printAlphabetLeftTrianglePattern2(int n){
    // Albhabet LeftTrianglePattern Pattern like as ---> A,B C,D E F,G H I J
    char value='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value=value+1;
        }
        cout<<endl;
    }
}

void printAlphabetLeftTrianglePattern3(int n){
   // Albhabet LeftTrianglePattern Pattern like as ---> A,A B,A B C,A B C D 
   for(int i=1;i<=n;i++){
    char ch='A';
    for(int j=1;j<=i;j++){
        cout<<ch++;
    }
    cout<<endl;
   }
}

void printAlphabetLeftTrianglePattern4(int n){
    // Albhabet LeftTrianglePattern Pattern like as ---> A,B C,C D E,D E F G
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void printAlphabetLeftTrianglePattern5(int n){
    // Albhabet LeftTrianglePattern Pattern like as ---> D,C D,B C D,A B C D
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+n-i;
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }

}

void printFibonacciTriangle(int n){
    int firstTerm=0,secondTerm=1,nextTerm;
    nextTerm=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<nextTerm<<"\t ";
        }
        {
        nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
    cout<<endl;
    }
}

int main(){
int n;
cout<<"Enter the value of n :"<<endl;
cin>>n;
//  cout<<"printCountingtSquarePattern 1 ------->"<<endl;
//  printCountingtSquarePattern1(n);

//  cout<<"printCountingtSquarePattern 2 ------->"<<endl;
//  printCountingtSquarePattern2(n);

//  cout<<"printCountingtSquarePattern 3 ------->"<<endl;
//  printCountingtSquarePattern3(n);

//  cout<<"printCountingtSquarePattern 4 ------->"<<endl;
//  printCountingtSquarePattern4(n);


//  cout<<"printCountingInvertedHalfStarLeftPattern 1 ------->"<<endl;
//  printCountingInvertedHalfStarLeftPattern1(n);

//  cout<<"printCountingInvertedHalfStarLeftPattern 2 ------->"<<endl;
//  printCountingInvertedHalfStarLeftPattern2(n);

//  cout<<"printCountingHalfStarRightPattern  ------->"<<endl;
//  printCountingHalfStarRightPattern(n);

//  cout<<"printCountingInvertedHalfStarRightPattern  ------->"<<endl;
//  printCountingInvertedHalfStarRightPattern(n);

//  cout<<"printNumberTraingle  ------->"<<endl;
//  printNumberTraingle(n);

 cout<<"printFibonacciTriangle  ------->"<<endl;
 printFibonacciTriangle(n);



//  cout<<"printCountingHalfStarRightPattern  ------->"<<endl;
// printCountingHalfStarRightPattern(n);



//  cout<<"printCountingLeftTrianglePattern 1 ------->"<<endl;
//  printCountingLeftTrianglePattern1(n);

//  cout<<"printCountingLeftTrianglePattern 2 ------->"<<endl;
//  printCountingLeftTrianglePattern2(n);

//  cout<<"printCountingLeftTrianglePattern 3 ------->"<<endl;
//  printCountingLeftTrianglePattern3(n);

//  cout<<"printCountingLeftTrianglePattern 4 ------->"<<endl;
//  printCountingLeftTrianglePattern4(n);

//  cout<<"printCountingLeftTrianglePattern 5 ------->"<<endl;
//  printCountingLeftTrianglePattern5(n);


//  cout<<"AlphabetSquarePattern 1 ------->"<<endl;
//  printAlphabetSquarePattern1(n);

//  cout<<"AlphabetSquarePattern 2 ------->"<<endl;
//  printAlphabetSquarePattern2(n);

//  cout<<"AlphabetSquarePattern 3 ------->"<<endl;
//  printAlphabetSquarePattern3(n);

//  cout<<"AlphabetSquarePattern 4 ------->"<<endl;
//  printAlphabetSquarePattern4(n);

//  cout<<"AlphabetLeftTrianglePattern 1 ------->"<<endl;
//  printAlphabetLeftTrianglePattern1(n);

//  cout<<"AlphabetLeftTrianglePattern 2 ------->"<<endl;
//  printAlphabetLeftTrianglePattern2(n);

//  cout<<"AlphabetLeftTrianglePattern 3 ------->"<<endl;
//  printAlphabetLeftTrianglePattern3(n);

//  cout<<"AlphabetLeftTrianglePattern 4 ------->"<<endl;
//  printAlphabetLeftTrianglePattern4(n);

//  cout<<"AlphabetLeftTrianglePattern 5 ------->"<<endl;
//  printAlphabetLeftTrianglePattern5(n);




 

   
   
   
   



 

}