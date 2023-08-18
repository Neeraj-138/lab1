#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string bin1,bin2;
    cout<<"Enter the 1st binary number ";
    cin>>bin1;
    cout<<"Enter the 2nd binary number ";
    cin>>bin2;
    int i=bin1.length()-1;
    int j=bin2.length()-1;
    int carry=0,value,sum=0;
    vector<int>ans;
    while(i>=0||j>=0)
    {
        sum=bin1[i]+bin2[2]+carry;
        value=sum%2;
        carry=sum/2;
        ans.push_back(value);
        i--;
        j--;
    }
    if(carry==1)
    {
        ans.push_back(carry);

    }
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}