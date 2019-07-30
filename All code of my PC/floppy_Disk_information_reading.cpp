//Disk.cpp
//Reads floppy disk properties(Ensure floppy is avaiable in drive)
//Renjith Joseph
//Perumbavoor P.O, Ernakulam Dist. Kerala State, india
//E-mail: renjithmathewjoseph@hotmail.com
//All rights reserved.

#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
     clrscr();
     //Floppy Drive Properties
     struct fatinfo diskinfo;
     getfat(1, &diskinfo);
     cout<<"Floppy Disk Properties..
--------------------------";
     cout<<"
Sectors per cluster:"<<diskinfo.fi_sclus;
     cout<<"
Number of clusters:"<<diskinfo.fi_nclus;
     cout<<"
Bytes per sector:"<<diskinfo.fi_bysec;
     struct dfree free;
     long avail;
     getdfree(1,&free);
     avail =(long)free.df_avail*(long)free.df_bsec*(long)free.df_sclus;
     cout<<"
Total bytes available:"<<avail<<" Bytes";
     cout<<"
Bytes free:"<<(long)free.df_avail<<" Bytes";
     getfatd(&diskinfo);
     //Hard disk drive properties
     cout<<"

Default Drive
Properties..
--------------------------";
     cout<<"
Sectors per cluster:"<<diskinfo.fi_sclus;
     cout<<"
FAT ID byte:"<<(diskinfo.fi_fatid & 0xFF);
     cout<<"
Number of clusters:"<<diskinfo.fi_nclus;
     cout<<"
Bytes per sector:"<<diskinfo.fi_bysec;
     getch();
}
