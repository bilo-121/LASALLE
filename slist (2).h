#include <string>
using namespace std;
class Airport
{
public:
    char    code[5];
    double   longitude;
    double   latitude;

};

struct node
{
    Airport data;
    node *next;
};
/* class linked_list{
	public:
		node* head;
    node* tail;
		int length;

void add_node(Airport n);
//void exchg(int index1, int index2);
//void insert (int i1,int i2);
void swap(int index1,int index2);
//bool isEmpty ();
//void clear();
//bool equals (linked_list a);
//void set (int l, Airport * n)
//void insert(int chief_beef, Airport * n);
int size();
Airport getNode(int indx);
}
*/