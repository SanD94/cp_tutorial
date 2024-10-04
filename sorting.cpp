#include "utils.cpp"


void bubble_sort(vector<int> &nums, int N) {
    REP(i, 0, N) REP(j, 0, N-i-1)
        if(nums[j] > nums[j+1])
            swap(nums[j], nums[j+1]);
}

// N lg N memory allocation?
void merge(VI &nums, int a, int b) {
    int k = (a + b) / 2;
    VI left(nums.begin() + a, nums.begin() + k + 1);
    VI right(nums.begin() + k + 1, nums.begin() + b + 1);

    VI::IT left_it = left.begin();
    VI::IT right_it = right.begin();
    VI::IT main_it = nums.begin() + a;

    while(left_it != left.end() || right_it != right.end()) {
        if (left_it == left.end()) *main_it++ = *right_it++;
        else if (right_it == right.end()) *main_it++ = *left_it++;
        else {
            if (*right_it < *left_it) *main_it++ = *right_it++;
            else *main_it++ = *left_it++;
        }
    }
}

// b included
void merge_sort(VI &nums, int a, int b) {
    if (a == b) return;

    int k = (a + b) / 2;
    merge_sort(nums, a, k);
    merge_sort(nums, k+1, b);
    merge(nums, a, b);
}

void comparison_methods() {
    string s = "monkey";
    sort(s.begin(), s.end());
    cout << s << endl;

    vector<pi> vpi;
    vpi.PB(MP(1, 5));
    vpi.PB(MP(2, 3));
    vpi.PB(MP(1, 2));
    sort(vpi.begin(), vpi.end());
    cout << vpi << endl;

    vector<tuple<int,int,int>> vti;
    vti.PB({2, 1, 4});
}


int main() {
    init();

    int N;
    VI nums;

    cin >> N;
    copy_n(SII<int>(cin), N, VBI(nums));

    // bubble_sort(nums, N);
    // merge_sort(nums, 0, N-1);
    sort(nums.begin(), nums.end());
    cout << nums;

    comparison_methods();

    return 0;
}
