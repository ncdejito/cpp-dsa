class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> number_set;

        cout << "For each row" << endl;
        for (int r = 0; r<9; r++) {
            number_set = board[r];
            print_s(number_set);
            if (contains_duplicates(number_set)) {
                return false;
            }
        }

        cout << "For each col" << endl;
        for (int c = 0; c<9; c++) {
            number_set = {};
            for (int r = 0; r<9; r++) {
                number_set.push_back(board[r][c]);
            }
            print_s(number_set);
            if (contains_duplicates(number_set)) {
                return false;
            }
        }

        cout << "For each subsquare" << endl;
        for (int s = 0; s<9; s++) {
            number_set = {};
            int ro = s / 3;
            int co = s % 3;

            // square movement: left to right, then down
            for (int r = 0; r<3; r++) {
                for (int c = 0; c<3; c++) {
                    number_set.push_back(board[3*ro+r][3*co+c]);
                }
            }
            print_s(number_set);
            if (contains_duplicates(number_set)) {
                return false;
            }
        }

        return true;
    }
private:
    bool contains_duplicates(vector<char> number_set) {
        unordered_set<char> unique_numbers;
        for (int i = 0; i<number_set.size(); i++) {
            char num = number_set[i];
            if (num != '.') {
                if (unique_numbers.find(num) != unique_numbers.end()) {
                    return true;
                }
                unique_numbers.insert(num);
            }
        }
        return false;
    }
    void print_s(vector<char> vec) {
        string str(vec.begin(), vec.end());
        cout << str << endl;
    }
};