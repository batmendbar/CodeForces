/* 
Barely edited code from Competitive Programming 4
Originally authored by Steven Halim, Felix Halim, and Suhendry Effend (book authors)
Modified by Batmend Batsaikhan on May 29, 2022
 */

#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

class SuffixArray {
public:
	const char* T;  //Input string
	const int n;    //length of T
	vi SA;
	SuffixArray(const char* initialT, const int _n) : T(initialT), n(_n) {
		constructSA();
	}

private:
	vi RA;

    void constructSA() {
        prepVectors();
		for(int k = 1; k < n; k <<= 1) {
			countingSort(k);        //First sort by second pair
			countingSort(0);        //Then sort by first. It works because we use stable radix-sort..
			updateRA(k);
			if(RA[SA[n - 1]] == n - 1) break; // optimization
		}
	}

	void countingSort(int k) {
		int maxi = max(300, n);
		vi c(maxi, 0);
		for(int i = 0; i < n; ++i)
			++c[i+k < n ? RA[i + k] : 0];
		for (int i = 0, sum = 0; i < maxi; ++i) {
			int t = c[i]; c[i] = sum; sum += t;
		}
		vi tempSA(n);
		for(int i = 0; i < n; ++i) 
			tempSA[c[SA[i] + k < n ? RA[SA[i] + k] : 0]++] = SA[i];
		swap(SA, tempSA);
	}
	
    void updateRA(int k) {
        vi tempRA(n);
        int r = 0;
        tempRA[SA[0]] = r;
        for(int i = 1; i < n; ++i) {
            tempRA[SA[i]] = ((RA[SA[i]] == RA[SA[i - 1]]) && (RA[SA[i]+k] == RA[SA[i - 1] + k])) ? r : ++r;
        }
        swap(RA, tempRA);
    }

    void prepVectors() {
        SA.resize(n);
		iota(SA.begin(), SA.end(), 0);
		RA.resize(n);
		for(int i = 0; i < n; ++i) RA[i] = T[i];
    }
};

const int N = 3e5;

int main() {
    char T[N];
	scanf("%s", T);
	int n = (int)strlen(T);
	T[n++] = '$';
	SuffixArray S(T, n);
	for(int i = 0; i < n; ++i) printf("%2d    %2d    %s\n", i, S.SA[i], T + S.SA[i]);
}

