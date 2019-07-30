/*************************************************************************
*****
*
*
* sf.c
*
* Simple program that opens the "Send to" folder of the current user.
The
* location of this folder can be obtained from
SHGetSpecialFolderLocation().
* Then sf tries to convert the Item Identifier to a string using
* SHGetPathFromIDList() and opens the folder using ShellExecute().
*
*
*                                                     (c) Florian
Balmer
1999
*
textview@bluewin.ch
*
http://www.flos-freeware.ch
*
*
**************************************************************************
****/


#include <windows.h>
#include <shellapi.h>
#include <shlobj.h>


int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInst,
                   LPSTR lpCmdLine,int nCmdShow)
{

  LPITEMIDLIST pidl;
  LPMALLOC     lpMalloc;
  char         sz[MAX_PATH];

  char         *pErrMsg  = "Error opening "Send to" folder.";
  char         *pCaption = "Send to";

  if (NOERROR == SHGetSpecialFolderLocation(
                   NULL,CSIDL_SENDTO,&pidl))
  {
    SHGetPathFromIDList(pidl,sz);

    if (NOERROR == SHGetMalloc(&lpMalloc))
    {
      lpMalloc->lpVtbl->Free(lpMalloc,pidl);
      lpMalloc->lpVtbl->Release(lpMalloc);
    }

    if (32 >=
(int)ShellExecute(NULL,"open",sz,NULL,NULL,SW_SHOWNORMAL))
      MessageBox(NULL,pErrMsg,pCaption,MB_ICONEXCLAMATION);
  }

  else
    MessageBox(NULL,pErrMsg,pCaption,MB_ICONEXCLAMATION);

  return(0);

}


// End of sf.c
