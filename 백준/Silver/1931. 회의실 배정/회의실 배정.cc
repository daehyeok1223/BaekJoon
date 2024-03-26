#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Meeting {
    int tik,tok;
};

bool CompareEnd(const Meeting t1, const Meeting t2){
    if(t1.tok < t2.tok){
        return true;
    }
    else if(t1.tok == t2.tok){
        return t1.tik < t2.tik;
    }
    
    else return false;
}

int main(){
    int N;
    cin >> N;

    vector<Meeting> meeting(N);

    for(int i = 0; i < N; i++){
        cin >> meeting[i].tik >> meeting[i].tok; 
    }

    sort(meeting.begin(), meeting.end(), CompareEnd);

    int count = 1; 
    int time = meeting[0].tok;

     for (int i = 1; i < N; i++) {
        if (meeting[i].tik >= time) {
            count++;
            time = meeting[i].tok;
        }
     }

     cout << count<<'\n';

     return 0;

}