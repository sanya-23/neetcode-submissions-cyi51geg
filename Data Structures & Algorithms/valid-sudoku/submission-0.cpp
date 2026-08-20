class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            unordered_set<char>rows;
            for(int j =0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(rows.find(board[i][j])!=rows.end()){
                    return false;
                }
                rows.insert(board[i][j]);
            }
        }
             for(int j =0;j<9;j++){
            unordered_set<char>cols;
            for(int i =0;i<9;i++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(cols.find(board[i][j])!=cols.end()){
                    return false;
                }
                cols.insert(board[i][j]);
            }
        }
        for(int boxrow = 0 ; boxrow<9 ;boxrow+=3){
            for(int boxcol=0;boxcol<9;boxcol+=3){
                unordered_set<char>box;
                for(int i = boxrow; i<boxrow+3; i++){
                    for(int j = boxcol ; j<boxcol+3; j++){
                        if(board[i][j]=='.'){
                            continue;
                        }
                       if(box.find(board[i][j])!= box.end()){
                        return false;
                       }
                       box.insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
