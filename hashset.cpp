#include<bits/stdc++.h>
using namespace std;

class HashSet{
    private:
    int capacity;
    vector<list<int>>table;
    int hashfunct(int key){
        return key % capacity;
    }
    public:
    HashSet(int cap=10){
        capacity=cap;
        table.resize(capacity);
    }

    void add(int key){
        int index=hashfunct(key);
        for(int it:table[index]){
            if(it==key){
                return;
            }
        }
        table[index].push_back(key);
    }

    bool contain(int key){
        int index=hashfunct(key);
        for(int it:table[index]){
            if(it==key){
                return true;
            }
        }
        return false;
    }

    void remove(int key){
        int index=hashfunct(key);
        for(auto it=table[index].begin();it!=table[index].end();it++){
            if(*it==key){
                table[index].erase(it);
                return;
            }
        }
    }
};

int main(){
    HashSet h1;
    h1.add(1);
    h1.add(2);
    h1.add(3);
    h1.add(4);
    h1.add(5);

    h1.remove(5);                    
    cout<<h1.contain(5);
}