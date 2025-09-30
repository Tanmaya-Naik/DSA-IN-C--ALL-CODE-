// #include <iostream>
// using namespace std;
// int main(){
// int i=1;
// int n;
// cout<<"Enter the number you want to print number.\n";
// cin>>n;
// for ( i = 0; i < n; i++)
// {
//     cout<<i<<endl;
// }
// return 0;

// }
 #include <iostream>
 using namespace std;
 void SubArray(int arr[],int n){
    for (int start = 0; start < n; start++)
    {
        for (int end = 0; end <=start; end++)
        {
            for (int i = 0; i <=start ; i++)
            {
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
    
 }
 int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    SubArray(arr,n);
    return 0;
 }
