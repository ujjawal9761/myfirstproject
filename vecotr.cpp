#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v1;
    int n, temp, i=0;
    vector<int>::iterator it;

    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    while(i<n)
    {
        cin>>temp;
        v1.push_back(temp);
        i+=1;
    }
    cout<<"Using int"<<"\n";
    for(i=0;i!=n;i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"Using iterator"<<"\n";
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"using for each loop:\n";
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;

    sort(v1.begin(),v1.end());
    cout<<"Sorted vector:\n";
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"After poping:\n";
    v1.pop_back();
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"After insertion:\n";
    v1.insert(v1.begin()+0,0);
    for(it=v1.begin();it!=v1.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    cout<<"After erase:\n";
    v1.erase(v1.begin(),v1.begin()+3);
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"Front: "<<v1.front()<<" end: "<<v1.back();

    cout<<endl;

    cout<<"size:"<<v1.size()<<" capacity:"<<v1.capacity()<<" max_size:"<<v1.max_size();

    cout<<"Is vector empty: "<<v1.empty();
    v1.clear();
    cout<<"\n"<<"After performing clear now vector empty: "<<v1.empty();


    return 0;
}
