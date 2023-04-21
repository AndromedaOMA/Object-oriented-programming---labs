template<typename T>
class Node {
public:
    Node* children[100];
    int NC;
    T value;
    Node(T val)
    {
        this->NC = 0;
        this->value = val;
    }
};

template<typename T>
class Tree {
private:
    Node<T>* tree_;

public:
    Tree(T root_value) {
        tree_ = new Node<T>(root_value);
    }

    void add_node(Node<T>* parent, Node<T>* node) {
        parent->children[parent->NC] = node;
        parent->NC++;
    }

    Node<T>* get_node(Node<T>* parent) {
        if (parent == nullptr) {
            return tree_;
        }
        for (int i = 0; i < parent->NC; i++) {
            auto result = get_node(parent->children[i]);
            if (result != nullptr) {
                return result;
            }
        }
        return nullptr;
    }

    void delete_node(Node<T>* node) {
        if (node == tree_) {
            delete tree_;
            tree_ = nullptr;
        }
        else {
            for (int i = 0; i < node->NC; i++) {
                delete_node(node->children[i]);
            }
            auto parent = get_node(node) - 1;
            for (int i = 0; i < parent->NC; i++) {
                if (parent->children[i] == node) {
                    parent->children[i] = parent->children[parent->NC - 1];
                    parent->NC--;
                    break;
                }
            }
            delete node;
        }
    }

    Node<T>* find(bool (*compare)(T, T), T value) {
        return find(tree_, compare, value);
    }

    Node<T>* find(Node<T>* node, bool (*compare)(T, T), T value) {
        if (compare(node->value, value)) {
            return node;
        }
        for (int i = 0; i < node->NC; i++) {
            auto result = find(node->children[i], compare, value);
            if (result != nullptr) {
                return result;
            }
        }
        return nullptr;
    }

    void insert(int index, Node<T>* parent, Node<T>* node) {
        for (int i = parent->NC - 1; i >= index; i--) {
            parent->children[i + 1] = parent->children[i];
        }
        parent->children[index] = node;
        parent->NC++;
    }

    void sort(bool (*compare)(T, T) = nullptr) {
        sort(tree_, compare);
    }

    void sort(Node<T>* node, bool (*compare)(T, T) = nullptr) {
        if (compare == nullptr) {
            compare = [](T a, T b) { return a < b; };
        }
        sort(node->children, node->children + node->NC, [=](Node<T>* a, Node<T>* b) { return compare(a->value, b->value); });
        for (int i = 0; i < node->NC; i++) {
            sort(node->children[i], compare);
        }
    }

    int count(Node<T>* node = nullptr) {
        if (node == nullptr) {
            node = tree_;
        }
        int count = 1;
        for (int i = 0; i < node->NC; i++) {
            count += count(node->children[i]);
        }
        return count;
    }
};
