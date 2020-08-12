#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<int> sortByHeight(std::vector<int> a) {

    // Get tree locations and vector without trees
    std::vector<int> tree_indexes;
    std::vector<int> without_trees;
    for (int i=0; i<a.size(); i++){
        if (a[i] == -1) {
            tree_indexes.push_back(i);
        }
        if (a[i] != -1)
            without_trees.push_back(a[i]);
    }

    // Inserting trees into sorted without_trees vector
    std::sort(without_trees.begin(), without_trees.end());
    for (int i=0; i<without_trees.size(); i++) {
        for (int j=0; j<tree_indexes.size(); j++) {
            if (tree_indexes[j] == i) {
                without_trees.insert(without_trees.begin() + i, -1);
            }
        }
    }
    
    std::vector<int> final_a = without_trees;
    // Check if only trees
    sort(a.begin(), a.end());
    if (a[a.size()-1] == -1) {
        return a;
    } else {
        return final_a;
    }

}
