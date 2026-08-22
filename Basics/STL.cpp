#include<bits/stdc++.h>     // this includes all the header files in c++
#include<utility>       // this is the header for the pair
#include<vector>        // header file for VECTORS
using namespace std;

void explainPair(){
    pair<int,int> p={1,3};      // defining the pair; the pair is stored in the variable 'p' here;
    pair<char,char> c={'a','b'};    // can be used to store any data type i.e. string, long etc.
    cout<< p.first<<" "<< p.second<<endl;      // to access the values in the pair
    cout<<c.first<<" "<<c.second<<endl;

    // nested pair
    pair<int, pair<int,int>> p1={1,{3,4}}; // we can store as many values using this nested property
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl; // accessing the nested pair

    // creating an array
    pair<int, int> arr[]={{1,2},{6,9},{3,5}};
    cout<<arr[1].first<<" "<<arr[2].second<<endl;
}
void explainVector(){
    vector<int> v={10,20,35,66}; // <syntax> storing data in a vector
    cout<< v.at(0)<<" "<<v[1]<<" "<< v.at(2)<<endl;   // either v.at(i) or v[i] is used to access individual pos.

    // using an ITERATOR 
    vector<int>::iterator it=v.begin();     //<syntax to create an iterator
    cout<< *v.begin()<<endl;   // v.begin() is used to point at the beginning of the container
    cout<< *it<<endl;     // 'it' is a pointer used here
    
    //moving an iterator
    it++;
    cout<< *it<<endl;    // it is moved by one pos
    it=it+2;
    cout<< *it<<endl;    // 'it' can be incremented as much as possible

    it=v.end();   //  v.end points the memory after the vector
    it--;      // it-- is the last element in the vector
    cout<< *it<<endl;   // there are also v.rend() <which is reverse_end> v.rbegin()<reverse_begin> 
    

    
    v.emplace_back(100);  // vectors have dynamic memory so it can be pushed further and values added in it
    v.push_back(45);      //push_back() and emplace_back() is used to push values
    v.emplace_back(200);
    v.pop_back();      // deletes the last element from vector
     
     
    //using loops to access all values
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){   // this is a way to use an iterator using loop
        cout<< *it<<" ";
    }cout<<"-> method 1"<<endl;

    for(auto it=v.begin();it!=v.end();it++){   //auto automatically figures out the correct   iterator type.
        cout<< *it<<" ";     
    }cout<<"-> method 2"<<endl;
    for(int i:v){    //this is another way to access elements of a vector
        cout<<i<<" ";
    }cout<<"-> method 3"<<endl;

    
    // deletion function
    v.erase(v.begin()+1);   // v.erase(address)
        for(int i:v){    
             cout<<i<<" ";
        }cout<<endl;    //10 35 66 100 45
    v.erase(v.begin()+2,v.end()-1); // from v.begin()+2 to vend()-1 will be deleted [start_address,end_address)
        for(int i:v){    
             cout<<i<<" ";
        }cout<<endl;    //10 35 45

    // insertion function
    vector<int> v1(2,100);   //{100,100}
    v1.insert(v1.begin(),300);    //{300,100,100}
    v1.insert(v1.begin()+1,2,10);  //{300,10,10,100,100}
    vector<int> copy(2,50); //{50,50}                   
    copy.insert(copy.begin()+1,v1.begin(),v1.end());  //{50,300,10,10,100,100,50}
    for(auto i:copy){
        cout<<i<<" ";
    }cout<<endl;

    // other functions
    v1.swap(copy);// swap f^n swaps the values of v1 with copy
        for(auto i:copy){
          cout<<i<<" ";
        }cout<<endl;
    v1.clear(); // clears the whole vector 
}
void explainList(){
    list<int> ls;       //declaring a list
    ls.push_back(2);    //{2}
    ls.emplace_back(4);  // {2,4}

    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(10); //{10,5,2,4}
    for(auto i:ls){
        cout<< i<<" ";
    }cout<<endl;

    // rest of the functions are same as of vectors...

}
void explainDeque(){
    //all the functions are same as of vectors and list
    //deque is used to implement both stack and queue
}
void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(4);  //{4,2,1}
    
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.emplace(5);
    cout<<st.top()<<endl;

    cout<<st.empty()<<endl;
    for(int i=0;i<3;i++){
        st.pop();
    }
    cout<<st.empty();

}
void explainQueue(){
    // queue follows FIFO whereas stack follows LIFO
    // rest all are same
    // functions like push(), pop(), empty(), size(), emplace() are same
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(4);  //{1,2,4}
    cout<<q.front()<<endl; // 1
    cout<<q.back()<<endl;  // 4
    q.pop();
    cout<<q.front()<<endl; // 2
    cout<<q.back()<<endl;  // 4
    // all the functions are same as of stack
    // but here we use front() and back() instead of top()
    
}
void explainPQueue(){
    // by default it is a max heap
    priority_queue<int> pq; //max heap
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.push(1); //{8,5,2,1} highest priority element at the top

    cout<<pq.top()<<endl; // 8 as it is max heap
    pq.pop(); // removes 8
    cout<<pq.top()<<endl; //5

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(5);
    minheap.push(2);
    minheap.push(8);
    minheap.push(1);

    cout<<minheap.top()<<endl; // 1
    minheap.pop();
    cout<<minheap.top()<<endl; //2
}
void explainSet(){
        // all functions are same as of maps
        // set only stores unique elements
    set<int> s;
    s.insert(1); //{1}
    s.insert(2); //{1,2}
    s.insert(2); //{1,2}  no effect as 2 is already present
    s.insert(4); //{1,2,4}
    s.insert(3); //{1,2,3,4} always sorted order
    for(auto i:s){
        cout<< i<<" ";
    }cout<<endl;
    
    //deletion
    s.erase(2); //{1,3,4}
    auto it=s.find(3); // returns the address of 3
    cout<< *it<< endl;   // 3
    it= s.find(5); // returns the address of end as 5 is not present

     it=s.lower_bound(3); // >=3
    cout<< *it<<endl; //3
    auto it2=s.upper_bound(3); // >3    
    cout<< *it2<<endl; //4
    // lower_bound and upper_bound functions are used to find the address of a particular element
    //lower_bound returns the address of the element which is greater than or equal to the given element
    // upper_bound returns the address of the element which is strictly greater than the given element

}
void explainMap(){
    map<int, int> m; // key-value pair
    m[1]=100;   //it stores as key=1,value=100 i.e. {1,100}
    m[2]=200;   //{2,200}
    m[3]=300;   //{3,300}
    m[5]=500;   //{5,500}
    m.insert({4,400}); //{4,400}
    m.emplace(6,600); // another way to insert values
    // {1,100}, {2,200}, {3,300}, {4,400}, {5,500}, {6,600} -> sorted according to keys
    
    // accessing values
    for(auto i:m){
        cout<<"{"<< i.first<<","<< i.second<<"}"<<" "; // first is key, second is value
    }cout<<endl;
    // MAP IS ALWAYS SORTED ACCORDING TO THE KEYS
    
    map<int,int>::iterator it=m.begin();
    it++;
    cout<< it->first<<" "<< it->second<<endl; // accessing using iterator
       
    cout<< m[5]<<" "<<m.at(6)<<endl; // another way to access values using key
    m[1]=900; //updating value of key 1
    cout<< m[1]<<endl;
    cout<<m[10]<<endl; // if key not present, it will insert the key with value 0
}
//stl Functions
bool comp(pair<int, int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;  // sort according to second element of pair
    if(p1.second>p2.second) return false;
    // if second elements are equal, sort according to first element
    if(p1.first>p2.first) return true;
    return false;   
}
void sortFunction(){
    pair<int, int> p[]={{1,2},{3,1},{4,5},{2,2}};
    int n=sizeof(p)/sizeof(p[0]);
    sort(p,p+n,comp); // custom sort function to sort according to second element of pair
    for(auto i:p){
        cout<<"{"<<i.first<<","<< i.second<<"}"<<" ";
    }cout<<endl;

    int a[]={20,34,12,7,64,9};
    n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
}



int main(){
    //explainPair();
    explainVector(); 
    //explainList();
    //explainStack();
    //explainQueue();
    //explainPQueue();
    //explainMap();
    //sortFunction();

    return 0;
}