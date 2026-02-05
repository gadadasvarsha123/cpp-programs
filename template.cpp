#include <iostream>
using namespace std;

template<class T>
T findmax(T a,T b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    cout<<"Max of integers: "<<findmax(10,20)<<endl;
    cout<<"Max of floats: "<<findmax(5.5f,3.2f)<<endl;
    cout<<"Max of characters: "<<findmax('A','Z')<<endl;

    return 0;
}