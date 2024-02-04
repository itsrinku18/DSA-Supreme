#include<iostream>
using namespace std;

// Debug 1.The below code snippet has some errors. 
//Let’s debug it and make it compile & run successfully.

// int main() {
//     int i=0;
//     i=i+1;
//     cout<<i;
//     /*print i *///i=i+1
//     cout<<++i;

   
// }

// Debug 2. Below code should print the sum of ‘i’ and ‘j’.

// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<(i+j);
// }

// Debug 3. Find perimeter of a rectangle

// int main() {
// 	float l, b,P;
// 	P = 2*(l+b);
// 	printf("Perimeter=%f", P);
// }

// Debug 4. Print solid square pattern.
 
//  int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=0;j<n;++j){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//  }

 // Debug 5. Check given number is Prime or not.

//   int main(){
//     int n;
//     bool isPrime=true;
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime){
//         cout<<"Prime"<<endl;
//     }
//     else{
//         cout<<"Not Prime"<<endl;
//     }
//     return 0;
//   }

// Debug 6. Print Numeric Hollow Inverted Half Pyramid

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j== n || i==0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;

//     }
// }

// Debug 7. Print following pattern.

// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < 2 * i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// Debug 8.

int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        int k=0;
        for (int j=0; j<n*2-1; ++j) {
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k < 2*i+1){
                if(k==0 || k == 2*i || i == n - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}



