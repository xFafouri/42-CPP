#ifndef GARBAGE_COLLECTOR_HPP
#define GARBAGE_COLLECTOR_HPP

#include <iostream>

typedef struct s_Node{
    void *tmp;
    struct s_Node *next;
}t_Node;


class GarbegeCollector{
    private:
        t_Node *top;
    public:
        GarbegeCollector();
        ~GarbegeCollector();
        void liste_add(t_Node *node);
        void liste_remove(void *tmp);
        bool liste_check(void *tmp);
        t_Node* liste_New(void *tmp);
};
extern GarbegeCollector floor;
#endif