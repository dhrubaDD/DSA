class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int cont=maxWeight/w;
        if(cont>=n*n) return n*n;
        else return cont;
    }
};
