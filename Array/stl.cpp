#include<bits/stdc++.h>
using namespace std;
void pairs(){
    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second;
    pair<int, pair<int, int>> q = {1, {3,4}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first;
    pair<int, int> arr[] = {{1, 2}, {2, 6}, {3, 8}};
    cout<<arr[1].second;
}
void Vector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5, 100);

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.begin()+4);

    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin()+1, 2, 10);




}


void List(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(5);
    ls.emplace_front(4);
}

void Stack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);

    st.pop();

    stack<int>st1, st2;
    st1.swap(st2);
}

void Queue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back()+=5;
    cout<<q.back();
    cout<<q.front();
    q.pop();
    cout<<q.front();

}

void PQ(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.emplace(3);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.emplace(10);
    
}
void Set(){
    set<int> st;
    st.insert(1);
    st.emplace(3);

}
void Multiset{
    multiset<int> ms;
    ms.insert(1);
    ms.erase(1);



}
void uset{
    unordered_set<int> us;

}

void map(){
    map<int, int> mp;
    map<int, pair<int,int>> mp;
    map<pair<int,int>, int> mp;

    mp[1] = 2;
    mp.emplace({3, 1});
    mp.insert({2,4});
    
}
int main(){
    pairs();
    return 0;
}