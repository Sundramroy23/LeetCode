class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> graph;   // ingredient -> recipes that need it
        unordered_map<string, int> indegree;           // recipe -> how many ingredients are missing
        vector<string> ans;

        // Step 1: Initialize in-degree for all recipes
        for (int i = 0; i < recipes.size(); i++) {
            indegree[recipes[i]] = ingredients[i].size();
            // Build graph: each ingredient maps to a recipe that needs it
            for (auto ing : ingredients[i]) {
                graph[ing].push_back(recipes[i]);
            }
        }

        // Step 2: Start with all supplies in the queue
        queue<string> q;
        for (auto s : supplies) {
            q.push(s);
        }

        // Step 3: BFS Process
        while (!q.empty()) {
            string curr = q.front();
            q.pop();

            // If current is an ingredient that is part of some recipe(s)
            for (auto recipe : graph[curr]) {
                indegree[recipe]--;  // One ingredient found
                if (indegree[recipe] == 0) {
                    // Recipe can now be made
                    ans.push_back(recipe);
                    q.push(recipe);  // Recipe itself can now act as ingredient for others
                }
            }
        }

        return ans;
    }
};
