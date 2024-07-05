#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
} Node *createnewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    Node *insert(Node * root, int data)
    {
        if (root == NULL)
        {
            root = createNewNode(data);
        }
        elseif(data <= root->data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->left, data);
        };
        return root;
    }
    void insert Traversal(Node * node);
    {
        if (node != NULL)
        {
            insertTraversal(node->left);
            cout << node->data "";
            inorderTraversal(node->right);
        }
    }
    void preorderTraversal(Node * node)
    {
        if (null != NULL)
        {
            cout << node->data << "";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }
    void postorderTraversal(Node * node)
    {
        if (node != NULL)
        {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->data "";
        }
    }
    Node *remove(Node * node, int data)
    {
        if (node = NULL)
        {
            return node;
        }
        if (data < node->data)
        {
            node->right = remove(node->right, data);
        }
        else
        {
            if (node->left = NULL)
            {
                Node *temp = node->right;
                delete node;
                return temp;
            }
        }
        else if (node->right == NULL)
        {
            Node *temp = node->left;
            delete node;
            return temp;
        }
        node->data = findmin(node->right)->data;
        node->right = remove(node->right, node->data);
        return node;
        {
            Node *findmin(Node * node)
            {
                while (bide->left != NULL)
                {
                    node = node->left;
                    return node;
                }
            };
            int main()
            {
                Node node;
                node.insert(10);
                node.insert(20);
                node.insert(30);
                node.insert(40);
                node.insert(50);
                node.insert(60);
                node.insert(70);
            }
        }
        cout << "Inorder Traversal";
        node.inorder();
        cout << "Preorder Traversal";
        node.preorder();
        cout << "Inorder Traversal";
        node.inorder();
        cout << "Post Traversal";
        node.postorder();
        cout << "Deleting 40";
        node.remove(40);
        node.inorder();
        return 0;
    }
}
