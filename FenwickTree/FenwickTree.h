#ifndef FENWICK_TREE
#define FENWICK_TREE
#include <vector>

class FenwickTree
{
private:
    std::vector<int> fTree;
    int fTreeSize;

public:
    FenwickTree(int n);
    FenwickTree(std::vector<int> &arr);
    int query(int qs, int qe);
    void add(int index, int inc);
};

#endif
