#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, m;
    cin>>h>>m;
    double angle = abs(30*h - (11/2.0)*m);

    if(angle<=180){
        cout<<angle;
    }
    else{
        cout<<360-angle;
    }
    

    return 0;
}