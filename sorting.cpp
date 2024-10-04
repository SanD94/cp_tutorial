#include "utils.cpp"


void bubble_sort(vector<int> &nums, int N) {
    REP(i, 0, N) REP(j, 0, N-i-1)
        if(nums[j] > nums[j+1])
            swap(nums[j], nums[j+1]);
}


int main() {
    init();

    int N;
    vector<int> nums;

    cin >> N;
    copy_n(II<int>(cin), N, VBI(nums));

    bubble_sort(nums, N);

    cout << nums;


    return 0;
}
