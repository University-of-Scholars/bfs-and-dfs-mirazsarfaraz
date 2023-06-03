#include<bits/stdc++.h>
using namespace std;

int main()
{   //Step-1
    stack<int> st;

    //Step-2
    for(int i=1; i<=10; ++i)
    {
        st.push(i);
    }
    //step-3
    //print the size of stack
    cout<<"Size of stack: "<<st.size()<<"\n";
    //Step-4
    st.pop();
    st.pop();
    cout<<"Size of stack: "<<st.size()<<"\n";

    ///Step-5
    cout<<"Top element: "<<st.top()<<"\n";

    ///Step-6
    cout<<"Printing all elements of stack\n";

    while(!st.empty())
    {
        int x = st.top();
        cout<<x<<" ";
        st.pop();
    }


    return 0;
}
