class RandomizedSet {
public:
    vector<int> arr;
    unordered_map<int, int> mp;

    RandomizedSet() {srand(time(0));}

    bool insert(int val) {

        if (mp.count(val))
            return false;
        else {
            arr.push_back(val);
        }
        mp[val] = arr.size() - 1;
        return true;
    }

    bool remove(int val) {
        if(!mp.count(val)) return false;
        int idx = mp[val];
        swap(arr[idx],arr.back());
        mp[arr[idx]]=idx;
        mp.erase(arr.back());
        arr.pop_back();
        
        return true;
    }

    int getRandom() {
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */