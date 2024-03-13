#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct player
{
  char name[30];
  int id;
  int score;
  struct player *link;
};

struct player* insert_at_first_position(struct player*, struct player*);
struct player* insert_at_last_position(struct player*, struct player*);
struct player* delete_from_first_position(struct player*);
struct player* delete_from_last_position(struct player*);
void display_SLL(struct player*);
void count_players(struct player*);
void insert_at_given_position(struct player*);
void delete_at_given_position(struct player*);
int is_player_playing(struct player*);
void player_play_after(struct player*);
void player_play_before(struct player*);
void insert_player_to_left(struct player*, struct player*);
void insert_player_to_right(struct player*, struct player*);

int main()
{
    struct player *head, *ptr;
    head = NULL;
    int ch;

    do
    {
        printf("1--INSERT A PLAYER AT FIRST POSITION\n");
        printf("2--INSERT A PLAYER AT LAST POSITION\n");
        printf("3--DELETE A PLAYER FROM FIRST POSITION\n");
        printf("4--DELETE A PLAYER FROM LAST POSITION\n");
        printf("5--DISPLAY DETAILS\n");
        printf("6--COUNT NUMBER OF PLAYERS\n");
        printf("7--INSERT AT A GIVEN POSITION\n");
        printf("8--DELETE AT A GIVEN POSITION\n");
        printf("9--CHECK WHETHER GIVEN PLAYER IS PLAYING OR NOT\n");
        printf("10--PLAYER WHO PLAY AFTER THE GIVEN PLAYER\n");
        printf("11--PLAYER WHO PLAY BEFORE THE GIVEN PLAYER\n");
        printf("12--INSERT A NEW PLAYER TO THE LEFT\n");
        printf("13--INSERT A NEW PLAYER TO THE RIGHT\n");
        printf("14--EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                ptr = (struct player*)malloc(sizeof(struct player));
                printf("Enter name, id, and score of the player: ");
                scanf("%s %d %d", ptr->name, &ptr->id, &ptr->score);
                head = insert_at_first_position(head, ptr);
                break;
            case 2:
                ptr = (struct player*)malloc(sizeof(struct player));
                printf("Enter name, id, and score of the player: ");
                scanf("%s %d %d", ptr->name, &ptr->id, &ptr->score);
                head = insert_at_last_position(head, ptr);
                break;
            case 3:
                if (head == NULL)
                    printf("CSLL is empty\n");
                else
                    head = delete_from_first_position(head);
                break;
            case 4:
                if (head == NULL)
                    printf("CSLL is empty\n");
                else
                    head = delete_from_last_position(head);
                break;
            case 5:
                if (head == NULL)
                    printf("CSLL is empty\n");
                else
                    display_SLL(head);
                break;
            case 6:
                count_players(head);
                break;
            case 7:
                insert_at_given_position(head);
                break;
            case 8:
                delete_at_given_position(head);
                break;
            case 9:
                is_player_playing(head);
                break;
            case 10:
                player_play_after(head);
                break;
            case 11:
                player_play_before(head);
                break;
            case 12:
                ptr = (struct player*)malloc(sizeof(struct player));
                printf("Enter name, id, and score of the player: ");
                scanf("%s %d %d", ptr->name, &ptr->id, &ptr->score);
                insert_player_to_left(head, ptr);
                break;
            case 13:
                ptr = (struct player*)malloc(sizeof(struct player));
                printf("Enter name, id, and score of the player: ");
                scanf("%s %d %d", ptr->name, &ptr->id, &ptr->score);
                insert_player_to_right(head, ptr);
                break;
            case 14:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 14);

    return 0;
}

struct player* insert_at_first_position(struct player* head, struct player* ptr)
{
    if (head == NULL)
    {
        head = ptr;
        ptr->link = head;
    }
    else
    {
        struct player* start = head;
        while (start->link != head)
        {
            start = start->link;
        }
        ptr->link = head;
        start->link = ptr;
        head = ptr;
    }
    return head;
}

struct player* insert_at_last_position(struct player* head, struct player* ptr)
{
    if (head == NULL)
    {
        head = ptr;
        ptr->link = head;
    }
    else
    {
        struct player* start = head;
        while (start->link != head)
        {
            start = start->link;
        }
        start->link = ptr;
        ptr->link = head;
    }
    return head;
}

struct player* delete_from_first_position(struct player* head)
{
    struct player* start = head, *cur;

    if (head->link == head)
    {
        printf("Player deleted is:\n");
        printf("Name: %s\tID: %d\tScore: %d\n", head->name, head->id, head->score);
        free(head);
        head = NULL;
    }
    else
    {
        while (start->link != head)
        {
            start = start->link;
        }
        printf("Player deleted is:\n");
        printf("Name: %s\tID: %d\tScore: %d\n", head->name, head->id, head->score);
        cur = head->link;
        free(head);
        start->link = cur;
        head = cur;
    }
    return head;
}

struct player* delete_from_last_position(struct player* head)
{
    struct player* start = head, *cur;

    if (head->link == head)
    {
        printf("Player deleted is:\n");
        printf("Name: %s\tID: %d\tScore: %d\n", head->name, head->id, head->score);
        free(head);
        head = NULL;
    }
    else
    {
        while (start->link != head)
        {
            cur = start;
            start = start->link;
        }
        printf("Player deleted is:\n");
        printf("Name: %s\tID: %d\tScore: %d\n", start->name, start->id, start->score);
        free(start);
        cur->link = head;
    }
    return head;
}

void display_SLL(struct player* head)
{
    struct player* start = head;

    do
    {
        printf("Name: %s\tID: %d\tScore: %d\n", start->name, start->id, start->score);
        start = start->link;
    } while (start != head);
}

void count_players(struct player* head)
{
    struct player* start = head;
    int count = 0;

    do
    {
        count++;
        start = start->link;
    } while (start != head);

    printf("Number of players: %d\n", count);
}

void insert_at_given_position(struct player* head)
{
    struct player* ptr, *cur;
    int pos, i = 1;

    ptr = (struct player*)malloc(sizeof(struct player));
    printf("Enter name, id, and score of the player: ");
    scanf("%s %d %d", ptr->name, &ptr->id, &ptr->score);

    printf("Enter the position to insert the player: ");
    scanf("%d", &pos);

    cur = head;

    if (pos == 1)
    {
        ptr->link = head;
        while (cur->link != head)
        {
            cur = cur->link;
        }
        cur->link = ptr;
        head = ptr;
    }
    else
    {
        while (i < pos - 1 && cur->link != head)
        {
            cur = cur->link;
            i++;
        }
        if (i == pos - 1)
        {
            ptr->link = cur->link;
            cur->link = ptr;
        }
        else
        {
            printf("Invalid position\n");
            free(ptr);
        }
    }
}

void delete_at_given_position(struct player* head)
{
    struct player* cur, *temp;
    int pos, i = 1;

    printf("Enter the position to delete the player: ");
    scanf("%d", &pos);

    cur = head;

    if (pos == 1)
    {
        while (cur->link != head)
        {
            cur = cur->link;
        }
        temp = head;
        if (head->link == head)
            head = NULL;
        else
        {
            cur->link = head->link;
            head = head->link;
        }
        printf("Player deleted is:\n");
        printf("Name: %s\tID: %d\tScore: %d\n", temp->name, temp->id, temp->score);
        free(temp);
    }
    else
    {
        while (i < pos - 1 && cur->link != head)
        {
            cur = cur->link;
            i++;
        }
        if (i == pos - 1)
        {
            temp = cur->link;
            cur->link = temp->link;
            printf("Player deleted is:\n");
            printf("Name: %s\tID: %d\tScore: %d\n", temp->name, temp->id, temp->score);
            free(temp);
        }
        else
        {
            printf("Invalid position\n");
        }
    }
}

int is_player_playing(struct player* head)
{
    struct player* cur;
    int id;

    printf("Enter the player ID to check if they are playing: ");
    scanf("%d", &id);

    cur = head;

    do
    {
        if (cur->id == id)
        {
            printf("Player is playing\n");
            return 1;
        }
        cur = cur->link;
    } while (cur != head);

    printf("Player is not playing\n");
    return 0;
}

void player_play_after(struct player* head)
{
    struct player* cur;
    int id;

    printf("Enter the player ID to find the player who plays after them: ");
    scanf("%d", &id);

    cur = head;

    do
    {
        if (cur->id == id)
        {
            printf("Player who plays after: \n");
            printf("Name: %s\tID: %d\tScore: %d\n", cur->link->name, cur->link->id, cur->link->score);
            return;
        }
        cur = cur->link;
    } while (cur != head);

    printf("Player not found\n");
}

void player_play_before(struct player* head)
{
    struct player* cur, *prev;
    int id;

    printf("Enter the player ID to find the player who plays before them: ");
    scanf("%d", &id);

    cur = head;
    prev = NULL;

    do
    {
        if (cur->id == id)
        {
            printf("Player who plays before: \n");
            printf("Name: %s\tID: %d\tScore: %d\n", prev->name, prev->id, prev->score);
            return;
        }
        prev = cur;
        cur = cur->link;
    } while (cur != head);

    printf("Player not found\n");
}

void insert_player_to_left(struct player* head, struct player* ptr)
{
    struct player* cur, *prev;
    int id;

    printf("Enter the player ID to find the position to insert the new player: ");
    scanf("%d", &id);

    cur = head;
    prev = NULL;

    do
    {
        if (cur->id == id)
        {
            if (prev == NULL)
            {
                ptr->link = head;
                while (cur->link != head)
                {
                    cur = cur->link;
                }
                cur->link = ptr;
                head = ptr;
            }
            else
            {
                ptr->link = cur;
                prev->link = ptr;
            }
            return;
        }
        prev = cur;
        cur = cur->link;
    } while (cur != head);

    printf("Player not found\n");
}

void insert_player_to_right(struct player* head, struct player* ptr)
{
    struct player* cur, *next;
    int id;

    printf("Enter the player ID to find the position to insert the new player: ");
    scanf("%d", &id);

    cur = head;

    do
    {
        if (cur->id == id)
        {
            next = cur->link;
            ptr->link = next;
            cur->link = ptr;
            return;
        }
        cur = cur->link;
    } while (cur != head);

    printf("Player not found\n");
}
