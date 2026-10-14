class MyHashSet {
private:
    static const int SIZE = 10000; 
    vector<list<int>> table;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashSet() {
        table.resize(SIZE);
    }

    void add(int key) {
        int index = hash(key);
        for (int num : table[index]) {
            if (num == key) 
                return; // key already present
        }
        table[index].push_back(key);
    }

    void remove(int key) {
        int index = hash(key);
        table[index].remove(key);
    }

    bool contains(int key) {
        int index = hash(key);
        for (int num : table[index]) {
            if (num == key) 
                return true;
        }
        return false;
    }
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */