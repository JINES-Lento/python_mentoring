#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1001];
bool dfs_visited[1001];
bool bfs_visited[1001];

void print_vec(vector<int> vec){
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << ' ';
    }
    cout << endl;
}

vector<int> dfs(int x){
    static vector<int> result;
    result.push_back(x);

    dfs_visited[x] = 1;

    for (int i = 0; i < graph[x].size(); ++i){
        int y = graph[x][i];
        if (!dfs_visited[y]) dfs(y);
    }
    return result;
}

vector<int> bfs(int x){
    vector<int> result;
    queue<int> q;

    bfs_visited[x] = 1;
    q.push(x);

    while (!q.empty()){
        int now = q.front();
        q.pop();
        result.push_back(now);

        for (int i = 0; i < graph[now].size(); ++i){
            int next = graph[now][i];
            if (!bfs_visited[next]){
                q.push(next);
                bfs_visited[next] = 1;
            }
        }
    }
    return result;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> dfs_result;
    vector<int> bfs_result;

    int n, m, start, tmp_n, tmp_m;

     cin >> n >> m >> start;


     for (int j = 0; j < m; ++j){
         cin >> tmp_n >> tmp_m;
         graph[tmp_n].push_back(tmp_m);
         graph[tmp_m].push_back(tmp_n);
     }

     for (int i = 1; i <= n; i++){
        sort(graph[i].begin(), graph[i].end());
    }


     dfs_result = dfs(start);
     bfs_result = bfs(start);

     print_vec(dfs_result);
     print_vec(bfs_result);

    return 0;
}
