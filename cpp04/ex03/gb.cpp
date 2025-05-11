#include "gb.hpp"


t_Node* GarbegeCollector::liste_New(void *tmp)
{
    t_Node	*New;

	New = new(t_Node);
	New->tmp = tmp;
	New->next = NULL;
	return (New);
}
GarbegeCollector::GarbegeCollector()
{
    this->top = NULL;
}

void GarbegeCollector::liste_add(t_Node *node){
    if(node)
    {
        node->next = this->top;
        this->top = node;
    }
}
void GarbegeCollector::liste_remove(void *tmp){
    t_Node *tmpNode;


    if(this->top->tmp == tmp)
    {
        tmpNode = this->top;
        this->top = this->top->next;
        delete tmpNode;
    }
    else
    {
        t_Node *tmpNode1 = this->top; 
        while(tmpNode1)
        {
            if(tmpNode1->tmp == tmp)
            {
                tmpNode = tmpNode1;
                tmpNode1 = tmpNode1->next;
                delete tmpNode;
                break;
            }
            tmpNode1 = tmpNode1->next;
        }
    }        
}
bool GarbegeCollector::liste_check(void *tmp){

    t_Node *tmplist = this->top;
    while(tmplist)
    {
        if(tmplist->tmp == tmp)
            return 1;
        tmplist = tmplist->next;
    }
    return 0;
}
GarbegeCollector::~GarbegeCollector(){
    std::cout<<"GB"<<std::endl;
    if(this->top)
    {
        t_Node *tmp;
        while(this->top)
        {
            tmp = this->top;
            this->top= this->top->next;
            ::operator delete(tmp->tmp);
            delete tmp;
        }
    }
    std::cout<<"endl bg"<<std::endl;
}

GarbegeCollector    floor;