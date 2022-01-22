//
//  main.cpp
//  lru_cache
//
//  Created by Oluwatosin  Oseni on 16/01/2022.
//

#include <iostream>
using namespace std;
#include <unordered_map>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class LRUCache {
public:
    unordered_map < int, pair<int,int>> cache;
    int least_accessed_value=1;
    int least_accessed_key=0;
    int cache_size=0;
    int max_size;
    LRUCache(int capacity) {
        
        max_size=capacity;
    }
    
    int get(int key) {
        if(cache.find(key)==cache.end()){
            return -1;
        }else{
            ++cache[key].second;
            if (cache[key].secound >least_accessed_value ){
                
            }
            return cache[key].first;
        }
    }
    
    void put(int key, int value) {
        if (cache_size<max_size){
            pair<int, int> c;
            c.first=value;
            c.second=1;
            cache[key]=c;
        }else{
            // remove least used
        }
     
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
