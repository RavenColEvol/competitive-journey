#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node* children[26];
    string edgeLabel;
    bool isEnd = true;
};

Node* getNode() {
    Node* p = new Node();
    for(int i = 0; i < 26; i++) {
        p->children[i] = nullptr;
    }
    return p;
}

struct Trie {

    Node* root = getNode();

    void insert(string s) {
        if(s == "") return;

        Node* pointer = root;
        int index = s[0] - 'a';

        if(pointer->children[index] == nullptr) {
            Node* temp = getNode();
            temp->edgeLabel = s;
            pointer->children[index] = temp;
        } else {

            if(pointer->children[index]->edgeLabel == s) {
                return;
            }
            else {
                int i = 0;
                string current = pointer->children[index]->edgeLabel;
                while(s[i] == current[i])
                    i++;
                Node* temp = getNode();
                temp->edgeLabel = s.substr(i);
                pointer->children[index] = temp;
                
            }
        }
    }

    void print() {

    }
};

int main()
{
	Trie* trie = new Trie();
	
    trie->insert("facebook");
    trie->insert("face");
    trie->insert("this");
    trie->insert("there");
    trie->insert("then");

    trie->print();

	return 0;
}