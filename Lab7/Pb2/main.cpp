#include <iostream>
#include "Tree.h"

// include implementation of Tree class here

bool compare_ints(int a, int b) {
    return a == b;
}

int main() {
    // create a new tree with root value of 10
    Tree<int> tree(10);

    // add nodes to the tree
    auto node1 = new Node<int>(5);
    tree.add_node(tree.get_node(nullptr), node1);

    auto node2 = new Node<int>(15);
    tree.add_node(tree.get_node(nullptr), node2);

    auto node3 = new Node<int>(2);
    tree.add_node(node1, node3);

    auto node4 = new Node<int>(7);
    tree.add_node(node1, node4);

    auto node5 = new Node<int>(12);
    tree.add_node(node2, node5);

    auto node6 = new Node<int>(17);
    tree.add_node(node2, node6);

    // count nodes in the tree
    std::cout << "Number of nodes in the tree: " << tree.count() << std::endl;

    // find a node in the tree
    auto found_node = tree.find(compare_ints, 5);
    if (found_node != nullptr) {
        std::cout << "Node found: " << found_node->value << std::endl;
    }
    else {
        std::cout << "Node not found." << std::endl;
    }

    // sort nodes in the tree
    tree.sort();
    std::cout << "Sorted tree:" << std::endl;
    std::cout << "    " << tree.get_node(nullptr)->value << std::endl;
    std::cout << "  /   \\" << std::endl;
    std::cout << node3->value << "     " << node4->value << std::endl;
    std::cout << "        / \\" << std::endl;
    std::cout << "       " << node5->value << "   " << node6->value << std::endl;

    // delete a node from the tree
    tree.delete_node(node4);
    std::cout << "Number of nodes in the tree after deleting a node: " << tree.count() << std::endl;

    return 0;
}
