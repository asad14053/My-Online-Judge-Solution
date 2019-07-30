/*******************************************************************

******************************************************************/

/*******************************************************************/
/*                                                                 */
/* Electronic Telephone Directory - File Handling and Graphics     */
/*                                                                 */
/*                                                                 */
/* Password at startup is "password". 				   */
/*                                                                 */
/* Programmed by Ravi Intodia					   */
/*                                                                 */
/*******************************************************************/

#include   <iostream.h>
#include      <conio.h>
#include     <stdlib.h>
#include    <fstream.h>
#include	<dos.h>
#include      <ctype.h>
#include     <string.h>
#include       <time.h>
#include      <stdio.h>
#include   <graphics.h>

char 	*dir={"files.rec"};

/**--declaring macros--**/

#define size 	     16
#define xy(z) (8*(z-1))

class   directory{
	public:
char 	*getdata(int);
void 	database(int),
	intro(),
	empty(),
	mainprogram(int),
	fileoptions(int),
	helpoptions(int),
	addentry(),
	modify(),
	search(),
	erase(),
	sorry();
int 	access();
	/*--end of class directory-**/ };

struct	info{
char    name[size];
char	number[size];
char	location[size];
char	info[size];
	/**--end of info structure--**/ }n;

char    *directory::getdata(int type){
	char data[size],key,x=0;do{
	key=getch();
	if(key==13&&x>0)break;else
	if((key!=8&&x==13)||(key==13&&x==0)){
	sound(500);delay(100);nosound();key=0x1b;}else
	if(isalnum(key)&&x<size-1){
	data[x]=key;x++;if(type==0)printf("*");
	else cout<<key; }else
	if(key==8&&x>0){printf("%c%c%c",8,32,8);x--;}else{
	sound(500);delay(100);nosound();}}
	while(x<size-1);data[x]='
