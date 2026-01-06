#include<bits/stdc++.h>
using namespace std;

class HashMap{
    private:
    int capacity;
    vector<list<pair<int,int>>>table;

    int hashfunct(int key){
        return key % capacity;
    }
    public:

    HashMap(int cap=10){
        capacity=cap;
        table.resize(capacity);
    }

    void put(int key,int val){
        int index=hashfunct(key);
        for(auto& it:table[index]){
            if(it.first==key){
                it.second=val;
                return;
            }
        }
        table[index].push_back({key,val});
    }

    int get(int key){
        int index= hashfunct(key);
        for(auto & it:table[index]){
            if(it.first==key){
                return it.second;
            }
        }
        return -1;
    }

    void remove(int key){
        int index=hashfunct(key);
        for(auto it=table[index].begin();it!=table[index].end();it++){
            if(it->first==key){
                table[index].erase(it);
                return;
            }
        }
    }

};

int main(){
    HashMap h1;
    h1.put(1,100);
    h1.put(11,200);

    // cout<<h1.get(1);
    // cout<<h1.get(11);

    h1.remove(11);
    cout<<h1.get(11);
    
}