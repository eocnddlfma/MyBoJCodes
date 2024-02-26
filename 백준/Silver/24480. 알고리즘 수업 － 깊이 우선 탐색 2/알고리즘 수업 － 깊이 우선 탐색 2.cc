#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int visited [100002] = {0,};
vector<int> line [100001];

int maxPoints;
int startPoint;
int when = 1;

void dfs(int start){
    visited[start] = when;
    when++;

    for(int a : line[start]){
        if(visited[a]==0){
            dfs(a);
        }
    }
}

int main(){
    int linenum;
    cin >> maxPoints >> linenum >> startPoint;

    for(int i=0;i<linenum;i++){
        int a,b;
        cin >>a >>b;
        line[a].push_back(b);
        line[b].push_back(a);
    }

    for(int i=0;i<=maxPoints;i++){
        sort(line[i].begin(), line[i].end(), greater<int>());
    }

    dfs(startPoint);

    for(int i=1; i<=maxPoints;i++){
        cout << visited[i] << "\n";
    }
}