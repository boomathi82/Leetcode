class RandomizedCollection {
private : 
    unordered_map<int,priority_queue<int>> m ;
    vector<int> v ;
public:
    RandomizedCollection() {
        srand(time(0)) ;
    }

    bool insert(int val) {
        bool ret = false ;
        if( m.count(val) == 0 ) ret = true ;

        v.push_back(val) ;
        m[val].push(v.size()-1) ;
        
        return ret ;
    }
    
    bool remove(int val) {
        if( m.count(val) == 1){
            int i = m[val].top() ;
            int s = v[i] = v[v.size()-1] ;
            
            m[s].pop();
            m[s].push(i) ;

            m[val].pop() ;
            v.pop_back() ;
            
            if(m[val].size() == 0 ) m.erase(val) ;

            return true ;
        }

        return false ;
    }
    
    int getRandom() {
        int r = rand() % v.size() ;
        return v[r] ;
    }
};
    