#include <list>
#include <unordered_map>
using namespace std;

namespace LeetCodeTestSolutions
{
    class CacheNode 
    {
    public:
        int key, value;
        CacheNode(int key, int value):key(key), value(value) {}
    };

    class Ex146LRUCache
    {
    public:
        int size;
        list<CacheNode> cacheList;
        unordered_map<int, list<CacheNode>::iterator> cacheMap;

        Ex146LRUCache(int capacity);
        int get(int key);
        void set(int key, int value);
    };
}