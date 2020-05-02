#include<windows.h>
#include<process.h>
#include<stdio.h>
/*HANDLE　hProcess;
HANDLE　hThread ;
< /li>*/
DWORD WINAPI athread( void )    //线程函数
{
    WaitForSingleObject( hProcess, INFINITE ) ; 
    return 0 ;
}
bool createThread( int threadNum )    //参数表示创建的线程数
{
    int i ;
    hProcess =  GetCurrentProcess();
    for( i = 0; i < threadNum; i++ )
    {
        hThread = NULL ;
        hThread = (HANDLE)_beginthreadex( NULL, 0, (unsigned int (__stdcall *)(void *))athread, NULL, NULL, NULL ) ;
        if( hThread != NULL )
        {
            printf("/rThe Number of Thread : %d ", i+1 ) ;
        }else{
            printf("/nError : Create Thread Fail./n") ;
            return false ;
        }
    }
    return true ;
}
int main()
{
        printf("Test : How much thread a process can create./n") ;
        createThread( 4500 ) ;
        getchar();
        return 0 ;
}
