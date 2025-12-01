#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


int lruPageFaults(int frames, vector<int>& refs) {
    vector<int> memory;
    unordered_map<int, int> lastUsed;  
    int faults = 0;

    for (int i = 0; i < refs.size(); i++) {
        int page = refs[i];

        if (find(memory.begin(), memory.end(), page) == memory.end()) {
            faults++;

            if (memory.size() < frames) {
                memory.push_back(page);    
            } else {
               
                int lruPage = memory[0];
                for (int p : memory) {
                    if (lastUsed[p] < lastUsed[lruPage])
                        lruPage = p;
                }

               
                replace(memory.begin(), memory.end(), lruPage, page);
            }
        }

       
        lastUsed[page] = i;
    }

    return faults;
}


int main() {
    int frames, n;

    cout << "Enter number of frames: ";
    cin >> frames;

    cout << "Enter number of pages in reference string: ";
    cin >> n;

    vector<int> refs(n);
    cout << "Enter reference string: ";
    for (int i = 0; i < n; i++) {
        cin >> refs[i];
    }

    int result = lruPageFaults(frames, refs);

    cout << "\nTotal Page Faults (LRU): " << result << endl;

    return 0;
}
