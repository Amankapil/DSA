// node *kappned(node *&head, int k)
// {
//     node *newhead = head;
//     node *newtail;
//     node *tail = head;

//     int l = length(head);
//     int count = 1;
//     while (tail->next != NULL)
//     {
//         if (count == l - k)
//         {
//             newtail = tail;
//         }
//         if (count == l - k + 1)
//         {
//             newhead = tail;
//         }
//         tail = tail->next;
//         count++;
//     }
//     newtail->next = NULL;
//     tail->next = head;

//     return newhead;
// }