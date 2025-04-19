#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(12);
    q.push(13);
    q.push(17);
    q.push(101);
    q.push(3);

    // value print
    int n = q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<q.size()<<endl;
}
