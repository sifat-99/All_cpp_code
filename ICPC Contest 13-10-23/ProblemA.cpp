#include<bits/stdc++.h>
using namespace std;

const long long int MaxNumber = 100005;
long long int T, N, K, A[MaxNumber], prime[MaxNumber], cnt[MaxNumber], pcnt;
bool is_prime[MaxNumber];

void sieve() {
    fill(is_prime, is_prime + MaxNumber, true);
    is_prime[0] = is_prime[1] = false;
    for (long long int  i = 2; i < MaxNumber; i++) {
        if (is_prime[i]) {
            prime[pcnt++] = i;
            for (long long int  j = i * 2; j < MaxNumber; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    cin >> T;
    for (long long int  t = 1; t <= T; t++) {
        cin >> N >> K;
        for (long long int  i = 0; i < N; i++) {
            cin >> A[i];
        }
        long long int  ans = 0;
        long long int  left = 0, right = 0;
        map<long long int , long long int > freq;
        while (right < N) {
            // add A[right] to the current subarray
            for (long long int  i = 0; i < pcnt && prime[i] * prime[i] <= A[right]; i++) {
                long long int  p = prime[i];
                while (A[right] % p == 0) {
                    freq[p]++;
                    A[right] /= p;
                }
            }
            if (A[right] > 1) {
                freq[A[right]]++;
            }
            right++;

            // check if we have K almost prime factors
            int almost_prime = 0;
            for (map<long long int , long long int >::iterator it = freq.begin(); it != freq.end(); it++) {
                if (it->second > 0) {
                    almost_prime++;
                }
            }
            if (almost_prime == K) {
                // move the left pointer to the right until we no longer have K almost prime factors
                while (left < right) {
                    bool perfect = true;
                    for (map<long long int , long long int >::iterator it = freq.begin(); it != freq.end(); it++) {
                        if (it->second > 0 && it->second == right - left) {
                            perfect = false;
                            break;
                        }
                    }
                    if (perfect) {
                        break;
                    }
                    for (long long int  i = 0; i < pcnt && prime[i] * prime[i] <= A[left]; i++) {
                        long long int  p = prime[i];
                        while (A[left] % p == 0) {
                            freq[p]--;
                            A[left] /= p;
                        }
                    }
                    if (A[left] > 1) {
                        freq[A[left]]--;
                    }
                    left++;
                }
                ans = max(ans, right - left);
            }
        }
        cout << "Case " << t << ": " << ans << endl;
    }
    return 0;
}
