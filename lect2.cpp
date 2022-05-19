#include <iostream>
using namespace std;

int main(){
 
 //conditions and loops
    // int a= 5;
    // int b=10;

    // if (a>b){
    //     cout<<"a is greater"<<endl;
    // }
    // else{
    //     cout<<"b is greater"<<endl;
    // }

    // int c;
    // cin>>c;
    // cout<<"valur of c is:"<<c<<endl;

    //if a is poditive
    
    // int a;

    // cin>>a;

    // if (a>0){
    //     cout<<"A is positive"<<endl; 
    // }
    // else{
    //     cout<<"A is negative"<<endl;
    // }


    // int a,b;
    // cin>>a>>b;
    // cout<<"value of a and b is "<<a<<","<<b<<endl;

    //if and else conditions
    // int a;
    // cout<<"enter your age: "<<endl;
    // cin>>a;
    // if(a>=18){
    //     cout<<"your able to vote"<<endl;
    // }
    // else{
    //     cout<<"your not able to vote your under age"<<endl;
    // }

    // int b;
    // cout<<"enter a number"<<endl;
    // cin>>b;

    // if(b>0){
    //     cout<<"input value is Positive"<<endl;
    // }

    // else if(b==0){
    //     cout<<"b is zero"<<endl;
    // }

    // else{
    //     cout<<"b is negative"<<endl;
    // }


    

    //while loop

    // int c;
    // cout<<"no to be printed: "<<endl;
    // cin>>c;

    // int i = 1;

    // while(i<=c){
    //     cout<<i<<""<<endl;
    //     i+=1;
    // }



    //find sum of numbers till N
    // int N;
    // cout<<"enter no's to be added"<<endl;
    // cin>>N;

    // int sum =0;
    // int i=1;
    // while(i<=N){
    //     sum+=i;
    //     i+=2;
    // }
    // cout<<"Value of sum is: "<<sum;


    //find sum of all even numbers till N

    // int n;
    // cin>>n;

    // int sum=0;
    // int i =1;

    // if((n/2)==true){
    //     while(i<=n){
    //         sum+=i;
    //         i+=1;
    //     }
    //     cout<<"Sum of all even numbers are: "<<sum;
    // }
    // else{
    //     cout<<"🖕";
    // }


    //print all prime numbers till N
    int n;
    cin>>n;

    int i;
    i=2;

    while(i<n){
        if(n%i==0){
            cout<<"not prime for"<<i<<endl;
        }
        else{
            cout<<"Prime for numbers"<<i <<endl;
        }
        i+=1;
    }
    



    return 0;


 
}