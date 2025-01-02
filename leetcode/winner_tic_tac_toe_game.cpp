#include <iostream>

using std::string;
using std::vector;

class Solution {
public:
  string tictactoe(vector<vector<int>> &moves) {

    vector<vector<char>> board = {
        {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    for (int i = 0; i < moves.size(); ++i) {
      int row = (moves[i])[0];
      int col = (moves[i])[1];
      char target;

      if (i == 0 || i % 2 == 0) {
        target = board[row][col] = 'X';
      } else {
        target = board[row][col] = 'O';
      }

      if (check_winner(board, target)) {
        if (target == 'X')
          return "A";
        else
          return "B";
      }

      if (check_draw(board)) {
        return "Draw";
      }
    }

    return "Pending";
  }

private:
  bool check_winner(vector<vector<char>> board, char target) {
    int board_size = board.size();

    for (int row = 0; row < board_size; ++row) {
      if (board[row][0] == target && board[row][1] == target &&
          board[row][2] == target)
        return true;
    }

    for (int col = 0; col < board_size; ++col) {
      if (board[0][col] == target && board[1][col] == target &&
          board[2][col] == target)
        return true;
    }

    if (board[0][0] == target && board[1][1] == target && board[2][2] == target)
      return true;

    if (board[0][2] == target && board[1][1] == target && board[2][0] == target)
      return true;

    return false;
  }

  bool check_draw(vector<vector<char>> board) {
    for (int i = 0; i < board.size(); ++i) {
      for (int j = 0; j < board.size(); ++j) {
        if (board[i][j] == ' ')
          return false;
      }
    }
    return true;
  }
};

int main() {
  Solution s;

  vector<vector<int>> moves = {{0, 0}, {2, 0}, {1, 1}, {2, 1}, {2, 2}};
  string res = s.tictactoe(moves);
  std::cout << "res = " << res << std::endl;

  moves = {{0, 0}, {1, 1}, {0, 1}, {0, 2}, {1, 0}, {2, 0}};
  res = s.tictactoe(moves);
  std::cout << "res = " << res << std::endl;

  moves = {{0, 0}, {1, 1}, {2, 0}, {1, 0}, {1, 2},
           {2, 1}, {0, 1}, {0, 2}, {2, 2}};
  res = s.tictactoe(moves);
  std::cout << "res = " << res << std::endl;

  return 0;
}
