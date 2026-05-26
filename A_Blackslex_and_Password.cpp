const int N = 1e7;
int lpf[N+1];
void build_lpf() {
    for(int i = 1; i <= N; i++) lpf[i] = 0;
    for(int i = 2; i <= N; i++) {
        if(lpf[i] == 0) { 
            for(int j = i; j <= N; j += i) {
                lpf[j] = i; 
            }
        }
    }
}