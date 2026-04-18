#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    vector <node*> childern;

    node(int x)
    {
        data=x;
    }
};

void addChildnode(node* parent, node* child)
{
   parent ->childern.push_back(child);
}
