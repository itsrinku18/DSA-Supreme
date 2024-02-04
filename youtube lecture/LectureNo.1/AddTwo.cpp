#include<iostream>
using namespace std;

/*
// Additon of two numbers
int main(){
    int first,second,sum;
    cout<<"Enter the number:"<<endl;
    cin>>first>>second;
    sum=first+second;
    cout<<"Sum is:"<<sum;


    return 0;

}


// Calculate Simple Interest

int main(){
    int principle,rate,time,SimpleInterest;
    cout<<"Enter the principle Value:"<<endl;
    cin>>principle;
    cout<<"Enter the rate of Interest:"<<endl;
    cin>>rate;
    cout<<"Enter the time in Year:"<<endl;
    cin>>time;
    SimpleInterest=(principle*rate*time)/100;
    cout<<"Simple Interest of your" <<principle << "is:"<<SimpleInterest;
}



// Determine  Number is even or odd
int main(){
    int number;
    cout<<"Enter the Number"<<endl;
    cin>>number;

    if(number % 2==0){
        cout<<number<<"is Even"<<endl;
    }
    else{
        cout<<number<<"is Not Even"<<endl;
    }
    return 0;
}


// Greatest number among of three Numbers

int main(){
    int a, b,c;
    cout<<"Enter value of a b c"<<endl;
    cin>>a>>b>>c;

// using else if
    // if(a>b && a>c){
    //     cout<<"A is Gretest Number";
    // }
    //  else if(b>a && b>c){
    //     cout<<"B is Greatest Number";
    // }

    // else{
    //     cout<<" C is Greatest Number";
    // }

    // using nesed if-else
    if(a>b){
        if(a>c)
            cout<<"A is Greatest Number";
        
        else
            cout<<"C is Greatest Number";
        
    }
    else{
        if(b>c)
            cout<<"B is Greatest Number";
       
        else
            cout<<" C is Greatest Number";
       

    }
    
}



// Determine if (a>b)

int main(){
    int a, b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}


// Is n is Poistive,Negative or Zero

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    if(n>0){
        cout<<"N is Poitive";
    }
    else if(n<0){
        cout<<"N is Negative";
    }
    else{
        cout<<"You Entered Zero";
    }

    return 0;

}


// check if a given trinagle is valid or not

int main(){
    int a,b,c,flag=0;
    cout<<"Value of a, b,c"<<endl;
    cin>>a>>b>>c;

    // first 
    // if(a+b>c){
    //     if(b+c>a){
    //         if(c+a>b){
    //             cout<<" Triangle is Valid"<<endl;
    //         }
    //         else{
    //              cout<<"Triangle is Invalid";
    //         }
    //     }
    //     else{
    //          cout<<"Triangle is Invalid";
    //     }
    // }
    // else{
    //     cout<<"Triangle is Invalid";
    // }
    // return 0;


    // second

    // if(a+b>c && b+c>a && c+a>b){
    //     cout<<"Triangle is valid";
    // }
    // else{
    //     cout<<"Triangle is Not valid";
    // }

    // third
     if(a+b>c){
        if(b+c>a){
            if(c+a>b){
                flag=1;
            }    
        }
    }
    if(flag==1){
        cout<<"Triangle is valid";
    }
    else{
       cout<<"Triangle is not valid"; 
    }
}


// print 1 to n numbers
int main(){
    int i=1, n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

// while
    // while(i<n){
    //     cout<<i<<endl;
    //     i++;
    // }
    // return 0;

// do- while
do{
    cout<<i<<endl;
        ++i;
}
while (i<=n);
return 0;


}



// Print Even number between 1 to n

int main(){
    int n=1,num;
    cout<<"Enter the value of num:"<<endl;
    cin>>num;

    // while(n<=num){
    //     cout<<n<<" ";
    //     n=n+2;
    // }

    // even 1 to n
    // for(n;n<num;n++){
    //     if(n % 2==0){
    //         cout<<n<<" ";
    //     }
    // }

    // odd 1 to n
    
    // print odd number as a Num value that print only that number
    for(n;n<=2*num;n++){
         if(n % 2!=0){
            cout<<n<<" ";
        }

    }
    return 0;
}


// find sum from 1 to n;
int main(){
    int n,sum=0,i=1;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    // for(int i=1;i<n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum;

    // while(i<n){
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum;

    do{
        sum=sum+i;
        i++;
        cout<<sum<<" ";
    }
    while(i<n);
    cout<<sum;
}


// find N! factorial


int main(){
    int n;
    int ans=1,num=1;
    int factorial=1;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    while(num<=n){
        ans=ans*num;
        num=num+1;
    }
    cout<<ans<<endl;

    for(int i=1;i<=n;i++){
        factorial*=i;
    }
   cout<<factorial;

}
*/

// check if n is prime 

int main(){
    int n,div;
    int flag=0;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    // while(div<n){
    //     if(n%div==0){
    //         cout<<"No"<<endl;
    //         break;
    //     }
    //     else{
    //         div=div+1;
            
    //     }  
    // }
    // cout<<"Yes";

    if(n==0 || n==1){
        flag=1;
    }

    for(div=2;div<n/2;div++){
        if(n%div==0){
            cout<<"N is Not Prime"<<endl;
            flag=1;
            break;

        }
    }
    if(flag==0){
        cout<<"N is Prime"<<endl;
    }
    else{
        cout<<"N is Not Prime"<<endl;
    }
    return 0;

}

