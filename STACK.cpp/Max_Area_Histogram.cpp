#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void printVectorr(vector<int> vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
}
void MaxArea(vector<int> height){
    stack<int> s;
    int n=height.size();
    vector<int> nsL(n);//assing the size equal to height
    vector<int> nsR(n);

   s.push(0);
   nsL[0]=-1;
   for (int i = 0; i < height.size(); i++)
   {
      int curr=height[i];
      while (!s.empty() && curr <= height[s.top()])
      {
         s.pop();
      }
      if (s.empty())
      {
         nsL[i]=-1;
      }
      else{
        nsL[i]=s.top();
      }
      
      s.push(i);
   }
   
   printVectorr(nsL);
   //Lets clear the stack so we push Next smaller right also
   while(!s.empty())
   {
    s.pop();
   }

   nsR[n-1]=n;
   s.push(n-1);
   for (int i = n-2; i >=0; i--)
   {
     int curr=height[i];
     while (!s.empty() && curr <= height[s.top()])
     {
        s.pop();
     }
     if (s.empty())
     {
        nsR[i]=n; //this is -1 but it does not create any mistake during width calculation we assign it as n
     }
     else{
        nsR[i]=s.top();
     }
     
     s.push(i);

   }
   
   printVectorr(nsR);
   int maxAreaa=0;
   for (int i = 0; i < height.size(); i++)
   {
     int hgt=height[i]; 
     int width=nsR[i] - nsL[i] - 1;
     int Area=hgt * width;

      maxAreaa=max(maxAreaa,Area);
     
   }
    cout<<"Maximum Area of the given Histogram is ="<<maxAreaa<<endl;
   
   
   
}


int main(){
    vector<int> Height={5,4,7,8,2,3,1,4};  
    MaxArea(Height);
    return 0;
}


