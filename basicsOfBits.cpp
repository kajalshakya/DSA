#include<bits/stdc++.h>
using namespace std;
void evenOrOdd(int num){
    if(!(num&1)){
        cout<<" even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int getIthBit(int num, int i){
    int bitmask=1<<i;
    if(!(num&bitmask)){
        return 0;
    }else{
        return 1;
    }

}
int setIthBit(int num,int i){
    int bitmask=1<<i;
    return(num | bitmask);
}
int clearIthBit(int num,int i){
    int bitmask=~(1<<i);
    return num&bitmask;
}
bool powOf2(int num){
    if(!(num&(num-1))){
        return true ;
    }
    else{
        return false;
    }
}
int updateIthBit(int num,int i,int val){
    num=num&~(1<<i);//clear Ith bit
    num=num|(val<<i);
    return num;
}
void clearIBits(int num,int i){
    int bitmask=~(0)<<i;
    num=num&bitmask;
    cout<<num;
}
int countSetBits(int num){
    int count =0;
    while (num<0){
        int lasDig=num&1;
        count+=lasDig;
        num=num>>1;
    }
    return count;
   
    
}
int main(){
    evenOrOdd(8);
    cout<<getIthBit(8,3)<<endl;
    cout<<setIthBit(7,2)<<endl;
    cout<<clearIthBit(6,2)<<endl;
    cout<<powOf2(32)<<endl;
    cout<<updateIthBit(7,2,0)<<endl;
    clearIBits(15,2);
    cout<<countSetBits(8)<<endl;
}