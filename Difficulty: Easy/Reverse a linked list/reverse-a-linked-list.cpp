/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
     if(head ==NULL){
         return head;
     }
     else{
            Node* temp = head;
        vector<int> array;
        while(temp){
            array.push_back(temp->data);
            temp= temp->next;
        }
        temp = head;
        int i=0, b = array.size()-1;
        while(temp){
            temp->data = array[b-i];
            temp = temp->next;
            i++;
        }
        return head;
     }
    }
};