class LRUCache {
public:
    int capacity = 0;
    unordered_map<int,int> cache;
    deque<int> keys; //keep track of keys only .
    int cnt = 0;

    LRUCache(int capacity) {
        //how to get that which value is least used and remove that ?
        this->capacity = capacity;
    }

    //DONE
    int get(int key) {
        if(cache.count(key)) {
            //here we need to update the keys
            deque<int>::iterator itr = find(keys.begin(), keys.end(), key);
            keys.erase(itr); //updating the position of the key
            keys.push_front(key);
            return cache[key];

        } else {
            return -1;
        }
    }

    void put(int key, int value) {
        if(cache.count(key)) {
            cache[key] = value;
            //here we need to update the keys
            deque<int>::iterator itr = find(keys.begin(), keys.end(), key);

            keys.erase(itr); //updating the position of the key
            keys.push_front(key);
        } else {
            if(cnt<capacity)
                { //inserted a new element
                cnt++,cache[key] = value;
                //here we need to update the keys
                keys.push_front(key);
                }

            else {
                //need to evict an element front the end of the dequeue and insert it
                //need to destroy that key from cache
                cache.erase(keys.back());
                keys.pop_back();
                keys.push_front(key);
                cache[key] = value;

            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */




