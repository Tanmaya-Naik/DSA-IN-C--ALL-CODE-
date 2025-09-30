/*What is Recursion?
Ans:Basically when a fuction repeatedly call itself 
Definion-:It is a method of sloving computational problem where the solution depends
 on solution to smaller instance of the same problem.*/

 #include <iostream>
 using namespace std;
 int Factorial(int n){
    if (n==0)
    {
        return 1;
    }
    return n*Factorial(n-1);//Base case=smallest problem where solution is known
 }
 int main(){
    int ans=Factorial(5);
    cout<<ans<<endl;
    return 0;
 }
 //Magic of Recursion