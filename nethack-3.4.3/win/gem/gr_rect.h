/* gr_rect.h */
#include <e_gem.h>
/********** structs **********/
typedef struct {
	GRECT *rects;
	int max,used;
} dirty_rect;
/********* functions ************/
dirty_rect *new_dirty_rect(int size);
void delete_dirty_rect(dirty_rect *this);
int add_dirty_rect(dirty_rect *dr,GRECT *area);
int get_dirty_rect(dirty_rect* dr,GRECT *area);
int clear_dirty_rect(dirty_rect *dr);
int resize_dirty_rect(dirty_rect *dr,int new_size);
