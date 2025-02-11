class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int original) {
        int szX = image.size();
        int szY = image[0].size();

        // Boundary conditions and base case
        if (sr < 0 || sr >= szX || sc < 0 || sc >= szY || image[sr][sc] != original || image[sr][sc] == color)
            return;

        // Fill the color
        image[sr][sc] = color;

        // Direction vectors: Up, Right, Down, Left
        vector<int> rowMoves = {-1, 0, 1, 0};
        vector<int> colMoves = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++) {
            dfs(image, sr + rowMoves[i], sc + colMoves[i], color, original);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original = image[sr][sc];
        if (original != color) { // To avoid infinite recursion
            dfs(image, sr, sc, color, original);
        }
        return image;
    }
};
