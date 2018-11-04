//solution posted on Codeforces's educational contest solution (author BledDest)

#include<bits/stdc++.h>

using namespace std;

#define sz(a) ((int)(a).size())

struct edge
{
    int y;
    int c;
    int f;
    edge() {};
    edge(int y, int c, int f) : y(y), c(c), f(f) {};
};

const int N = 100;

vector<edge> e;
vector<int> g[N];
int edge_num[N][N];
int char_vertex[6];
int mask_vertex[N];
int used[N];
int cc = 0;
int s, t;

void add_edge(int x, int y, int c)
{
    edge_num[x][y] = sz(e);
    g[x].push_back(sz(e));
    e.push_back(edge(y, c, 0));
    edge_num[y][x] = sz(e);
    g[y].push_back(sz(e));
    e.push_back(edge(x, 0, 0));
}

int rem(int num)
{
    return e[num].c - e[num].f;
}

int dfs(int x, int mx)
{
    if(x == t) return mx;
    if(used[x] == cc) return 0;
    used[x] = cc;
    for(auto num : g[x])
    {
        if(rem(num))
        {
            int pushed = dfs(e[num].y, min(mx, rem(num)));
            if(pushed)
            {
                e[num].f += pushed;
                e[num ^ 1].f -= pushed;
                return pushed;
            }
        }
    }
    return 0;
}

bool check(int ch, int mask)
{
    if((mask & (1 << ch)) == 0)
        return false;
    int cv = char_vertex[ch];
    int mv = mask_vertex[mask];
    int e1 = edge_num[s][cv];
    int e2 = edge_num[mv][t];
    if(e[e1].f == 0 || e[e2].f == 0)
        return false;
    e[e1].f--;
    e[e1 ^ 1].f++;
    vector<int> affected_edges;
    affected_edges.push_back(e1);
    for(auto x : g[cv])
    {
        if((x & 1) == 0 && e[x].f > 0)
        {
            affected_edges.push_back(x);
            e[x].f--;
            e[x ^ 1].f++;
            int y = e[x].y;
            for(auto x2 : g[y])
            {
                if((x2 & 1) == 0)
                {
                    affected_edges.push_back(x2);
                    e[x2].f--;
                    e[x2 ^ 1].f++;
                    break;
                }
            }
            break;
        }
    }
    if(e[e2].f < e[e2].c)
    {
        e[e1].c--;
        e[e2].c--;
        return true;
    }
    affected_edges.push_back(e2);
    e[e2].f--;
    e[e2 ^ 1].f++;
    for(auto x : g[mv])
    {
        if((x & 1) == 1 && e[x].f < 0)
        {
            affected_edges.push_back(x ^ 1);
            e[x].f++;
            e[x ^ 1].f--;
            int y = e[x].y;
            for(auto x2 : g[y])
            {
                if((x2 & 1) == 1)
                {
                    affected_edges.push_back(x2 ^ 1);
                    e[x2].f++;
                    e[x2 ^ 1].f--;
                    break;
                }
            }
            break;
        }
    }
    cc++;
    e[e1].c--;
    e[e2].c--;
    if(dfs(s, 1))
        return true;
    else
    {
        e[e1].c++;
        e[e2].c++;
        for(auto x : affected_edges)
        {
            e[x].f++;
            e[x ^ 1].f--;
        }
        return false;
    }
}

char buf[100043];
string allowed[100043];
int allowed_mask[100043];

int main()
{
    s = 70;
    t = 71;
    scanf("%s", buf);
    string z = buf;
    int n = sz(z);
    int m;
    scanf("%d", &m);
    for(int i = 0; i < n; i++)
    {
        allowed[i] = "abcdef";
        allowed_mask[i] = 63;
    }
    for(int i = 0; i < m; i++)
    {
        int idx;
        scanf("%d", &idx);
        --idx;
        scanf("%s", buf);
        allowed[idx] = buf;
        allowed_mask[idx] = 0;
        for(auto x : allowed[idx])
        {
            allowed_mask[idx] |= (1 << (x - 'a'));
        }
    }
    for(int i = 0; i < 6; i++)
        char_vertex[i] = i;
    for(int i = 0; i < (1 << 6); i++)
        mask_vertex[i] = i + 6;
    for(int i = 0; i < (1 << 6); i++)
        for(int j = 0; j < 6; j++)
            if(i & (1 << j))
                add_edge(char_vertex[j], mask_vertex[i], 100000);
    for(int i = 0; i < 6; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
            if(z[j] == 'a' + i)
                cnt++;
        add_edge(s, char_vertex[i], cnt);
    }
    for(int i = 0; i < (1 << 6); i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
            if(allowed_mask[j] == i)
                cnt++;
        add_edge(mask_vertex[i], t, cnt);
    }
    int flow = 0;
    while(true)
    {
        cc++;
        int p = dfs(s, 100000);
        if(p)
            flow += p;
        else
            break;
    }
    if(flow != n)
    {
        puts("Impossible");
        return 0;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 6; j++)
        {
            if(check(j, allowed_mask[i]))
            {
                printf("%c", j + 'a');
                break;
            }
        }
    puts("");
}
