#include <iostream>
using namespace std;

struct Node {
    string word;
    struct Node *next;
};

int main() {
    string in;
    Node* head = NULL;
    while(getline(cin, in)) {
        if(in == "0")
            break;
        int i, len = in.length();
        for(i = 0; i < len; i++) {
            if(!isalpha(in[i])) {
                if(isdigit(in[i])) {
                    int num = 0;
                    while(isdigit(in[i])) {
                        num = num*10 + in[i]-'0';
                        i++;
                    }
                    i--;
                    Node *now, *prev;
                    now = head;
                    prev = NULL;
                    for(int j = 1; j < num; j++) {
                        prev = now;
                        now = now->next;
                    }
                    cout << now->word;
                    if(prev != NULL) {
                        prev->next = now->next;
                    }
                    if(head != now) {
                        now->next = head;
                    }
                    head = now;
                } else {
                    cout << in[i];
                }
            } else {
                string s = "";
                int j(i);
                while(isalpha(in[j])) {
                    s += in[j];
                    j++;
                }
                i = j-1;
                cout << s;
                Node *now, *prev;
                now = head;
                prev = NULL;
                while(now != NULL) {
                    if(now->word == s)
                        break;
                    prev = now;
                    now = now->next;
                }
                if(now != NULL) {
                    if(prev != NULL) {
                        prev->next = now->next;
                    }
                    now->next = head;
                    head = now;
                } else {
                    Node *now = new Node();
                    now->word = s;
                    now->next = head;
                    head = now;
                }
            }
        }
        cout << endl;
    }
    return 0;
 }
