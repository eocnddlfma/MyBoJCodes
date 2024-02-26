#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int visited [100002] = {0,};
vector<int> line [100001];

int maxPoints;
int startPoint;
void bfs(int start){
    queue<int> nextpoint;
    int when = 1;
    nextpoint.push(start);
    visited[start] = when;
    when++;

    while(nextpoint.size()>0){
        int point = nextpoint.front();
        nextpoint.pop();

        for(int a : line[point]){
            if(visited[a]==0){
                visited[a] = when++;
                nextpoint.push(a);
            }
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

    for(int i=0;i<maxPoints;i++){
        sort(line[i].begin(), line[i].end());
    }

    bfs(startPoint);

    for(int i=1; i<=maxPoints;i++){
        cout << visited[i] << "\n";
    }
}