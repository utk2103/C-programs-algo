#include<stdio.h>
#include<stdlib.h> 
  struct node* create(struct node* start); 
  struct node* display(struct node* start);
  struct node* insertatbeg(struct node* start); 
  struct node* insertatend(struct node* start); 
  struct node* insertbeforepos(struct node* start); 
  struct node* insertafterpos(struct node* start); 
  struct node* deleteatbeg(struct node* start);
  struct node* deleteatend(struct node* start);
  struct node* deletebeforepos(struct node* start); 
  struct node* deleteafterpos(struct node* start); 
  struct node* reverse(struct node* start);
  struct node* size(struct node* start);
  struct node* search(struct node* start);
  struct node{ int data; struct node *next; };
  struct node *start=NULL; void main()
  { 
    int option;
     printf("1.Create a circular linked list \n"); 
     printf("2.Display a circular linked list \n");
     printf("3.Insert at the begining of a circular linked list \n");
       printf("4.Insert at the end of a circular linked list \n"); 
       printf("5.Insert before a particular position \n"); 
       printf("6.Insert after a particular position \n"); 
       printf("7.Delete a node at the begining of a circular linked list \n");
        printf("8.Delete a node at the end of a circular linked list \n");
         printf("9.Delete before a particular position \n"); 
         printf("10.Delete after a particular position \n");
          printf("11.Calculate the number of elements of the circular linked list \n");
           printf("12.Search an element in the circular linked list \n"); 
           printf("13.Reverse a circular linked list \n");
            while(1)
            { 
                printf("Choose an option from the following: \n"); 
     scanf("%d",&option);
     switch(option)
     { 
        case 1:
         printf("Enter values and to finish entering, press -1 on terminal!\n"); 
         start = create(start); 
         break;
          case 2:
           display(start); 
           break; 
           case 3:
            start = insertatbeg(start); 
            display(start);
             break;
              case 4: 
              start = insertatend(start);
               display(start);
                break;
                 case 5: 
                 start = insertbeforepos(start);
                  display(start);
                   break;
                    case 6:
                     start = insertafterpos(start); 
                     display(start);
                      break;
                       case 7: 
                       start = deleteatbeg(start);
                        display(start); 
                        break; 
                        case 8:
                         start = deleteatend(start);
                          display(start);
                           break;
                            case 9:
                             start = deletebeforepos(start);
                              display(start);
                               break;
                                case 10:
                                 start = deleteafterpos(start);
                                 display(start);
                                  break;
                                   case 13:
                                    start = reverse(start);
                                     display(start);
                                      break;
                                       case 11:
                                        start=size(start); 
                                        break; 
                                        case 12:
                                         start=search(start);
                                          break;
                                           default: 
                                           printf("Enter correct option!!\n");
                                            }
                                             }
                                              } 
                                              struct node* create(struct node* start)
                                              { 
                                                int num;
                                                 struct node *newnode,*ptr;
                                                 // printf("Enter data:\n");
scanf("%d",&num);
 while(num!=-1)
 { 
    newnode=(struct node*)calloc(1,sizeof(struct node));
     newnode->data=num; 
     if(start==NULL)
     { 
        start=newnode; 
        newnode->next=start;
         } 
         else 
         { ptr=start;
          while(ptr->next!=start)
          { 
            ptr=ptr->next;
           } 
           ptr->next=newnode; 
           newnode->next=start;
            }
             scanf("%d",&num);
              } 
              return start;
               } 
               struct node* display(struct node* start)
               { 
                struct node *ptr;
                 ptr=start; 
                 if (start == NULL)
                  {
                     //printf("Circular linked list is empty.\n"); 
                     return start;
                      }
                       do 
                       { printf("%d --> ", ptr->data);
                        ptr = ptr->next;
                         }
                          while (ptr != start);
                           printf("START");
                            printf("\n");
                             return start;
                              } 
                              struct node* insertatbeg(struct node* start)
                               {
                                 struct node *newnode, *ptr;
                                  int num;
                                   printf("Enter the value you want to insert at the beginning: ");
                                    scanf("%d", &num);
                                     newnode = (struct node*)calloc(1, sizeof(struct node));
                                      newnode->data = num;
                                       if (start == NULL)
                                        {
                                             newnode->next = newnode;
                                              // Circular link to itself for the first node 
                                              } else
                                               { 
                                                ptr = start;
                                                 while (ptr->next != start)
                                                  {
                                                     ptr = ptr->next;
                                                      }
                                                       ptr->next = newnode; 
                                                       newnode->next = start; 
                                                       } 
                                                       start = newnode;
                                                        // Update the start pointer return start;
                                                         }
                                                          struct node* insertatend(struct node* start)
                                                          { struct node *newnode,*ptr;
                                                           int num; 
                                                           printf("Enter the value you want to insert at end: ");
                                                            scanf("%d",&num);
                                                             ptr=start;
                                                              newnode=(struct node*)calloc(1,sizeof(struct node));
                                                               newnode->data=num;
                                                                while(ptr->next!=start)
                                                                { ptr=ptr->next;
                                                                 } 
                                                                 ptr->next=newnode; 
                                                                 newnode->next=start; 
                                                                 return start;
                                                                  }
                                                                   struct node* insertbeforepos(struct node* start)
                                                                   { struct node *newnode,*ptr,*preptr; 
                                                                   int num;
                                                                    int val;
                                                                     printf("Ente the value before which you want to insert: \n");
                                                                      scanf("%d",&val);
                                                                       printf("Enter the value to be inserted: \n");
                                                                        scanf("%d",&num); 
                                                                        ptr=start;
                                                                         newnode=(struct node*)calloc(1,sizeof(struct node));
                                                                          newnode->data=num;
                                                                           while(ptr->data!=val)
                                                                           { 
                                                                            preptr=ptr; 
                                                                            ptr=ptr->next; 
                                                                            } 
                                                                            preptr->next=newnode;
                                                                             newnode->next=ptr; 
                                                                             return start; }
                                                                              struct node*
                                                                               insertafterpos(struct node* start)
                                                                               {
                                                                                 struct node *newnode,*ptr,*preptr;
                                                                                  int num;
                                                                                   int val;
                                                 printf("Enter the value after which you want to insert: \n");
                                                  scanf("%d",&val); 
                                                  printf("Enter the value to be inserted: \n");
                                                   scanf("%d",&num); 
                                                   ptr=start;
                                                    newnode=(struct node*)calloc(1,sizeof(struct node)); 
                                                    newnode->data=num; 
                                                    while(ptr->data!=val)
                                                    { ptr=ptr->next;
                                                     } preptr=ptr->next; 
                                                     ptr->next=newnode;
                                                     newnode->next=preptr;
                                                      return start;
                                                       } struct node* deleteatbeg(struct node* start) 
                                                       { 
                                                        if (start == NULL) 
                                                        { //printf("Circular linked list is empty. Cannot delete.\n");
                                                         return start;
                                                          } 
                                                          struct node *ptr = start; 
                                                          if (start->next == start) 
                                                          { 
                                                            free(start);
                                                             start = NULL;
                                                              } 
                                                              else { 
                                                                while (ptr->next != start) 
                                                                { ptr = ptr->next; 
                                                                } ptr->next = start->next;
                                                                 struct node *temp = start;
                                                                  start = start->next; 
                                                                  free(temp);
                                                                   } return start; 
                                                                   } struct node* deleteatend(struct node* start)
                                                                   { struct node *ptr,*preptr;
                                                                    ptr=start;
                                                                     while(ptr->next!=start)
                                                                     {
                                                                         preptr=ptr;
                                                                          ptr=ptr->next;
                                                                           } 
                                                                           preptr->next=start; 
                                                                           free(ptr);
                                                 return start; 
                                                 }
                                                  struct node* deletebeforepos(struct node* start)
                                                  {
                                                     struct node *ptr,*preptr,*p1; 
                                                     ptr=start;
                                                      preptr=start;
                                                       int val;
                                                        printf("Enter the value before which you want to delete the node: \n"); 
                                                        scanf("%d",&val); 
                                                        while(ptr->data!=val)
                                                        { p1=preptr; 
                                                        preptr=ptr;
                                                         ptr=ptr->next; 
                                                         } 
                                                         p1->next=ptr; 
                                                         free(preptr);
                                                          return start; 
                                                          } struct node* deleteafterpos(struct node* start)
                                                          { struct node *ptr,*preptr; 
                                                          ptr=start;
                                                           preptr=start; 
                                                           int val;
                                                            printf("Enter the value after which you want to delete the node: \n");
                                                             scanf("%d",&val);
                                                              while(ptr->data!=val)
                                                              { ptr=ptr->next;
                                                               } preptr=ptr->next;
                                                                ptr->next=preptr->next; 
                                                                free(preptr); 
                                                                return start; 
                                                                } struct node* size(struct node* start)
                                                                { 
                                                                    struct node *ptr;
                                                                     ptr=start; 
                                                                     int i=1; 
                                                                     while(ptr->next!=start)
                                                                     { ptr=ptr->next;
                                                                      i++;
                                                                      } 
                                                                      printf("The linked list has %d elements. \n",i); 
                                                                      return start;
                                                                       } 
                                                                       struct node* reverse(struct node* start)
                                                                       {
                                                                         if (start == NULL || start->next == start)
                                                                          {
                                                                             return start;
                                                 } struct node *prevnode = NULL; 
                                                 struct node *currentnode = start; 
                                                 struct node *nextnode = NULL;
                                                  do
                                                   { nextnode = currentnode->next;
                                                    currentnode->next = prevnode; 
                                                    prevnode = currentnode; 
                                                    currentnode = nextnode;
                                                     }
                                                      while (currentnode != start);
                                                       start = prevnode;
                                                        return start;
                                                         } 
                                                         struct node* search(struct node* start)
                                                         { 
                                                            struct node *ptr; 
                                                            ptr=start;
                                                             int i=1; 
                                                             int val;
                                                              printf("Enter the value you want to search in the linked list: \n"); 
                                                              scanf("%d",&val); 
                                                              while(ptr->next!=start)
                                                              { if(ptr->data==val)
                                                              { 
                                                                printf("The element %d is present at %d position in the linked list.\n",val,i); 
                                                                } 
                                                                i++;
                                                                 ptr=ptr->next; 
                                                                 } 
                                                                 if(ptr->data==val)
                                                                  {
                                                                     printf("The element %d is present at %d position in the linked list.\n",val,i);
                                                                      }
                                                                       }

