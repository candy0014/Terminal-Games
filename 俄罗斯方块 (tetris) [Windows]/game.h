#ifndef GAME_H
#define GAME_H

#include "place.h"
#include "init.h"
#include "block.h"
namespace Game{

void game(){
	int flag=0;
	for(int i=0;i<Bag*7;i++){
		setvbuf(stdout,NULL,_IOFBF,4096);
		for(int j=0;j<Next_num;j++){
			Block::get_block(Init::bl[i+j]).put_next(j,0);
			Block::get_block(Init::bl[i+j+1]).put_next(j);
		}
		setvbuf(stdout,NULL,_IONBF,0);
		int res=Place::play(board,Block::get_block(Init::bl[i]),flag|(!Open_hold));
		if(res==2) return;
		else if(res==1){
			if(Init::now_hold!=-1) std::swap(Init::now_hold,Init::bl[i]),i--,flag=1;
			else Init::now_hold=Init::bl[i],flag=1;
		}
		else{
			if(flag) Block::get_block(Init::now_hold).put_hold();
			flag=0;
		}
	}
}

}

#endif
