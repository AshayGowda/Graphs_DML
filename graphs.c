//Profile a connected undirected unweighted graph for the following properties.
#include <stdlib.h>
#include "graphprofile.h"

// 1. What is average degree of a vertex in the graph?
int avgDegree(int **g, int n)
{
    int count = 0;
    int q;
    for (int i = 0; i < n ; i++)
    {
        q=0;
        while(q < n){
            if(g[i][q] == 1){
                count++;
            }
            q++;
        }
    }
    return count / n;
}

// 2. Is the graph a regular graph?
int isRegular(int **g, int n)
{
    int c = 0;
    int i=0;
    while(i < n){
        if (g[0][i] == 1)
        {
            c++;
        }
        i++;
    }
    int d;
    for (i = 0; i < n; i++)
    {
        d = 0;
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == 1)
            {
                d++;
            }
        }
        if (d != c)
        {
            return 0;
        }
    }
    
    return 1;
}

// 3. Is the graph a complete graph?
int isComplete(int **g, int n) {
    int p,q;
    for(p=0; p<n; p++) {
        q=0;
        while(q<n) {
            if(q!=p && !g[p][q])
                return 0;
            q++;
        }
    }
    return 1;
}



// 4. Is the graph a cycle graph?
int isCycleGraph(int **g, int n) {
    int d[100];
    int p = 0;
    for(p=0;p<n;p++){
        d[p]=0;
    }
    p = 0;
    int q;
    for(p=0;p<n;p++){
        q = 0;
        while(q < n){
            if(g[p][q] == 1){
                d[p]++;
            }
            q++;
        }
    }
    p = 0;
    while(p < n){
        if(d[p]!=2){
            return 0;
        }
        p++;
    }
    return 1;
}

// 5. Is the graph a path graph but not a cycle graph?
int isPathGraph(int **g, int n)
{
    int d1 = 0, d2 = 0, c = 0;
    int j;
    for (int i = 0; i < n; i++)
    {
        j=0;
        while (j < n) {
            if (g[i][j] == 1)
                c++;
            j++;
        }
        if (c == 2)
            d2++;
        else if (c == 1)
            d1++;
        c=0;
    }
    if (d1 == 2 && d2==n-2)
        return 1;
    else
        return 0;
}

// 6. Does the graph has an Euler circuit?
int hasEulerCkt(int **g, int n)
{
    int c = 0;
    int j;
    for (int i = 0; i < n; i++)
    {
        j=0;
        while(j < n)
        {
            if (g[i][j] == 1 )
                c++;
            j++;
        }
        if ( c % 2 )
            return 0;
    }
    return 1;
}

// 7. Does the graph has an Euler path but not an Euler circuit?
int hasEulerPath(int **g, int n)
{
    int c = 0;
    int odd = 0;
    int j;
    for (int i = 0; i < n; i++)
    {
        j=0;
        while(j < n){
            if (g[i][j] == 1 && i!=j)
                c++;
            j++;
        }
        if (c % 2)
            odd++;
        c=0;
    }
    if (odd == 2)
        return 1;
    else
        return 0;
}

// 8. Does the graph satisfy the sufficient condition of the Ore's theorem?
// Sufficient condition for the graph to have a Hamilton according the Ore's theorem:
// deg(u) + deg(v) ≥ n for every pair of nonadjacent vertices u and v in the graph
int satifiesOresTheorem(int **g, int n) {
    int p = 0;
    int i[500];
    for(p=0;p<n;p++)
        i[p] = 0;
    int q;
    p = 0;
    int r = 0;
    for(p=0;p < n;p++){
        q = 0;
        while(q < n){
            if(g[p][q] == 1){
                i[p]++;
                r++;
            }
            q++;
        }
    }
    p = 0;
    int s = 0;
    for(p=0;p < n;p++){
        q = 0;
        while(q < n){
            if(g[p][q] == 0){
                if(i[p]+i[q] >= n){
                    s++;
                }
            }
            q++;
        }
    }
    if(s == (n*n)-r){
        return 1;
    }
    else{
        return 0;
    }
}
