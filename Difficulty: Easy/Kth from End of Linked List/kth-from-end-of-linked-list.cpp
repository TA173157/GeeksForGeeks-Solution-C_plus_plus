/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
   Node* temp = head;
   int count =0;
   while(temp){
       temp = temp->next;
       count++;
   }
   if(count<k){
       return -1;
   }
   else{
       for(int i=0;i<count-k;i++){
       head = head->next;
   }
   return head->data;
   }
    }
};