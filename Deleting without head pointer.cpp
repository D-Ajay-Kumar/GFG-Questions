// https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=1&page=1&query=category[]Linked%20Listdifficulty[]1page1category[]Linked%20List

void deleteNode(Node *node)
{
   Node* temp = node;
   
   while(temp->next != NULL)
   {
       temp->data = temp->next->data;
       if(temp->next->next == NULL)
       {
           temp->next = NULL;
           break;
       }
       temp = temp->next;
   }
}
