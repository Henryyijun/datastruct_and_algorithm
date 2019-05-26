class UF {
public:
    int* id;
    int count;
    int length;
    UF(int n) {
        count = n;
        length = n;
        id = new int[n];
        for (int i = 0; i < n; i++) {
            id[i] = i;
        }
    }

    int getcount() {
        return count;
    }

    bool connected(int p, int q) {
        return find(p) == find(q);
    }

    int find(int p){ // quick find
        return id[p];
    }

    void union_(int p, int q) {
        int pid = find(p);
        int qid = find(q);
        if (pid == qid) {
            return ;
        } else {
            for (int i = 0; i < length; i++) {
                    id[i] = qid;
            }
        }
            count--;
    }
};
