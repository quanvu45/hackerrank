bool check(string s) {
    int l = 0, r = s.length() - 1;
    while (l <= r) {
        if (s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

int palindromeIndex(string s) {
    int l = 0, r = s.length() - 1;
    int left = -1, right = -1;
    while (l <= r) {
        if (s[l] != s[r]) {
            left = l;
            right = r;
            break;
        }
        ++l; --r;
    }
    if (l > r) return -1;
    string tmp_l = s.erase(left, 1);
    string tmp_r = s.erase(right, 1);
    if (check(tmp_l)) return left;
    return right;
}