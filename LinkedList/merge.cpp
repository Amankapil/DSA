// node *merge(node *&head1, node *&head2)
// {
//     node *p1 = head1;
//     node *p2 = head2;
//     node *dummynode = new node(-1);
//     node *p3 = dummynode;

//     while (p1 != NULL && p2 != NULL)
//     {
//         if (p1->data > p2->data)
//         {
//             p3->next = p1;
//             p1 = p1->next;
//         }
//         else
//         {
//             p3->next = p2;
//             // p2 = p2->next;
//         }
//     }
//     while (p1 != NULL)
//     {
//         p3->next = p1;
//         p1 = p1->next;
//         p3 = p3->next;
//     }
//     while (p2 != NULL)
//     {
//         p3->next = p2;
//         p2 = p2->next;
//         p3 = p3->next;
//     }
// }