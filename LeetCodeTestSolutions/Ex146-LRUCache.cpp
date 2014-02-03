/*
Design and implement a data structure for Least Recently 
Used (LRU) cache. It should support the following operations:
get and set. 

get(key) - Get the value (will always be positive) of the
key if the key exists in the cache, otherwise return -1.

set(key, value) - Set or insert the value if the key is 
not already present. When the cache reached its capacity,
it should invalidate the least recently used item before
inserting a new item. 

class LRUCache{
public:
    LRUCache(int capacity) {
        
    }
    
    int get(int key) {
        
    }
    
    void set(int key, int value) {
        
    }
};
*/

#include "Ex146-LRUCache.h"

namespace LeetCodeTestSolutions
{
    Ex146LRUCache::Ex146LRUCache(int capacity) 
    {
        this->size = capacity;
    }
    
    int Ex146LRUCache::get(int key) 
    {
        if (cacheMap.find(key) == cacheMap.end()) return -1;
        cacheList.splice(this->cacheList.begin(), this->cacheList, this->cacheMap[key]);
        cacheMap[key] = cacheList.begin();
        return cacheList.begin()->value;
    }
    
    void Ex146LRUCache::set(int key, int value) 
    {
        if (cacheMap.find(key) == cacheMap.end()) 
        {
            this->cacheList.push_front(CacheNode(key,value));
            this->cacheMap.insert(make_pair(key, cacheList.begin()));
            if ((int)this->cacheList.size() > size) 
            {
                this->cacheMap.erase(cacheList.back().key);
                this->cacheList.pop_back();
            } 
        }
        else 
        {
            this->cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
            this->cacheList.begin()->value = value;
            this->cacheMap[key] = cacheList.begin();
        }
    }
}