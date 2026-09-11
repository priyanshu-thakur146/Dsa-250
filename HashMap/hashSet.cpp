class MyHashSet {
public:
    vector<bool>arr;
    MyHashSet() {
        arr.resize(10000001,false);
    }
    
    void add(int key) {
        arr[key]=true;
    }
    
    void remove(int key) {
        arr[key]=false;
    }
    
    bool contains(int key) {
        return arr[key];
    }
};

// TIME COMPLEXITY: 1.ADD-O(1)
                  //  2.remove-O(1)
                   // 3.contains-O(1)   
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */