#include<iostream>
using namespace std;



int main(){

   // Question No.->4. Hollow Sqaure Pattern.
   // int n;
   //  cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==0 ||i==n-1 ||j==0 || j==n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }

            
    //     }
    // cout<<endl;
    // }


    // hallow square star pattern
    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     if(i==0 || i==n-1){
    //         for( int j=0;j<n;j++){
    //             cout<<"*";
    //         }
           
    //     }
    //     else{
    //         // print remaing part
    //         // print first star
    //         cout<<"*";
    //         // print space betwen first and last star
    //         for(int s=0;s<n-2;s++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


   // Question No.-> 3. hollow rectangle
    // int rowCount,colCount;
    // cin>>rowCount;
    // cin>>colCount;
    // for(int row=0;row<rowCount;row++){
    //      if(row==0 || row==rowCount-1 ){
    //     for(int col=0;col<colCount;col++){
    //        {
    //             cout<<"* ";

    //         }
    //     }       
    //     }
    //     else{
    //         cout<<"* ";
    //         for(int space=0;space<colCount-2;space++){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //       cout<<endl;
    // }


    // Question No.-9.  Hollow Inverted half Pyramid
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         if(row==0 || col==0 || col==n-row-1){
    //             cout<< "*";
    //         }
    //         else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Question No. 11.  Hollow Full Pyramid
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     int k=0;
    //     for(int col=0;col<2*n-1;col++){
    //         if(col<n-row-1){
    //             cout<<" ";
    //         }
    //         else if(k<2*row+1){
    //             if(k==0 || k==2*row || row==n-1){
    //                 cout<<"*";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //             k++;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Question No.->37.
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         if(col==0 || col==row || row==n-1){
    //           cout<<col+1<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Question No.-> 38.

    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=row+1;col<=n;col++){
    //        if(col==row+1|| col==n || row==0 ){
    //         cout<<col;
    //        }                 
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

     // Question No.-> 46. Numeric Hollow Pyramid.

     int n;
     cin>>n;

     for(int row=0;row<n;row++){
        //space
        for(int k=0;k<n-row-1;k++){
            cout<<" ";
        }
        // counting pyramid
        int start=1;
        for(int col=0;col<2*row+1;col++){
           if(row==0 || row==n-1){
            if(col %2 ==0){
                //even
                cout<<start;
                start=start+1;
            }
            else{
                //odd
                cout<<" ";
            }
           }
           else{
            // first col
            if(col==0 ){
                cout<<1;
            }

            else if(col==2*row){
                cout<<row+1;
            }
            else{
                cout<<" ";
            }

           }
        }

        cout<<endl;

     }

}