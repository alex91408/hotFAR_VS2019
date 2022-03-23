//----------------------------------------------------------------------------------------------
// 每次更改請在此區註解    最新放最上面 CHING2  p400()  
// ver 要改   #define VERSION XXXX   每次異動版本需要修改
//
//----------------------------------------------------------------------------------------------

#define VERSION1   "20220218  V6.10 vs2019 "


//20220218 V6.1 ching2  modify hotFAR for VS2019  及弱掃
//20220208 V6.0 ching2  modify hotFAR for VS2019  及弱掃
// 
// 台北醫院 hotTPH_L -->  遠東 hotFar
// 
    // 新版的 exp 不能用, 要改成 exVar ,  exp -->exVar
	//fdbprintf("hotGen v1.2 970312");  //970312
	//1060327 bug  需在 P100() 以後, 否則chk_exe_emis() 會當
	// exVar = exVar;

    //VS2005--> VS2019  專案--> 屬性
    // 目標平台版本--> 8.1                 平台工具組--> Visual Studio 2015 - Windows XP (v140_xp)
    // MFC使用--> 使用 MFC 的共用 DLL:     字元集--> 使用多位元組字元集

// V2.00  1071116  ching2    用新光醫院專案 VS2015遠進專案, 改成 台北醫院 hotTPH_L


//1030416  V5.7 ching2  add i02 抓 uap_sno 流水號

//1010529  v5.6 ching2  adjust  id_no  12->14 for acc
//1010528  V5.5 ching2  adjust  funPrint_Log & funKill_Log path
//1000531  v5.4 ching2  log bug struct 
//1000318  v5.3 sven    每日00:00:00重置流水號
//1000309  v5.2 ching2  add log for sno
//                      1000310 10->12 for id T222547163
// 980611  v5.1 ching2  add log for file_size
// 980425  V5.0 ching2  hotFAR_DB.cpp  --> hotFar.CPP   for 遠東理專錄音 

// 980106  v3.1 ching2  adjust 43-47 --> 47 one hot send be. sql order no the same
// 971219  V3.0 ching2  add hotFAR.txt add 43-47 service 10 line ivr
// 971021  v2.9 Jay     updata INQ 06 
// 970910  V2.8 ching2  adjust L01 Thread()
// 961022  V2.0 create  C:\\winonesys\\run\\log_8w\\  
// 970704  V2.0 bamer   modify  for db.close
// 961022  V2.0 ching2  Create hotFAR_DB.cpp  for 八方雲集  















// V1.*

//
// V2.40  1090323  chad_ding funDo_write_db_err 保留err檔30天
// V2.30  1090316  ching2    del funDateAdd_yyyymm() 及 funDel_old_db_move() 功能
// V2.20  1090226  ching2    .\\log_skh --> .\\log_tph_L
// V2.10  1090219  ching2    v25_1新增hot_rep[500 + 1]記錄查詢結果
// V2.00  1071116  ching2    用新光醫院專案 VS2015遠進專案, 改成 台北醫院 hotTPH_L
// 新版的 exp 不能用, 要改成 exVar ,  exp -->exVar







// V1.*



//

//1060209 ching2  exp 無法使用 要在 main 指定  exp = exVar;
//1060327 exp = exVar; bug  需在 P100() 以後, 否則chk_exe_emis() 會當


// V1.44  1070522  ching2    p400() add fdb_check_rotate();  for  dbg058 --> dbg058.dd      

// 以 hotdbg(hotpar 中 fprintf(1:yes, 0 : no)     CBA) 控制 debug 的參數
// A 為 '0' 時, vxp->dbg 為 'N', 否則 vxp->dbg 為 'Y'
// B 為 '0' 時, 用 fdbopenf(), 否則用 fdbopenfr()
// C 為 '1' 時, vxp->dbgTimeStamp 為 '1', fdbprintf() 加印 "YYYY-MM-DD hh:mm:ss ==> "// C 為 '2' 時, vxp->dbgTimeStamp 為 '2', fdbprintf() 加印 "YYYY-MM-DD hh:mm:ss.uuuuuu 

//otsconf  --> hotepar59     fprintf(1:yes,0:no) 	011    



//1090211 以下為弱掃參考

//1.  sprintf()  --> sprintf_s(A , sizeof(A), );
//2.  sscanf()   --> sscanf_s( , "%s " ,A , sizeof(A) )
//3.  strcat()   --> strcat_s(A , sizeof(A), );
//4.  memcpy()   --> memcpy_s(A , sizeof(A), );
//5.  _sopen()   --> _sopen_s(&

//  //fh = _sopen("D:\\otsfax\\URL_LOG_API\\000_API_Lock.txt", _O_RDWR, _SH_DENYNO, _S_IREAD | _S_IWRITE);
//  errno_t myErrNoT = _sopen_s(&fh, "D:\\otsfax\\URL_LOG_API\\000_API_Lock.txt", _O_RDONLY, _SH_DENYNO, _S_IREAD | _S_IWRITE);
//  //fdbprintf("myErrNoT=[%d]", myErrNoT);
//
//  if (myErrNoT != 0)
//  {  err

//6.  fopen()    --> errno_t myErrNoT = fopen_s(

//    if ((fd = fopen(tmp, "r")) == NULL) {
// 改
//    errno_t myErrNoT = fopen_s(&fd, "./conf/hotchk.txt", "r");     //1060211 原 hotchk 改讀 hotchk.txt
//    if (myErrNoT != 0)

//1090121 show_dbg有執行LOG，會咬住log檔無法寫檔，改
//    //1090106 old 
//    //if ((fp = fopen(sFile, "a")) == NULL)
//    //1090121 old 讀取檔案失敗bug
//    //errno_t myErrNoT = fopen_s(&fp, sFile, "a");
//    if ((fp = _fsopen(sFile, "a", _SH_DENYWR)) == NULL)

//7.  strcpy()   --> strcpy_s(A , sizeof(A), );
//8.  strncpy()   --> strncpy_s(A , sizeof(A), );

//9.  ctime      --> 改成下面
//
//OLD
//
//  struct   tm *tm;
//  long     lt;
//  time(&lt);
//  tm = localtime(&lt);
//  tm->tm_year - 11, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec

//1060211 new
//  time_t now;
//  struct tm newTime;
//  time(&now);
//    errno_t errNoT = localtime_s(&newTime, &now);

//  newTime.tm_year - 11, newTime.tm_mon + 1, newTime.tm_mday, newTime.tm_hour, newTime.tm_min, newTime.tm_sec
//

//  now += (-60 * 60 * 24);    //bofore day      //開前一天 只有這裏不同  1060217 by ching2
//  errno_t errNoT1 = localtime_s(&now_tm, &now);
//  now_tm.tm_year + 1900, now_tm.tm_mon + 1, now_tm.tm_mday, now_tm.tm_hour, now_tm.tm_min


// 1060211 new
// time_t now;
// struct tm now_tm;
// time(&now);
// errno_t errNoT = localtime_s(&now_tm, &now);
// //now_tm.tm_year - 11, now_tm.tm_mon + 1, now_tm.tm_mday, now_tm.tm_hour, now_tm.tm_min, now_tm.tm_sec


//10.strlen(fax_v25) --> strnlen_s(fax_v25, sizeof(fax_v25)

//11._itoa(iTemp, d, 10) --> _itoa_s(iTemp, d, sizeof(d), 10);


//12.system() --> system_new(scmd)

//int  system_new(char *scmd)
//{
//	FILE *pPipe = NULL;
//
//	if ((pPipe = _popen(scmd, "rt")) == NULL)
//	{
//		printf("執行失敗. %s-%s(%d)\r\n", __FILE__, __FUNCTION__, __LINE__);
//		return(-1);
//	}
//	else
//	{
//		printf("執行成功. %s-%s(%d)\r\n", __FILE__, __FUNCTION__, __LINE__);
//		_pclose(pPipe);
//		return(0);
//	}
//}

//13.fscanf() --> fscanf_s( , "%s " ,A , sizeof(A) )
//14.strtok() --> strtok_s()

// //1081230 new 
// char* next_token;

// //1081230 old 
// //token = strtok(temp1, seps); 
// token = strtok_s(temp1, seps, &next_token);  

// fdbprintf("[token]=[%s] \r\n", token );
// //1081230 old
// //token = strtok(NULL, seps);   
// token = strtok_s(NULL, seps, &next_token);  



//1070224 add
#define NO_WARN_MBCS_MFC_DEPRECATION           //1070224 ching2 add warning C4996: 'MBCS_Support_Deprecated_In_MFC': MBCS support in MFC is deprecated and may be removed in a future version of MFC.


#include  <stdio.h>
#include  <stdlib.h>
#include  <signal.h>
#include  <fcntl.h>
#include  <sys/types.h>
#include  <process.h>       //2008 new netbank
#include  <sys/stat.h>
#include  <io.h>
#include  <share.h>
#include  <sys/locking.h>

#include  <afx.h>
#include  <afxdb.h>

#include "datalink.h"       // for database

#include  <string.h>
#include  <time.h>          // for difftime

#include  <libginn_.h>
#if defined (_USE_GINNLIB_)
#include  <wyg/wselect.h>
#include  <wyg/wsocket.h>
#include  <wyg/wicmp.h>
//20220208 OLD #include  <wyg/wtcp.h>
#else
#include  <ginn/wselect.h>
#include  <ginn/wsocket.h>
#include  <ginn/wicmp.h>
//20220208 OLD #include  <ginn/wtcp.h>
#endif

#include <hots.h>





#include  <parprog.h>
#include  <fcontrol.h>
#include  <otsconf.h>

#include <direct.h>               // _chdir()       //V2.39

//#include  "datalink.h"						// for dblink

//20220208 OLD #include "hotLOG.h"



//-----------------------------------------------------------------------------
// for trol kernel
//-----------------------------------------------------------------------------

extern  void err_stop(int);
extern  int  p100(void);
extern  int  p900(void);
extern  void fdbprintf(const char *fmt, ...);
extern  vx	    vxp;
//ex exp;

//20220208 NEW
//extern  ex      exp;


int  linepos, lineno;
int  evdeb, evfin;


// V2.33
int       DB2Stop = 0;


//-----------------------------------------------------------------------------
// for trol kernel end
//-----------------------------------------------------------------------------






//-----------------------------------------------------------------------------
//for hotATM.cpp local use START
//-----------------------------------------------------------------------------



int			chk_pos;


//-----------------------------------------------------------------------------
//for hotATM.cpp local use  END
//-----------------------------------------------------------------------------




//-----------------------------------------------------------------------------
// for DES
//-----------------------------------------------------------------------------

extern _declspec(dllexport) int _stdcall des_decrypt(BYTE *data, int count, BYTE *key);
extern _declspec(dllexport) int _stdcall des_encrypt(BYTE *data, int count, BYTE *key);

typedef unsigned char   uchar;
typedef unsigned char   BYTE;

//-----------------------------------------------------------------------------
// for DES
//-----------------------------------------------------------------------------




//----------------------------------------------------------------------------
// 開 ./conf/hotTPH_L.txt  參數檔   讀進sql 帳號 及 密碼
// int funRead_set()  用
//----------------------------------------------------------------------------
// # SQL connect string



//----------------------------------------------------------------------------
// 開 ./cfg/hotFAR.txt  參數檔   讀進sql 帳號 及 密碼
// int funRead_set()  用
//----------------------------------------------------------------------------
// # SQL connect string

char conf_DSN1[500];        //
char conf_SQLID1[500];      //
char conf_SQLPW1[500];      //


//char conf_DSN[500];                  //
//char conf_SQLID[500];                //
//char conf_SQLPW[500];                //


//20220208
////char conf_ivr_start[50];             //4   1                  
////char conf_ivr_end[50];               //5   120
//////
////char conf_machineArea[50] = { 0 };   //
////char conf_machineNo[50] = { 0 };     //
////
//////V2.20
////char conf_log_expire[20];
////char conf_tablog[3000];




//-----------------------------------------------------------------------------
// 本程使用
//-----------------------------------------------------------------------------

char sTemp[9000];

//-----------------------------------------------------------------------------
// 970630 add thread 
//-----------------------------------------------------------------------------
DWORD  id;
HANDLE hThread_all[200];     //hThread 
DWORD  retCode_all[200];
int    retCode_all_flag[200];
char   sIN_all[200][200];
int    L01_flag = 1;    // 0: no call thread L01 , 1:yes call thread L01 
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// FAR LOG 使用
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// FAR LOG 使用
//-----------------------------------------------------------------------------

typedef struct {

	char    line_no[2 + 1];            // 1.線路別 1 2 
	char    is1;                     // '/' 

	char    line_hour[3 + 1];          // 2.線路時段
	char    is2;                     // '/'

	char    stime_in[20 + 1];          // 3.進線起始時間 YYYY/MM/DD hh:mm:ss 
	char    is3;                     // '/' 

	char    etime_out[20 + 1];         // 4.出線起始時間 YYYY/MM/DD hh:mm:ss 
	char    is4;                     // '/' 

	char    lang[1 + 1];               // 5.語言 1:國語 2:台語
	char    is5;                     // '/' 

	char    trid[4 + 1];               // 6.交易 1:直接錄音 2:依產品
	char    is6;                     // '/' 

	char    error[4 + 1];              // 7.錯誤代碼   0000: 成功  E****
	char    is7;                     // '/' 

	char    bra01[3 + 1];              // 8.分行代碼   001   //BRA01(分行代碼)  
	char    is8;                     // '/' 

	char    bra05[20 + 1];              // 9.區別名稱   01   //BRA05(區別名稱)  3+1-> 20+1 for DB
	char    is9;                     // '/' 

	char    ao_code[20 + 1];           // 10.理專代碼
	char    is10;                    // '/' 

	//1010529  v5.6 ching2  adjust  id_no  12->14 for acc
	//1010529 old
	//char    id_no[12+1];             // 11.客戶ID  1000310 10->12 for id T222547163
	char    id_no[14 + 1];             // 11.客戶ID  1000310 10->12 for id T222547163   

	char    is11;                    // '/' 

	char    file_name[50 + 1];         // 12.錄音檔案     //30 to samll ->50 for db  \rec\99110\0504_2159_99110_2222.wav
	char    is12;                    // '/' 

	char    email[100 + 1];            // 13.email
	char    is13;                    // '/' 

	char    email_cc[100 + 1];         // 14.email_cc
	char    is14;
	// '/' 
	char    sno[15 + 1];               // 15.sno
	char    is15;                    // '/' 

	char    file_size[10 + 1];         // 16.file_size
	char    is16;                    // '/' 



} v25_1;



typedef struct _number {
	char shead[10];	                   // LOG END
	char totalnum[10];		             // 共幾筆
	v25_1 v25[5];
} number;

//  1000531  log bug 
number num;
number* num1;





//-----------------------------------------------------------------------------
//  NO:1 funMake_Time(char *sOut)
//
//        取得時間用
//
//  IN :
//  OUT: 
//-----------------------------------------------------------------------------
void funMake_Time(char *sOut, int sizeof_sOut)
{
	//new 

	time_t now;
	struct tm newTime;

	time(&now);
	errno_t errNoT = localtime_s(&newTime, &now);

	sprintf_s(sOut, sizeof_sOut, "[%02d/%02d %02d:%02d:%02d] ", newTime.tm_mon + 1, newTime.tm_mday, newTime.tm_hour, newTime.tm_min, newTime.tm_sec);

}





//-----------------------------------------------------------------------------
//  NO:2 funPrint_Log(char *data)
//
//       寫入dbg檔案  , 全部都寫
//
//  IN :
//  OUT: 
//-----------------------------------------------------------------------------
void funPrint_Log(char *sData_in)
{
	char   sFile[80];
	FILE   *fp;

	time_t now;
	struct tm newTime;

	time(&now);
	errno_t errNoT = localtime_s(&newTime, &now);

	//newtm->tm_year+1900
	//newtm->tm_mon+1
	//newtm->tm_mday
	//newtm->tm_wday  星期
	//newtm->tm_hour
	//newtm->tm_min
	//newtm->tm_sec 

	//20220208 OLD sprintf_s(sFile, sizeof(sFile), ".\\log_LOG\\LOG_%02d%02d_%02d.txt", newTime.tm_mon + 1, newTime.tm_mday, voie);
	sprintf_s(sFile, sizeof(sFile), ".\\log_FAR\\LOG_%02d%02d_%02d.txt", newTime.tm_mon + 1, newTime.tm_mday, voie);


	errno_t myErrNoT22 = fopen_s(&fp, sFile, "a");
	if (myErrNoT22 != 0) {
		sprintf_s(sTemp, sizeof(sTemp), "\r\nsOpen [%s] error!!! ", sFile);
		return;
	}
	else {
		char   sTime[30];

		if ((strcmp(sData_in, ".") == 0) || (strcmp(sData_in, "x") == 0)) {
			strcpy_s(sTime, sizeof(sTime), "");
		}
		else {
			funMake_Time(sTime, sizeof(sTime));
			fdbprintf("%s", sTime);      //dbg 顯示
			//fflush(fdbfd);

			fprintf(fp, "%s", sTime);    //寫檔
			fflush(fp);
		}

		fdbprintf("%s", sData_in);      //dbg 顯示
		//fflush(fdbfd);

		fprintf(fp, "%s", sData_in);    //寫檔
		fflush(fp);

		fclose(fp);
	}
}



//-----------------------------------------------------------------------------
//  NO:3 funKill_Log()
//
//        
//        
//  IN :
//  OUT: 
//-----------------------------------------------------------------------------
void funKill_Log()
{
	char   sFile[80];
	FILE   *fp;

	//1060211 new
	time_t now_time_t;
	struct tm now_tm;
	time(&now_time_t);
	now_time_t += (60 * 60 * 24);    //bofore day      //開前一天 只有這裏不同  1060217 by ching2 
	errno_t errNoT1 = localtime_s(&now_tm, &now_time_t);

	//20220208 OLD sprintf_s(sFile, sizeof(sFile), ".\\log_LOG\\LOG_%02d%02d_%02d.txt", now_tm.tm_mon + 1, now_tm.tm_mday, voie);
	sprintf_s(sFile, sizeof(sFile), ".\\log_FAR\\LOG_%02d%02d_%02d.txt", now_tm.tm_mon + 1, now_tm.tm_mday, voie);


	errno_t myErrNoT22 = fopen_s(&fp, sFile, "w");
	if (myErrNoT22 != 0)
	{
		sprintf_s(sTemp, sizeof(sTemp), "\r\nsOpen [%s] error!!! ", sFile);
		return;
	}
	else
	{
		fclose(fp);
	}


}



//-----------------------------------------------------------------------------
//  NO:4 show_time()
//
//       顯示時間用 
//        
//  IN : 無
//  OUT: 無
//-----------------------------------------------------------------------------
int show_time()
{
	//struct   tm* tm;
	//20220208 OLD long     lt;

	//20220208 OLD
	//time(&lt);
	//tm = localtime(&lt);

	time_t now;
	struct tm newTime;

	time(&now);
	errno_t errNoT = localtime_s(&newTime, &now);


	fdbprintf("[%02d/%02d/%02d]-[%02d:%02d:%02d] \r\n", newTime.tm_year - 11, newTime.tm_mon + 1, newTime.tm_mday, newTime.tm_hour, newTime.tm_min, newTime.tm_sec);
	return(0);
}



//------------------------------------------------------------------------------
//  NO:4 Toupper(int )
// 
//        
//  IN :
//  OUT: 
//------------------------------------------------------------------------------
int Toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return('A' + c - 'a');
	return(c);
}


//------------------------------------------------------------------------------
//  NO:5 *PackHEX( uchar *str, uchar *hex, int sz )
// 
//        
//  IN :
//  OUT: 
//------------------------------------------------------------------------------
char *PackHEX(uchar *str, uchar *hex, int sz)
{
	int i = 0, j = 0;

	while (sz-- > 0) {
		int c;

		if ((c = Toupper(*(hex + j++))) >= 'A')
			*(str + i) = (c - 'A' + 10) << 4;
		else
			*(str + i) = (c - '0') << 4;
		if ((c = Toupper(*(hex + j++))) >= 'A')
			*(str + i++) += c - 'A' + 10;
		else
			*(str + i++) += c - '0';
	}
	return((char *)str);
}


//---------------------------------------------------------------------------
char* UnpackCHARS(uchar* hex, uchar* str, int sz)
{
	int  i = 0, j = 0, va;

	while (sz-- > 0) {
		if ((va = *(str + j) >> 4) >= 10)
			*(hex + i++) = va - 10 + 'A';
		else
			*(hex + i++) = va + '0';
		if ((va = *(str + j++) & 0x0f) >= 10)
			*(hex + i++) = va - 10 + 'A';
		else
			*(hex + i++) = va + '0';
	}
	return((char*)hex);
}


//20220208 OLD
//
////-----------------------------------------------------------------------------
////  NO:6 funRead_set()
////
////       開 hotTPH_L.txt  參數檔   讀進sql 帳號 及 密碼
////        
////  IN : 無
////  OUT: 無
////-----------------------------------------------------------------------------
//int funRead_set()
//{
//	FILE *fd;
//	char tmp[2048];
//	char data[2048];
//	//char func[200];
//	int i = 0;
//
//	char s1[5000];
//
//
//	sprintf_s(s1, sizeof(s1), "\r\n funRead_set() start !!! --------------------------------------------- \r\n");
//	funPrint_Log(s1);
//
//
//	strcpy_s(tmp, sizeof(tmp), ".\\conf\\hotLOG.txt");   // 路徑為 conf
//
//	errno_t myErrNoT22 = fopen_s(&fd, tmp, "r");
//	if (myErrNoT22 != 0)
//	{
//		sprintf_s(s1, sizeof(s1), "open %s error !!! \r\n", tmp);
//		funPrint_Log(s1);
//		sprintf_s(s1, sizeof(s1), "\r\n funRead_set() end1   !!! --------------------------------------------- \r\n");
//		funPrint_Log(s1);
//		return(-1);
//	}
//
//	funPrint_Log("open log_LOG.txt ok ----------------------------------------------------------- \r\n");
//
//	memset(tmp, 0x20, sizeof(tmp));
//
//	while (fgets(tmp, sizeof(tmp), fd) != 0)
//	{
//		
//		memset(data, 0x20, sizeof(data));
//
//		sprintf_s(s1, sizeof(s1), "tmp=[%s] \r\n", tmp);
//		funPrint_Log(s1);
//		
//
//		//1.conf_DSN
//		if (strncmp(tmp, "conf_DSN", strnlen_s("conf_DSN", sizeof("conf_DSN"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_DSN, sizeof(conf_DSN), data);
//			continue;
//		}
//		//2.conf_SQLID
//		if (strncmp(tmp, "conf_SQLID", strnlen_s("conf_SQLID", sizeof("conf_SQLID"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_SQLID, sizeof(conf_SQLID), data);
//			continue;
//		}
//		//3.conf_SQLPW
//		if (strncmp(tmp, "conf_SQLPW", strnlen_s("conf_SQLPW", sizeof("conf_SQLPW"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_SQLPW, sizeof(conf_SQLPW), data);
//			continue;
//		}
//		//4.conf_machineArea
//		if (strncmp(tmp, "conf_machineArea", strnlen_s("conf_machineArea", sizeof("conf_machineArea"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_machineArea, sizeof(conf_machineArea), data);
//			continue;
//		}
//		//5.conf_machineNo
//		if (strncmp(tmp, "conf_machineNo", strnlen_s("conf_machineNo", sizeof("conf_machineNo"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_machineNo, sizeof(conf_machineNo), data);
//			continue;
//		}
//
//		//V2.20
//		//6.conf_log_expire
//		if (strncmp(tmp, "conf_log_expire", strnlen_s("conf_log_expire", sizeof("conf_log_expire"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_log_expire, sizeof(conf_log_expire), data);
//			continue;
//		}
//		//7.conf_tablog
//		if (strncmp(tmp, "conf_tablog", strnlen_s("conf_tablog", sizeof("conf_tablog"))) == 0)
//		{
//			sscanf_s(tmp, "%*s %s", data, sizeof(data));
//			strcpy_s(conf_tablog, sizeof(conf_tablog), tmp + 19);
//			continue;
//		}
//
//		
//
//	}
//
//
//	sprintf_s(s1, sizeof(s1), "conf_DSN   = [%s] \r\n", conf_DSN);
//	funPrint_Log(s1);
//	sprintf_s(s1, sizeof(s1), "conf_SQLID = [%s] \r\n", conf_SQLID);
//	funPrint_Log(s1);
//	sprintf_s(s1, sizeof(s1), "conf_SQLPW = [%s] \r\n\r\n", conf_SQLPW);
//	funPrint_Log(s1);
//
//
//	sprintf_s(s1, sizeof(s1), "conf_conf_machineArea = [%s] \r\n\r\n", conf_machineArea);
//	funPrint_Log(s1);
//	sprintf_s(s1, sizeof(s1), "conf_conf_machineNo = [%s] \r\n\r\n", conf_machineNo);
//	funPrint_Log(s1);
//
//	//V2.20
//	sprintf_s(s1, sizeof(s1), "conf_log_expire = [%s] \r\n\r\n", conf_log_expire);
//	funPrint_Log(s1);
//
//	sprintf_s(s1, sizeof(s1), "conf_tablog = [%s] \r\n\r\n", conf_tablog);
//	funPrint_Log(s1);
//
//	
//	fclose(fd);
//	funPrint_Log("open hotTPH_L.txt  END ------------------------------------ \r\n");
//	Sleep(1000);
//
//
//
//	//970727  ching2 add for DES PWD
//	//----------------------------------------------------
//
//	BYTE  sMkey[40];
//	BYTE  sTemp_1[2000];
//
//	memcpy_s(sMkey, sizeof(sMkey), "22730558", 8);
//
//	PackHEX((unsigned char *)sTemp_1, (unsigned char *)conf_SQLPW, 32);
//	sTemp_1[16] = 0x00;
//
//	des_decrypt(sTemp_1, 16, sMkey);
//	memcpy_s(conf_SQLPW, sizeof(conf_SQLPW), sTemp_1, 16);
//	conf_SQLPW[16] = 0x00;
//
//	for (i = 15; i >0; i--)
//	{
//		if (conf_SQLPW[i] != 0x20)  break;
//		if (conf_SQLPW[i] == 0x20)
//		{
//			conf_SQLPW[i] = 0x00;
//		}
//	}
//
//	//funPrint_Log("conf_SQLPW = [%s] \r\n\r\n" , conf_SQLPW);
//
//	funPrint_Log("funRead_set() end3   !!! --------------------------------------------- \r\n\r\n");
//	return(0);
//}
//
//
//
//





//-----------------------------------------------------------------------------
//  NO:5 funRead_set()
//
//       開 hoHK_L.txt  參數檔   讀進sql 帳號 及 密碼
//        
//  IN : 無
//  OUT: 無
//-----------------------------------------------------------------------------
int funRead_set()
{
	FILE* fd;
	char tmp[2048];
	//char func[200],
	  //char data[200];
	  //char func[2048],
	char data[2048];
	int i = 0;

	char s1[5000];


	sprintf_s(s1, "\r\n funRead_set() start !!! --------------------------------------------- \r\n");
	funPrint_Log(s1);

	//strcpy(tmp,"./cfg/hotFAR.txt");
	strcpy_s(tmp, sizeof(tmp), "./conf/hotFAR.txt");   // 971021 FAR 的路徑為 conf

    //20220208 OLD if ((fd = fopen(tmp, "r")) == NULL)
    errno_t myErrNoT = fopen_s(&fd, tmp, "r");     
    if (myErrNoT != 0)
	{
		sprintf_s(s1, "open %s error !!! \r\n", tmp);
		funPrint_Log(s1);
		sprintf_s(s1, "\r\n funRead_set() end   !!! --------------------------------------------- \r\n");
		funPrint_Log(s1);
		return(-1);
	}
	strcpy_s(vxp->message, 32-1, "open hotFAR.txt ok ");
	Sleep(1000);

	memset(tmp, 0x20, sizeof(tmp));

	while (fgets(tmp, sizeof(tmp), fd) != 0)
	{
		//memset(func, 0x20, sizeof(func));
		memset(data, 0x20, sizeof(data));

		sprintf_s(s1, "tmp=[%s] \r\n", tmp);
		funPrint_Log(s1);

		//1
		if (strncmp(tmp, "conf_DSN1", strlen("conf_DSN1")) == 0)
		{
			//20220208 OLD sscanf(tmp, "%*s %s", data);
			sscanf_s(tmp, "%*s %s", data, sizeof(data));

			strcpy_s(conf_DSN1, data);
			funPrint_Log("conf_DSN1=\r\n");
			funPrint_Log(data);
			funPrint_Log("\r\n");
			continue;
		}
		//2
		if (strncmp(tmp, "conf_SQLID1", strlen("conf_SQLID1")) == 0)
		{
	    	//20220208 OLD sscanf(tmp, "%*s %s", data);
			sscanf_s(tmp, "%*s %s", data, sizeof(data));

			strcpy_s(conf_SQLID1, data);
			continue;
		}
		//3
		if (strncmp(tmp, "conf_SQLPW1", strlen("conf_SQLPW1")) == 0)
		{
			//20220208 OLD sscanf(tmp, "%*s %s", data);
			sscanf_s(tmp, "%*s %s", data, sizeof(data));

			strcpy_s(conf_SQLPW1, data);
			continue;
		}


	}



	sprintf_s(s1, "conf_DSN1   = [%s] \r\n", conf_DSN1);
	funPrint_Log(s1);
	sprintf_s(s1, "conf_SQLID1 = [%s] \r\n", conf_SQLID1);
	funPrint_Log(s1);
	sprintf_s(s1, "conf_SQLPW1 = [%s] \r\n\r\n", conf_SQLPW1);
	funPrint_Log(s1);

	fclose(fd);


	// 970910  FAR not use remark


	  //970727  ching2 add for DES PWD
	//----------------------------------------------------

	BYTE  sMkey[40];
	BYTE  sTemp_1[2000] = { 0x00 };

	memcpy(sMkey, "22730558", 8);

	PackHEX((unsigned char*)sTemp_1, (unsigned char*)conf_SQLPW1, 32);
	sTemp_1[16] = 0x00;

	des_decrypt(sTemp_1, 16, sMkey);
	memcpy(conf_SQLPW1, sTemp_1, 16);
	conf_SQLPW1[16] = 0x00;

	for (i = 15; i > 0; i--)
	{
		if (conf_SQLPW1[i] != 0x20)  break;
		if (conf_SQLPW1[i] == 0x20)
		{
			conf_SQLPW1[i] = 0x00;
		}
	}

	sprintf_s(s1, "conf_SQLPW1 = [%s] \r\n\r\n", conf_SQLPW1);
	funPrint_Log(s1);




	funPrint_Log("funRead_set() end   !!! --------------------------------------------- \r\n\r\n");
	return(0);
}







//----------------------------------------------------------------------------------------------
//
// funCALL_SQL(char * sIn , char * sOut)         //呼叫SQL 的預存程序 V25=....
//
// sIn: CALL ivr_i00('1006','1234')
//
//----------------------------------------------------------------------------------------------

//20220208 OLD int funCALL_SQL(char* sIn, char* sOut)
int funCALL_SQL(char* sIn, char* sOut, int sizeof_sOut)
{

	CDataLink db;
	char sYYYYMM[200], sDD[200], shhmm[200];

	char sIn_temp[2000] = { 0 };
	char s1[5000];


	//show_time();
	funPrint_Log("funCALL_SQL() start !!! --------------------------------------------- \r\n");
	CTime now(time(NULL));
	sprintf_s(sYYYYMM, "%04d%d", now.GetYear(), now.GetMonth());
	sprintf_s(s1, "sYYYYMM=[%s]  \r\n", sYYYYMM);
	funPrint_Log(s1);
	sprintf_s(sDD, "%02d", now.GetDay());
	sprintf_s(shhmm, "%02d%02d", now.GetHour(), now.GetMinute());

	//-----------------------------------------------------------------------------------------
  //1.開資料庫
	//-----------------------------------------------------------------------------------------
	if (!db.OpenDatabase(conf_DSN1, conf_SQLID1, conf_SQLPW1)) {
		sprintf_s(s1, "connect to database conf_DSN1=[%s] failue. (資料庫開啟錯誤) conf_SQLID1=[%s], conf_SQLPW1=[%s] \r\n", conf_DSN1, conf_SQLID1, conf_SQLPW1);
		funPrint_Log(s1);
		sprintf_s(s1, "OpenDatabase 失敗 exxp[linepos].chain= \"RES E998 END\" !!! \r\n");
		funPrint_Log(s1);

		//20220208 OLD strcpy(exxp[linepos].chain, "RES E998 END");
		strcpy_s(exxp[linepos].chain, 100 , "RES E998 END");
		funPrint_Log("funCALL_SQL() End !!! --------------------------------------------- \r\n");
		return(0);
	}
	sprintf_s(s1, "connect to database conf_DSN1=%s successful. \r\n", conf_DSN1);
	funPrint_Log(s1);

	//sprintf( sWhere, "CALL Iwork_IVR_FirstChange('%s')", "1111" );
	strcpy_s(sIn_temp, sIn);
	sprintf_s(s1, "sIn_temp=[%s]\n", sIn_temp);
	funPrint_Log(s1);

	//db.CleanSelectResult();
	if (!db.SelectRecorder(sIn_temp)) {
		CString msg1 = db.GetErrMsg();
		db.CloseDatabase();  //970704
		sprintf_s(s1, "db.SelectRecorder Error ..[%s] %s(%i)\n", (LPCTSTR)msg1, __FILE__, __LINE__);
		funPrint_Log(s1);
		funPrint_Log("SelectRecorder 失敗 sOut= \"RES E998 END\" !!! \r\n");
		
		//20220208 OLD strcpy(sOut, "RES E998 END");
		strcpy_s(sOut, sizeof_sOut , "RES E998 END");
		
		funPrint_Log("funCALL_SQL() End !!! --------------------------------------------- \r\n");
		return (0);
	}
	else
	{
		CString db_data[10];
		char    db_data1[10][2000] = { 0x00 };

		for (int i = 0; i < 1; i++) {
			db.GetData((short)i, &db_data[i]);
			db_data[i].TrimLeft();
			db_data[i].TrimRight();
			char sTemp11[2000] = { 0x00 };
			strcpy_s(sTemp11, db_data[i]);
			sprintf_s(s1, "db_data[%d]=[%s] \r\n", i, sTemp11);
			funPrint_Log(s1);

			if (strcmp(db_data[i], "") == 0)
				strcpy_s(db_data1[i], "-");           //
			else
				strcpy_s(db_data1[i], db_data[i]);    //
		}
		db.CloseDatabase();  //970704
		sprintf_s(sOut, sizeof_sOut, "RES %s END", db_data1[0]);
		sprintf_s(s1, "SelectRecorder 成功 sOut= \"%s\" !!! \r\n", sOut);
		funPrint_Log(s1);
		funPrint_Log("funCALL_SQL() End !!! --------------------------------------------- \r\n");
		return(1);
	}

}



// 970910 改thread 
//----------------------------------------------------------------------------------------------
//
// Thread_funCALL_S01(char * sIn , char * sOut)         //呼叫SQL 的預存程序 V25=....
//               
// for drFAR  S01
//
// sIn: CALL ivr_i00('1006','1234')
//
//----------------------------------------------------------------------------------------------

DWORD WINAPI Thread_funCALL_S01(LPVOID lpparam)
{
	int  linepos_thread = 0;

	char sOut[9999];
	char s1[9999];

	char inq[100], AO_CODE[100], pwd[100], npwd[100];
	char sSQL[1000];


	// input string 
	char* psIN = (char*)lpparam;    // psIN指向了傳遞進來的字串
	linepos_thread = atoi(psIN);



	memset(inq, 0x00, sizeof(inq));
	memset(AO_CODE, 0x00, sizeof(AO_CODE));
	memset(pwd, 0x00, sizeof(pwd));
	memset(npwd, 0x00, sizeof(npwd));
	memset(sSQL, 0x00, sizeof(sSQL));


	//20220208 OLD sscanf(exxp[linepos_thread].chain, "%*s %s ", inq);
	sscanf_s(exxp[linepos_thread].chain, "%*s %s ", inq, sizeof(inq) );

	switch (atoi(inq))
	{

	case 0:   //INQ  00: AO_CODE 密碼驗證                     
		sscanf_s(exxp[linepos_thread].chain, "%*s %*s %s %s", AO_CODE, sizeof(AO_CODE), pwd, sizeof(pwd));           // INQ 00  AO_CODE(5)  PWD(8)  END
		sprintf_s(sSQL, "CALL ivr_i00('%s','%s')", AO_CODE, pwd);
		
		//20220208 OLD 
		//funCALL_SQL(sSQL, sOut);
		funCALL_SQL(sSQL, sOut, sizeof(sOut) );
		
		sprintf_s(s1, "sOut=[%s]\r\n", sOut);
		funPrint_Log(s1);

		strcpy_s(exxp[linepos_thread].chain, sOut);

		exVar[linepos_thread].remis = 64;
		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
		exVar[linepos_thread].rtran[3] = 0;
		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;

		retCode_all_flag[linepos_thread] = -1;

		return(0);


	case 1:   //INQ  01: 密碼變更
		sscanf_s(exxp[linepos_thread].chain, "%*s %*s %s %s %s", AO_CODE, sizeof(AO_CODE), pwd, sizeof(pwd), npwd, sizeof(npwd));   // INQ 01  AO_CODE(5)  PWD(8) NPWD(8) END
		sprintf_s(sSQL, "CALL ivr_i01('%s','%s','%s')", AO_CODE, pwd, npwd);
		funCALL_SQL(sSQL, sOut, sizeof(sOut));
		sprintf_s(s1, "sOut=[%s]\r\n", sOut);
		funPrint_Log(s1);

		strcpy_s(exxp[linepos_thread].chain, sOut);

		exVar[linepos_thread].remis = 64;
		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
		exVar[linepos_thread].rtran[3] = 0;
		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;

		retCode_all_flag[linepos_thread] = -1;

		return(0);




		//1030416  V5.7 ching2  add i02 抓 uap_sno 流水號

	case 2:   //INQ  02: 從DB uap_sno 取得 流水編號

		  //sscanf(exxp[linepos_thread].chain, "%*s %*s %s ", skey  );   // INQ 02 *** END
		strcpy_s(sSQL, "CALL ivr_i02('***')");
		funCALL_SQL(sSQL, sOut, sizeof(sOut));
		sprintf_s(s1, "sOut=[%s]\r\n", sOut);
		funPrint_Log(s1);

		strcpy_s(exxp[linepos_thread].chain, sOut);

		exVar[linepos_thread].remis = 64;
		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
		exVar[linepos_thread].rtran[3] = 0;
		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;

		retCode_all_flag[linepos_thread] = -1;

		return(0);


	default:
		sprintf_s(s1, sizeof(s1), "交易代碼錯誤 sOut=[%s] !!!!!!\r\n", sOut);
		funPrint_Log(s1);

		exVar[linepos_thread].remis = 64;
		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
		exVar[linepos_thread].rtran[3] = 0;
		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;

		retCode_all_flag[linepos_thread] = -1;

		return(0);

	}  //switch (key)



}



// 改thread 
//----------------------------------------------------------------------------------------------
//
// Thread_funCALL_L01(char * sIn , char * sOut)         //呼叫SQL 的預存程序 V25=....
//               
// for drFAR  L01
//
// sIn: 
//
//----------------------------------------------------------------------------------------------

DWORD WINAPI Thread_funCALL_L01(LPVOID lpparam)
{

	int  linepos_thread = 0;



	int i;
	CDataLink db;
	char gDSN_icbcLog[500];
	char myValue[5000];
	char sOne[10000];
	char sTIME[150];
	FILE* fd1;
	char sLog_file[500];

	char s1[9999];


	//  1000531  log bug 
	number num = { 0x00 };
	number* num1;



	funPrint_Log("Thread_funCALL_L01() start !!! --------------------------------------------- \r\n");


	// input string 
	char* psIN = (char*)lpparam;    // psIN指向了傳遞進來的字串
	linepos_thread = atoi(psIN);




	sprintf_s(sLog_file, ".//log_far//log%02d.txt", linepos_thread + 1);

	//20220208 OLD fd1 = fopen(sLog_file, "r");
	errno_t myErrNoT = fopen_s(&fd1, sLog_file, "r");
	if (myErrNoT != 0)
	{
		//open error 
	}


	fseek(fd1, 0, SEEK_SET);
	


	//20220218 old fread(&num.shead, sizeof(char), sizeof(num), fd1);                // 20220218 V6.1 ching2      A1 Injection   Buffer Overflow
	fread_s(&num.shead, sizeof(num), sizeof(char), sizeof(num), fd1);
				
    //fwrite(&num.shead,sizeof(char),sizeof(num),fd1);
	fclose(fd1);

	num1 = (number*)&num.shead;

	//num1 = (number *)exxp[linepos].chain ;
	
	fdbprintf("totalnum=[%s]\r\n", num1->totalnum);




	//-----------------------------------------------------------------------------------------
  //1.開資料庫
	//-----------------------------------------------------------------------------------------
	if (!db.OpenDatabase(conf_DSN1, conf_SQLID1, conf_SQLPW1)) {
		CTime now(time(NULL));
		sprintf_s(sTIME, "%02d%02d%02d%02d", now.GetMonth(), now.GetDay(), now.GetHour(), now.GetMinute());
		sprintf_s(s1, "connect to database DSN=%s failue. (資料庫開啟錯誤) %s(%i) \r\n", gDSN_icbcLog, __FILE__, __LINE__);
		funPrint_Log(s1);



		for (i = 0;i < atoi(num1->totalnum);i++) {

			if (i > 6) break;
			//                                  1        2          3         4          5     6     7      8      9      10       11      12        13     14        15   16                    1     2     3     4     5     6     7     8     9     10   11      12    13     14   15    16
			sprintf_s(sOne, " insert into tabLog ( line_no, line_hour, stime_in, etime_out, lang, trid, error, bra01, bra01, ao_code, id_no, file_name, email, email_cc, sno, file_size ) values ( '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s' , '%s', '%s', '%s', '%s', '%s') ; ",

				num1->v25[i].line_no, num1->v25[i].line_hour, num1->v25[i].stime_in, num1->v25[i].etime_out, num1->v25[i].lang,
				num1->v25[i].trid, num1->v25[i].error, num1->v25[i].bra01, num1->v25[i].bra01, num1->v25[i].ao_code,
				num1->v25[i].id_no, num1->v25[i].file_name, num1->v25[i].email, num1->v25[i].email_cc, num1->v25[i].sno,
				num1->v25[i].file_size

			);

			//20220208  OLD fd1 = fopen(".//log_far//write_db_err.txt", "a");
			errno_t myErrNoT = fopen_s(&fd1, ".//log_far//write_db_err.txt", "a");
			if (myErrNoT != 0)
			{
			   //open error 
			}
			fprintf(fd1, "%s \r\n", sOne);
			fclose(fd1);

		}
		fdbprintf("funWrite_Log() END !!! --------------------------------------------- \r\n");
		return 0;
	}
	//fdbprintf("connect to database DSN=%s successful. %s(%i)\n", gDSN_icbcLog, __FILE__, __LINE__);

	  //-----------------------------------------------------------------------------------------
	  // 增加 
	  //-----------------------------------------------------------------------------------------

	CString table_name1 = "tabLog";

	char* pFields =

		"line_no, "           // 1  線路別 1 2     
		"line_hour, "         // 2  進線時段
		"stime_in, "          // 3  進線起始時間 YYYY/MM/DD hh:mm:ss 
		"etime_out, "         // 4  出線起始時間 YYYY/MM/DD hh:mm:ss 
		"lang, "              // 5  語言別 1:國語  2:台語
		"trid, "              // 6  交易代碼  v[1]選項   ( 依按鍵 選項填入)
		"error, "             // 7  錯誤代碼   0000: 成功  E****
		"bra01,"              // 8  分行代碼   001
		"bra05,"              // 9  區別名稱   01

		"ao_code, "           // 10 理專編號 
		"id_no, "             // 11 產品編號 
		"file_name, "  			  // 12 檔名    
		"email, "  			      // 13 email   
		"email_cc,"  			    // 14 email_cc        
		"sno,"  			        // 15 sno             //1000309  v5.2 ching2  add log for sno
		"file_size";		    // 16 file_size       //**** " **** 後不可有 ,  ching2 語法錯誤!!



	sprintf_s(s1, "pFields=[%s] %s(%d) \r\n", pFields, __FILE__, __LINE__);
	funPrint_Log(s1);

	for (i = 0;i < atoi(num1->totalnum);i++)
	{
		//               1     2     3     4     5     6     7     8     9     10   11     12    13    14     15     16
		sprintf_s(myValue, "'%s',  '%s' ,'%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s' , '%s' , '%s' ",

			num.v25[i].line_no,         // 1  線路別 1 2       
			num.v25[i].line_hour,       // 2  進線時段
			num.v25[i].stime_in,       // 3  進線起始時間 YYYY/MM/DD hh:mm:ss 
			num.v25[i].etime_out,       // 4  出線起始時間 YYYY/MM/DD hh:mm:ss 
			num.v25[i].lang,            // 5  語言別 1:國語  2:台語
			num.v25[i].trid,            // 6  交易代碼  v[1]選項   ( 依按鍵 選項填入)
			num.v25[i].error,           // 7  錯誤代碼   0000: 成功  E****
			num.v25[i].bra01,           // 8  分行代碼   001
			num.v25[i].bra05,           // 9  區別名稱   01

			num.v25[i].ao_code,         // 10 理專編號
			num.v25[i].id_no,           // 11 客戶ID
			num.v25[i].file_name,		    // 12 檔名   
			num1->v25[i].email,         // 13 email
			num1->v25[i].email_cc,      // 14 email_cc 
			num1->v25[i].sno,           // 15 sno           //1000309  v5.2 ching2  add log for sno
			num1->v25[i].file_size      // 16 file_size     ching2 960908 最後一行不可有 ,

		);

		sprintf_s(s1, "myValue=[%s] %s(%d) \r\n", myValue, __FILE__, __LINE__);
		funPrint_Log(s1);

		db.AddNewRecorder(table_name1.GetBuffer(1024), pFields, myValue);
		Sleep(200);
		CString msg1 = db.GetErrMsg();
		sprintf_s(s1, "db.AddNewRecorder ..[%s] %s(%i) \r\n", (LPCTSTR)msg1, __FILE__, __LINE__);
		funPrint_Log(s1);

	}//for(i = 0;i<atoi(num1->totalnum);i++)
	db.CloseDatabase();
	Sleep(200);


	exVar[linepos_thread].remis = 64;
	strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
	exVar[linepos_thread].rtran[3] = 0;
	exVar[linepos_thread].rsync = exVar[linepos_thread].esync;

	retCode_all_flag[linepos_thread] = -1;

	return(0);



}
















//-----------------------------------------------------------------------------
//  NO:7 chk_exe_emis()
//
//       檢查語音線,是否收送
//        
//  IN : 無
//  OUT: 無
//-----------------------------------------------------------------------------

int chk_exe_emis(void)
{
	int i;

	for (i = chk_pos; i < chnum; i++) {
		if (exVar[i].eemis == 64) {
			lineno = i + 1;
			linepos = i;
			chk_pos = i + 1;
			if (chk_pos >= chnum) chk_pos = 0;
			return (1);
		}
	}
	chk_pos = 0;
	return (0);
}






//-----------------------------------------------------------------------------
//  NO:8 p400()
//
//       主迴圈
//        
//  IN : 無
//  OUT: 無
//-----------------------------------------------------------------------------
int p400(void)
{


	char myEtran[50];
	int  iKill = 0;


	//20220208 OLD
	//struct tm* newtm;
	//long   lt;

	//1000318 for reset sno
  //	FILE *fd;
	char sFile[200] = { 0 };
	char sNo[10] = { 0 };

	////test md5  ching2 980425 

	////void md5(char* lMessage,char *md5_str);    //lMessage為待加密字符串，md5_str為得到的md5
	////  6789000000000 -->  86f60893d3c7918b3c4265560872fdda
	//char md5_str[40];
	//char s[100];
	//strcpy(s,"6789000000000");

	//md5( s, md5_str);
	//fdbprintf("md5_str=[%s]  \r\n", md5_str);





	//---------------------------------------------------------------------------
	  // ching2 test start
	//---------------------------------------------------------------------------
	//TEST 
	  //char sOut[3000];
  /*
	funRead_set();   // ./cfg/hotFAR.txt
	  linepos=1;
	//v25=[INQ 01 TreaoutAcc_check 501794 093125017949 END]

	  sprintf( exxp[linepos].chain , "CALL TreaOutAcc_Check('%s', '%s')", "000002" , "000000000022");
	//sprintf( exxp[linepos].chain , "CALL aaa");
	  funCALL_SQL( conf_DSN1_PWD, conf_SQLID1_PWD, conf_SQLPW1_PWD , exxp[linepos].chain , sOut  );
	  fdbprintf("TreaOutAcc_Check......  sOut=[%s]\r\n" , sOut );
  */
  //---------------------------------------------------------------------------
	// ching2 test end
  //---------------------------------------------------------------------------





  // ========================================================================
  // (0).AP START 
  // ========================================================================

	//20220208 OLD
	//time(&lt);
	//newtm = localtime(&lt);

	time_t now;
	struct tm newtm;

	time(&now);
	errno_t errNoT = localtime_s(&newtm, &now);


	funPrint_Log("\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n");
	funPrint_Log(" ==========================================================================\r\n");
	funPrint_Log(" ==========================================================================\r\n");
	funPrint_Log(" ==========================================================================\r\n");

	//20220208 OLD funPrint_Log(" == 程式 hotFAR 開始啟動        AP by ots ching2 1030416 V5.7            ==\r\n");
	sprintf_s(sTemp, " == 程式 hotFAR 開始啟動        AP by ots ching2 [%s]            ==\r\n", VERSION1);
	funPrint_Log(sTemp);

	funPrint_Log(" ==========================================================================\r\n");
	funPrint_Log(" ==========================================================================\r\n");
	funPrint_Log(" ==========================================================================\r\n\r\n\r\n");
	funPrint_Log("p400() start !!! --- \r\n");
	funPrint_Log("\r\n");

	//20220218 old sprintf_s(vxp->message, 32-2, "1030416 V5.7");
	sprintf_s(vxp->message, 32-2, "%s", VERSION1);
	Sleep(2000);


	//---------------------------------------------------------------------------
	  // 970702 add thread
	//---------------------------------------------------------------------------
	for (int i = 0; i < 65; i++)
	{
		hThread_all[i] = NULL;
		retCode_all_flag[i] = 0;
		memset(sIN_all[i], 0x00, sizeof(sIN_all[i]));
	}

	funRead_set();   // ./cfg/hotFAR.txt



	while (1)
	{

		// ========================================================================
		// (1).check time 00:05:00 do delete log file 
		// ========================================================================
		//20220208 OLD
		//time(&lt);
		//newtm = localtime(&lt);

		//20220208 NEW
		time(&now);
		errno_t errNoT = localtime_s(&newtm, &now);



		if (newtm.tm_hour == 0 && newtm.tm_min == 5)  //00:05:00
		{
			iKill = 1;
		}
		if (newtm.tm_hour == 0 && newtm.tm_min == 6 && iKill == 1)
		{
			Sleep(2000);
			funPrint_Log("\r\n\r\n");
			funPrint_Log(" ==========================================================================\r\n");
			funPrint_Log(" == 00:06:00 每日零晨刪除 去年次日之log檔  !!!!                          ==\r\n");
			funPrint_Log(" ==========================================================================\r\n");
			funKill_Log();
			iKill = 0;
		}
		//1000318 add for sno reset
		if (newtm.tm_hour == 0 && newtm.tm_min == 0 && newtm.tm_sec <= 5)
		{
			Sleep(3000);
			funPrint_Log("\r\n\r\n");
			funPrint_Log(" ==========================================================================\r\n");
			funPrint_Log(" == 00:00:00 每日重置流水編號                                            ==\r\n");
			funPrint_Log(" ==========================================================================\r\n");


			////1030416  V5.7 ching2  add i02 抓 uap_sno 流水號
	  /*
			sprintf(sFile, ".\\conf\\uap_sNo.txt");
			if( (fd= fopen(sFile, "w")) ==NULL)
			{
				sprintf(sFile, "read uap_sno.txt error\r\n");
				funPrint_Log(sFile);
				return(-1);
			}
			fseek(fd,0,0);
			sprintf(sNo,"001");
			fwrite(&sNo, sizeof(char), sizeof(sNo), fd);
			fclose(fd);
	  */

	  //1030416  V5.7 ching2  add i02 抓 uap_sno 流水號
			char sSQL[100];
			char sOut[3000];
			char s1[3000];

			strcpy_s(sSQL, "CALL ivr_i02('001')");
			funCALL_SQL(sSQL, sOut, sizeof(sOut) );
			sprintf_s(s1, "sOut=[%s]\r\n", sOut);
			funPrint_Log(s1);



		}
		// ========================================================================
		// (2).check 使用者關線
		// ========================================================================
		if ((vxp->command == '5') || (vxp->command == '3'))
		{
			funPrint_Log("\r\n\r\n");
			funPrint_Log(" ==========================================================================\r\n");
			funPrint_Log(" == IVR與HOST不連線,使用者關線                                           ==\r\n");
			funPrint_Log(" ==========================================================================\r\n");
			sprintf_s(vxp->message, 32-2, "使用者關線");
			return(0);
		}

		// ========================================================================
		// (3).check retCode_all_flag
		// ========================================================================

		for (int i = 0; i < 65; i++)
		{
			if (retCode_all_flag[i] == -1)
			{
				char s[1000];
				sprintf_s(s, " CloseHandle()[i]=[%02d]  start !!!!\r\n", i);
				funPrint_Log(s);
				CloseHandle(hThread_all[i]);
				Sleep(10);   //971219 ching2 remark  be. too slow 40 line  50-> 10
				sprintf_s(s, " CloseHandle()[i]=[%02d]  end   !!!!\r\n", i);
				funPrint_Log(s);
				retCode_all_flag[i] = 0;
				memset(sIN_all[i], 0x00, sizeof(sIN_all[i]));
			}
		}



		while (chk_exe_emis())
		{

			if ((vxp->command == '5') || (vxp->command == '3'))
			{
				funPrint_Log("\r\n\r\n");
				funPrint_Log(" ==========================================================================\r\n");
				funPrint_Log(" == IVR與HOST不連線,使用者關線                                           ==\r\n");
				funPrint_Log(" ==========================================================================\r\n");
				sprintf_s(vxp->message, 32-2, "使用者關線");
				return(0);
			}

			memcpy(myEtran, exVar[linepos].etran, 3);        myEtran[3] = 0;



			// 970702 改成 thread
		  //------------------------------------------------------------------------------------------
				// drxxx  send [S01]   寫 LOG 進DB
			//------------------------------------------------------------------------------------------
			if ((strcmp(myEtran, "S01") == 0))
			{
				sprintf_s(sTemp, "\r\n\r\nvoie=[%02d], lineno=[%02d] \r\n", voie, lineno);
				funPrint_Log(sTemp);
				sprintf_s(sTemp, "\r\n\r\nmyEtran=[%s], v25=[%s] \r\n\r\n", myEtran, exxp[linepos].chain);
				funPrint_Log(sTemp);

				if (retCode_all_flag[linepos] == -1)
				{
					char s[1000];
					sprintf_s(s, " P400 S01 CloseHandle()[linepos]=[%02d]  start !!!!\r\n", linepos);
					funPrint_Log(s);
					CloseHandle(hThread_all[linepos]);
					Sleep(50);
					sprintf_s(s, " P400 [S01] CloseHandle()[linepos]=[%02d]  End   !!!!\r\n", linepos);
					funPrint_Log(s);
					retCode_all_flag[linepos] = 0;
					memset(sIN_all[linepos], 0x00, sizeof(sIN_all[linepos]));
				}

				exVar[linepos].eemis = 0;    //啟動音樂

				sprintf_s(sIN_all[linepos], "%02d", linepos);
				sprintf_s(sTemp, "sIN_all=[%s], [S01] : 寫 LOG 進DB \r\n", sIN_all[linepos]);
				funPrint_Log(sTemp);

				// 970630 add 
				if ((hThread_all[linepos] = CreateThread(NULL, 0, Thread_funCALL_S01, (LPVOID)&sIN_all[linepos], 0, &id)) == NULL)
				{
					//1-1 
					sprintf_s(sTemp, "linepos  = [%d] , CreateThread() Thread_funCALL_S01() error error error !!!!!!!!!!!!! \r\n", linepos);
					funPrint_Log(sTemp);
					Sleep(1000);
					//return 0;
				}
				else
				{
					//1-2 CreateThread() OK SLEEP 避免 sIN 在 CreateThread() 被別線蓋走
					Sleep(100);
				}  //if( ( hThread_all[linepos] ....

			}  //if ( (strcmp(myEtran, "S01" ) == 0) )




		// 改成 thread
	  //------------------------------------------------------------------------------------------
			// drxxx  send [L01]  寫 LOG 進DB
		//------------------------------------------------------------------------------------------
			if ((strcmp(myEtran, "L01") == 0))
			{
				sprintf_s(sTemp, "\r\n\r\nvoie=[%02d], lineno=[%02d] \r\n", voie, lineno);
				funPrint_Log(sTemp);
				sprintf_s(sTemp, "\r\n\r\nmyEtran=[%s], v25=[%s] \r\n\r\n", myEtran, exxp[linepos].chain);
				funPrint_Log(sTemp);

				if (retCode_all_flag[linepos] == -1)
				{
					char s[1000];
					sprintf_s(s, " P400 [L01] CloseHandle()[linepos]=[%02d]  start !!!!\r\n", linepos);
					funPrint_Log(s);
					CloseHandle(hThread_all[linepos]);
					Sleep(50);
					sprintf_s(s, " P400 [L01] CloseHandle()[linepos]=[%02d]  End   !!!!\r\n", linepos);
					funPrint_Log(s);
					retCode_all_flag[linepos] = 0;
					memset(sIN_all[linepos], 0x00, sizeof(sIN_all[linepos]));
				}

				exVar[linepos].eemis = 0;    //啟動音樂

				sprintf_s(sIN_all[linepos], "%02d", linepos);
				sprintf_s(sTemp, "sIN_all=[%s], [L01] : 寫 LOG 進DB \r\n", sIN_all[linepos]);
				funPrint_Log(sTemp);

				// 970630 add 
				if ((hThread_all[linepos] = CreateThread(NULL, 0, Thread_funCALL_L01, (LPVOID)&sIN_all[linepos], 0, &id)) == NULL)
				{
					//1-1 
					sprintf_s(sTemp, "linepos  = [%d] , CreateThread() Thread_funCALL_L01() error error error !!!!!!!!!!!!! \r\n", linepos);
					funPrint_Log(sTemp);
					Sleep(1000);
					//return 0;
				}
				else
				{
					//1-2 CreateThread() OK SLEEP 避免 sIN 在 CreateThread() 被別線蓋走
					Sleep(100);
				}  //if( ( hThread_all[linepos] ....

			}  //if ( (strcmp(myEtran, "S01" ) == 0) )




	  //Sleep(100);     //971219 500-> 100  ching2 不可等 因為會有40路同時進線會迼成 等40*500




		} //while (chk_exe_emis()) {

		Sleep(10);  //971219 500-> 100    --> 10 980106


	} //while (1) {


}






//-----------------------------------------------------------------------------
//  NO:0 funSet_Priority()   create by ching2 961116
//
//       set priority 設該程式的執行優先權 
//        
//  IN : 
//
//       "Realtime"          24
//       "High"              13
//       "Above Normal"      10
//       "Normal"             8
//       "Below Normal"       6
//       "Idle"               4
//
//  OUT: 無

/*
Realtime        24
High            13
Above Normal    10
Normal          8
Below Normal    6
Idle            4


REALTIME_PRIORITY_CLASS      0x00000100;
HIGH_PRIORITY_CLASS          0x00000080;
ABOVE_NORMAL_PRIORITY_CLASS  0x00008000;
NORMAL_PRIORITY_CLASS        0x00000020;
BELOW_NORMAL_PRIORITY_CLASS  0x00004000;
IDLE_PRIORITY_CLASS          0x00000040;

// 所有都Normal   hot 設 High
//                語音設 Realtime  drint64ip.exe hotcodec.exe  SipRegSvr.exe
//                trol SerMain 設 Realtime


*/

//-----------------------------------------------------------------------------
int funSet_Priority(char* set)
{

	if (strcmp(set, "Realtime") == 0)
	{
		fdbprintf("Realtime 24 \r\n");
		if (SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS) == false)    //1.
		{
			fdbprintf(" SET NOK \r\n");
			return(-1);
		}

	}
	else if (strcmp(set, "High") == 0)
	{
		fdbprintf("High 13 \r\n");
		if (SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS) == false)        //2.
		{
			fdbprintf(" SET NOK \r\n");
			return(-1);
		}
	}

	else if (strcmp(set, "Above Normal") == 0)
	{
		fdbprintf("Above Normal 10 \r\n");
		//SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS);  //3.
		if (SetPriorityClass(GetCurrentProcess(), 0x00008000) == false)
		{
			fdbprintf(" SET NOK \r\n");
			return(-1);
		}
	}

	else if (strcmp(set, "Normal") == 0)
	{
		fdbprintf("Normal 8 \r\n");
		if (SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS) == false)      //4.
		{
			fdbprintf(" SET NOK \r\n");
			return(-1);
		}
	}

	else if (strcmp(set, "Below Normal") == 0)
	{
		fdbprintf("Below Normal 6 \r\n");
		//SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);  //5.
		if (SetPriorityClass(GetCurrentProcess(), 0x00004000) == false)
		{
			fdbprintf(" SET NOK \r\n");
			return(-1);
		}
	}
	else if (strcmp(set, "Idle") == 0)
	{
		fdbprintf("Idle 4 \r\n");
		if (SetPriorityClass(GetCurrentProcess(), IDLE_PRIORITY_CLASS) == false)         //6.
		{
			fdbprintf(" SET NOK \r\n");
			return(-1);
		}
	}
	else
	{
		return(-1);
	}


	fdbprintf(" SET OK \r\n");
	return(1);

}






//-----------------------------------------------------------------------------
//  NO:12 main()
//
//       主程式
//        
//  IN : 無
//  OUT: 無
//-----------------------------------------------------------------------------
int main(int argc, char** argv)
{
	signal(SIGTERM, err_stop);
	signal(SIGINT, SIG_IGN);

	funSet_Priority("High");   // 所有都Normal   hot 設 High  語音設 Realtime  drint64ip.exe hotcodec.exe  SipRegSvr.exe  trol SerMain 設 Realtime

	voie = atoi(argv[1]) + 1;


	//fdbprintf("hotGen v1.2 970312");  //970312
	//1060327 bug  需在 P100() 以後, 否則chk_exe_emis() 會當
	// exVar = exVar;

	if (p100() >= 0)
	{
		//20220208 add
		exVar = exVar;  //1060327 bug  需在 P100() 以後, 否則chk_exe_emis() 會當

		fdbprintf("voie %d......\n", voie);       //voie 47......
		fdbprintf("max chnum = %d \n", chnum);
		fdbprintf("comport = %d \n", comport);
		p400();
	}
	else
	{
		//fdbprintf("dbg......2");
	}
	p900();

	return 0;

}






//20220208 OLD
//
//DWORD WINAPI Thread_funCALL_L01(LPVOID lpparam)
//{
//	int  linepos_thread = 0;
//
//	CDataLink db;
//	FILE *fd1;
//	char s1[9999] = { 0 };
//	char sOne[10000];
//
//	//FILE *fd1;
//	char sLog_file[500] = { 0 };
//	char myValue[5000] = { 0 };
//	int i = 0;
//
//	number num_t;
//	number *num1_t;
//
//	char *psIN = (char*)lpparam;    // psIN指向了傳遞進來的字串
//	linepos_thread = atoi(psIN);
//	sprintf_s(s1, sizeof(s1), "\r\n\r\n\r\nThread_funCALL_L01() start, linepos_thread=[%d]----sizeof(exxp[linepos_thread].chain)=[%d] %s(%i)\r\n", linepos_thread, sizeof(exxp[linepos_thread].chain), __FILE__, __LINE__);
//	funPrint_Log(s1);
//
//
//
//	char myEtran[50] = { 0 };
//	memcpy_s(myEtran, sizeof(myEtran), exVar[linepos_thread].etran, 3);  // L01
//
//	
//
//	HANDLE hMutex = NULL;
//
//	hMutex = CreateMutex(NULL, FALSE, "L01");
//	DWORD result = WaitForSingleObject(hMutex, 10 * 1000);
//
//	
//
//	switch (result) {
//	case WAIT_FAILED:
//		sprintf_s(s1, sizeof(s1), "WaitForSingleObject WAIT_FAILED return %s(%i)\n", __FILE__, __LINE__);
//		funPrint_Log(s1);
//
//		ReleaseMutex(hMutex);
//		CloseHandle(hMutex);
//
//		memcpy_s(exxp[linepos_thread].chain, sizeof(exxp[linepos_thread].chain), "REP WAIT_FAILED END", 19);
//
//		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
//		exVar[linepos_thread].rtran[3] = 0;
//		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;
//		exVar[linepos_thread].remis = 64;
//		retCode_all_flag[linepos_thread] = -1;
//
//		return 0;
//		break;
//	case WAIT_OBJECT_0:
//		break;
//	case WAIT_TIMEOUT:
//		sprintf_s(s1, sizeof(s1), "WaitForSingleObject WAIT_TIMEOUT return %s(%i)\n", __FILE__, __LINE__);
//		funPrint_Log(s1);
//
//		ReleaseMutex(hMutex);
//		CloseHandle(hMutex);
//
//		memcpy_s(exxp[linepos_thread].chain, sizeof(exxp[linepos_thread].chain), "REP WAIT_TIMEOUT END", 20);
//
//		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
//		exVar[linepos_thread].rtran[3] = 0;
//		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;
//		exVar[linepos_thread].remis = 64;
//		retCode_all_flag[linepos_thread] = -1;
//
//		return 0;
//		break;
//	}
//
//	//-------------------------------------------------------------------------------------------
//	// 111111.
//	// 1.先做寫入  TABLOG
//	//-------------------------------------------------------------------------------------------
//
//	//uap的log 寫在log_skh的logXX.txt
//
//	// V2.2.0 1090226  ching2   .\\log_skh --> .\\log_tph_L
//	//old sprintf_s(sLog_file, sizeof(sLog_file), ".\\log_skh\\log%02d.txt", linepos_thread + 1);
//	sprintf_s(sLog_file, sizeof(sLog_file), ".\\log_LOG\\log%02d.txt", linepos_thread + 1);
//
//	errno_t myErrNoT = fopen_s(&fd1, sLog_file, "r");
//
//
//
//	fseek(fd1, 0, SEEK_SET);
//	fread(&num_t.shead, sizeof(char), sizeof(num_t), fd1);
//	fclose(fd1);
//
//
//
//	num1_t = (number *)&num_t.shead;
//	sprintf_s(s1, sizeof(s1), "totalnum=[%s]\r\n", num1_t->totalnum);
//	funPrint_Log(s1);
//
//
//	
//
//	//-----------------------------------------------------------------------------------------
//	//1.開資料庫
//	//失敗 先寫一筆到 write_db_err.txt  在由funDo_write_db_err()  補寫log
//	//-----------------------------------------------------------------------------------------
//	if (!db.OpenDatabase(conf_DSN, conf_SQLID, conf_SQLPW)) {
//
//		CTime now(time(NULL));	//1070221
//		char  sTIME[150] = { 0 };
//		
//
//		sprintf_s(sTIME, sizeof(sTIME), "%02d%02d%02d%02d", now.GetMonth(), now.GetDay(), now.GetHour(), now.GetMinute());			  //1070221
//		sprintf_s(s1, sizeof(s1), "ERROR: OpenDatabase() DSN=[%s]. (資料庫開啟錯誤) %s(%i)\r\n", conf_DSN, __FILE__, __LINE__);		//1070221
//		funPrint_Log(s1);
//
//		num1_t = (number *)&num_t.shead;
//		sprintf_s(s1, sizeof(s1), "totalnum=[%s]\r\n", num1_t->totalnum);
//		funPrint_Log(s1);
//
//		for (i = 0;i<atoi(num1_t->totalnum);i++) {
//
//
//			
//			//  YYYY/MM/DD_hh:mm:ss   --> 去除底線為空白  YYYY/MM/DD hh:mm:ss
//			num_t.v25[i].line_time_in[10] = ' ';
//			num_t.v25[i].line_time_out[10] = ' ';
//			num_t.v25[i].trid_time_in[10] = ' ';
//			num_t.v25[i].trid_time_out[10] = ' ';
//
//
//			if (i > 6) break;
//
//			// V2.10  1080219  ching2   v25_1新增hot_rep[500 + 1]記錄查詢結果
//			//V2.41 NEW
//			//	              							  1    2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18    19    20    21    22      23      24
//			sprintf_s(sOne, sizeof(sOne), "  '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s' , '%s'  , '%s' ",
//
//				num_t.v25[i].num, num_t.v25[i].ivr_set, num_t.v25[i].line_no, num_t.v25[i].line_hour, num_t.v25[i].line_time_in,
//				num_t.v25[i].line_time_out, num_t.v25[i].trid_time_in, num_t.v25[i].trid_time_out, num_t.v25[i].lag, num_t.v25[i].trid,
//				num_t.v25[i].errcode, num_t.v25[i].stat1, num_t.v25[i].stat2, num_t.v25[i].pa_no, num_t.v25[i].id,
//				num_t.v25[i].order_date, num_t.v25[i].time_scale, num_t.v25[i].dep, num_t.v25[i].room, num_t.v25[i].dr_no,
//				num_t.v25[i].dr_name, num_t.v25[i].seqno, num_t.v25[i].caller, num_t.v25[i].hot_rep
//			);
//			//V2.41 OLD
//			////													1        2          3          4           5             6              7             8              9    10    11        12     13     14     15  16          17          18  19     20     21       22     23                 1    2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18    19    20    21    22      23
//			//sprintf_s(sOne, sizeof(sOne)," insert into tabLog ( num  ,   ivr_set  , line_no  , line_hour , line_time_in, line_time_out, trid_time_in, trid_time_out, lag, trid, errcode , stat1, stat2, pa_no, id, order_date, time_scale, dep, room, dr_no, dr_name, seqno, caller ) values ( '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s' , '%s'  ) , ",
//
//			//	num_t.v25[i].num, num_t.v25[i].ivr_set, num_t.v25[i].line_no, num_t.v25[i].line_hour, num_t.v25[i].line_time_in,
//			//	num_t.v25[i].line_time_out, num_t.v25[i].trid_time_in, num_t.v25[i].trid_time_out, num_t.v25[i].lag, num_t.v25[i].trid,
//			//	num_t.v25[i].errcode, num_t.v25[i].stat1, num_t.v25[i].stat2, num_t.v25[i].pa_no, num_t.v25[i].id,
//			//	num_t.v25[i].order_date, num_t.v25[i].time_scale, num_t.v25[i].dep, num_t.v25[i].room, num_t.v25[i].dr_no,
//			//	num_t.v25[i].dr_name, num_t.v25[i].seqno, num_t.v25[i].caller
//			//);
//
//			fdbprintf("---------\r\n num_t.v25[i].num            ==%s \n", num_t.v25[i].num);             // 1 
//			fdbprintf("---------\r\n num_t.v25[i].ivr_set        ==%s \n", num_t.v25[i].ivr_set);         // 2          
//			fdbprintf("---------\r\n num_t.v25[i].line_no        ==%s \n", num_t.v25[i].line_no);         // 3
//			fdbprintf("---------\r\n num_t.v25[i].line_hour      ==%s \n", num_t.v25[i].line_hour);       // 4
//			fdbprintf("---------\r\n num_t.v25[i].line_time_in   ==%s \n", num_t.v25[i].line_time_in);    // 5
//
//			fdbprintf("---------\r\n num_t.v25[i].line_time_out  ==%s \n", num_t.v25[i].line_time_out);   // 6
//			fdbprintf("---------\r\n num_t.v25[i].trid_time_in   ==%s \n", num_t.v25[i].trid_time_in);    // 7
//			fdbprintf("---------\r\n num_t.v25[i].trid_time_out  ==%s \n", num_t.v25[i].trid_time_out);   // 8
//			fdbprintf("---------\r\n num_t.v25[i].lag            ==%s \n", num_t.v25[i].lag);             // 9
//			fdbprintf("---------\r\n num_t.v25[i].trid           ==%s \n", num_t.v25[i].trid);            // 10
//
//			fdbprintf("---------\r\n num_t.v25[i].errcode        ==%s \n", num_t.v25[i].errcode);         // 11
//			fdbprintf("---------\r\n num_t.v25[i].stat1          ==%s \n", num_t.v25[i].stat1);           // 12 
//			fdbprintf("---------\r\n num_t.v25[i].stat2          ==%s \n", num_t.v25[i].stat2);           // 13
//
//			fdbprintf("---------\r\n num_t.v25[i].pa_no          ==%s \n", num_t.v25[i].pa_no);           // 14
//			fdbprintf("---------\r\n num_t.v25[i].id             ==%s \n", num_t.v25[i].id);              // 15
//			fdbprintf("---------\r\n num_t.v25[i].order_date     ==%s \n", num_t.v25[i].order_date);      // 16
//			fdbprintf("---------\r\n num_t.v25[i].time_scale     ==%s \n", num_t.v25[i].time_scale);      // 17
//			fdbprintf("---------\r\n num_t.v25[i].dep            ==%s \n", num_t.v25[i].dep);             // 18
//
//			fdbprintf("---------\r\n num_t.v25[i].room           ==%s \n", num_t.v25[i].room);            // 19
//			fdbprintf("---------\r\n num_t.v25[i].dr_no          ==%s \n", num_t.v25[i].dr_no);           // 20
//			fdbprintf("---------\r\n num_t.v25[i].dr_name        ==%s \n", num_t.v25[i].dr_name);         // 21
//			fdbprintf("---------\r\n num_t.v25[i].seqno          ==%s \n", num_t.v25[i].seqno);           // 22
//
//			fdbprintf("---------\r\n num_t.v25[i].caller         ==%s \n", num_t.v25[i].caller);          // 23
//
//			// V2.10  1080219  ching2   v25_1新增hot_rep[500 + 1]記錄查詢結果
//			fdbprintf("---------\r\n num_t.v25[i].hot_rep         ==%s \n", num_t.v25[i].hot_rep);          // 24
//			
//			errno_t myErrNoT = fopen_s(&fd1, ".\\mdb\\write_db_err.txt", "a");			//1070221
//			fprintf(fd1, "%s \r\n", sOne);
//			fclose(fd1);
//		}
//
//
//		ReleaseMutex(hMutex);
//		CloseHandle(hMutex);
//
//		memcpy_s(exxp[linepos_thread].chain, sizeof(exxp[linepos_thread].chain), "REP OPEN_DB_ERROR END  ", 22);
//
//		strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
//		exVar[linepos_thread].rtran[3] = 0;
//		exVar[linepos_thread].rsync = exVar[linepos_thread].esync;
//		exVar[linepos_thread].remis = 64;
//
//		retCode_all_flag[linepos_thread] = -1;
//
//		sprintf_s(s1, sizeof(s1), "Thread_funCALL_L01() END !!! --------------------------------------------- %s(%i)\r\n", __FILE__, __LINE__);
//		funPrint_Log(s1);
//		return 0;
//	}
//
//	// DB OpenDatabase success
//	//sprintf_s(s1, sizeof(s1), "connect to database DSN=%s successful. %s(%i)\n", gDSN_icbcLog, __FILE__, __LINE__);
//
//	
//
//	//-----------------------------------------------------------------------------------------
//	// 增加 資料庫開啟成功, 要寫入 tabLog
//	//-----------------------------------------------------------------------------------------
//	char  table_name1[] = "tabLog";
//
//	char *pFields =
//
//		"num, "               // 1  筆數
//		"ivr_set, "           // 2  套數別 第一套= "1" 第二套="2" 
//		"line_no, "           // 3  線路別 1 2     
//		"line_hour, "         // 4  進線時段
//		"line_time_in, "      // 5  進線起始時間 YYYY/MM/DD hh:mm:ss 
//
//		"line_time_out, "     // 6  出線起始時間 YYYY/MM/DD hh:mm:ss 
//		"trid_time_in, "      // 7  交易起始時間 YYYY/MM/DD hh:mm:ss 
//		"trid_time_out, "     // 8  交易結束時間 YYYY/MM/DD hh:mm:ss 
//		"lag, "               // 9  語言別 1:國語  2:台語
//		"trid, "              // 10  交易代碼  v[1]選項   ( 依按鍵 選項填入)
//
//		"errcode, "           // 11 錯誤代碼   0000: 成功  E****
//		"stat1, "             // 12 0:success 1:failure 2:busy  保留用 
//		"stat2, "             // 13 cancel or not   H:host sent 
//
//		"pa_no, "             // 14 pa_no 病歷號碼
//		"id, "                // 15 id
//		"order_date, "        // 16 date
//		"time_scale, "        // 17 time_scale
//		"dep, "               // 18 dep
//
//		"room, "              // 19 room
//		"dr_no, "             // 20 dr_no
//		"dr_name, "           // 21 dr_name
//		"seqno, "        		  // 22 seqno     
//		"caller, "	          // 23 caller     
//
//	  // V2.10  1080219  ching2   v25_1新增hot_rep[500 + 1]記錄查詢結果
//		"hot_rep ";		        // 24 hot_rep		//**** " **** 後不可有 ,  ching2 語法錯誤!!
//	
//		
//		sprintf_s(s1, sizeof(s1), "pFields=[%s] %s(%d) \r\n", pFields, __FILE__, __LINE__);
//	funPrint_Log(s1);
//
//	for (i = 0; i < atoi(num1_t->totalnum); i++)
//	{
//
//		//  YYYY/MM/DD_hh:mm:ss   --> 去除底線為空白  YYYY/MM/DD hh:mm:ss
//		num_t.v25[i].line_time_in[10] = ' ';
//		num_t.v25[i].line_time_out[10] = ' ';
//		num_t.v25[i].trid_time_in[10] = ' ';
//		num_t.v25[i].trid_time_out[10] = ' ';
//
//
//		// V2.10  1080219  ching2   v25_1新增hot_rep[500 + 1]記錄查詢結果
//		//							               		    1    2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18    19    20    21    22     23       24
//		sprintf_s(myValue, sizeof(myValue), " '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s' , '%s'  , '%s'",
//
//			num_t.v25[i].num,					       // 1.第幾筆
//			num_t.v25[i].ivr_set,				     // 2.套數別 第一套= "1" 第二套="2" 
//			num_t.v25[i].line_no,				     // 3.線路別 1 2
//			num_t.v25[i].line_hour,				   // 4.進線時段
//			num_t.v25[i].line_time_in,			 // 5.進線起始時間 YYYY/MM/DD hh:mm:ss (共19位)
//			num_t.v25[i].line_time_out,			 // 6.出線起始時間 YYYY/MM/DD hh:mm:ss (共19位)
//			num_t.v25[i].trid_time_in,			 // 7.交易起始時間 YYYY/MM/DD hh:mm:ss (共19位) 
//			num_t.v25[i].trid_time_out,			 // 8.交易結束時間 YYYY/MM/DD hh:mm:ss (共19位)
//			num_t.v25[i].lag,					       // 9.語言別 1:國語  2:台語 v[1]
//			num_t.v25[i].trid,					     // 10.交易代碼
//			num_t.v25[i].errcode,				     // 11.錯誤代碼   0000: 成功  E****
//			num_t.v25[i].stat1,					     // 12. 0:success 1:failure 2:busy  保留用
//			num_t.v25[i].stat2,					     // 13. cancel or not   H:host sent
//			num_t.v25[i].pa_no,					     // 14. 病歷號碼 12345678  v[7]
//			num_t.v25[i].id,				    	   // 15. 身份證 A123456789  v[3]
//			num_t.v25[i].order_date,			   // 16. 看診日 yyymmdd v[4]
//			num_t.v25[i].time_scale,			   // 17. 看診時段 1:上午,2:下午,3:夜間 v[5]
//			num_t.v25[i].dep,		   			     // 18. 科別
//			num_t.v25[i].room,					     // 19. 診別
//			num_t.v25[i].dr_no,					     // 20. 醫師代號
//			num_t.v25[i].dr_name,				     // 21. 醫師姓名
//			num_t.v25[i].seqno,					     // 22. 看診號
//			num_t.v25[i].caller,					   // 23. caller     
//
//      // V2.10  1080219  ching2   v25_1新增hot_rep[500 + 1]記錄查詢結果
//			num_t.v25[i].hot_rep					   // 23. caller    
//
//		);
//
//
//		sprintf_s(s1, sizeof(s1), "myValue=[%s] %s(%d) \r\n", myValue, __FILE__, __LINE__);
//		funPrint_Log(s1);
//
//		sprintf_s(s1, sizeof(s1), "INSERT INTO %s (%s) VALUES (%s) %s(%i)\r\n", table_name1, pFields, myValue, __FILE__, __LINE__);
//		funPrint_Log(s1);
//
//		db.AddNewRecorder(table_name1, pFields, myValue);
//		Sleep(200);
//		CString msg1 = db.GetErrMsg();
//		sprintf_s(s1, "db.AddNewRecorder ..[%s] %s(%i) \r\n", (LPCTSTR)msg1, __FILE__, __LINE__);
//		funPrint_Log(s1);
//
//	}//for(i = 0;i<atoi(num1->totalnum);i++)
//
//	funPrint_Log("\r\n\r\n");
//
//	db.CloseDatabase();
//	Sleep(200);
//
//	ReleaseMutex(hMutex);
//	CloseHandle(hMutex);
//
//
//	memcpy_s(exxp[linepos_thread].chain, sizeof(exxp[linepos_thread].chain), "ERP 0000 END ", 12);
//
//	strncpy_s(exVar[linepos_thread].rtran, exVar[linepos_thread].etran, 3);
//	exVar[linepos_thread].rtran[3] = 0;
//	exVar[linepos_thread].rsync = exVar[linepos_thread].esync;
//	exVar[linepos_thread].remis = 64;
//
//	retCode_all_flag[linepos_thread] = -1;
//	sprintf_s(s1, sizeof(s1), "Thread_funCALL_L01() END !!!, return 1 %s(%i)------------------------------- \r\n", __FILE__, __LINE__);
//	funPrint_Log(s1);
//	return 1;
//}
//
//
//
//
//
//
////-----------------------------------------------------------------------------
////  NO:8 p400()
////
////       主迴圈
////        
////  IN : 無
////  OUT: 無
////-----------------------------------------------------------------------------
//int p400(void)
//{
//	char myEtran[50];
//	int  iKill = 0;
//
//
//
//	funPrint_Log("\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n");
//	funPrint_Log(" ==========================================================================\r\n");
//	funPrint_Log(" ==========================================================================\r\n");
//	funPrint_Log(" ==========================================================================\r\n");
//
//	sprintf_s(sTemp, sizeof(sTemp), " == 程式 hotTPH_L 開始啟動    AP by ots ching2  %s   ==\r\n", VERSION);
//	funPrint_Log(sTemp);
//
//	funPrint_Log(" ==========================================================================\r\n");
//	funPrint_Log(" ==========================================================================\r\n");
//	funPrint_Log(" ==========================================================================\r\n\r\n\r\n");
//	funPrint_Log("p400() start !!! --- \r\n");
//	funPrint_Log("\r\n");
//
//	//1070522    V3.33 ching2   修正版本顯示,VERSION, 每次異動版本需要修改
//	sprintf_s(vxp->message, sizeof(vxp->message), "%s", VERSION);
//	Sleep(1000);
//
//
//	//---------------------------------------------------------------------------
//	// add thread
//	//---------------------------------------------------------------------------
//	for (int i = 0; i < 200; i++)
//	{
//		hThread_all[i] = NULL;
//		retCode_all_flag[i] = 0;
//		memset(sIN_all[i], 0x00, sizeof(sIN_all[i]));
//	}
//
//	// ========================================================================
//	// (0.3).讀 ./conf/hotTPH_L.txt
//	// ========================================================================
//
//	strcpy_s(conf_ivr_start, sizeof(conf_ivr_start), "1");           //4   1      
//	strcpy_s(conf_ivr_end, sizeof(conf_ivr_end), "120");           //5   120
//
//
//	funRead_set();   // ./conf/hotTPH_L.txt
//	
//	while (1)
//	{
//
//
//
//		// V1.44  1070522  ching2    p400() add fdb_check_rotate();  for  dbg058 --> dbg058.dd  
//		fdb_check_rotate();
//		
//
//
//		// ========================================================================
//		// (1).check time 00:05:00 do delete log file 
//		// ========================================================================
//		time_t now;
//		struct tm now_tm;
//		time(&now);
//
//		errno_t errNoT = localtime_s(&now_tm, &now);
//		//now_tm.tm_year - 11, now_tm.tm_mon + 1, now_tm.tm_mday, now_tm.tm_hour, now_tm.tm_min, now_tm.tm_sec
//
//		if (now_tm.tm_hour == 0 && now_tm.tm_min == 5)  //00:05:00
//		{
//			iKill = 1;
//		}
//		if (now_tm.tm_hour == 0 && now_tm.tm_min == 6 && iKill == 1)
//		{
//			Sleep(2000);
//			funPrint_Log("\r\n\r\n");
//			funPrint_Log(" ==========================================================================\r\n");
//			funPrint_Log(" == 00:06:00 每日零晨刪除 去年次日之log檔  !!!!                          ==\r\n");
//			funPrint_Log(" ==========================================================================\r\n");
//			funKill_Log();
//			iKill = 0;
//		}
//
//
//
//
//
//
//		// V2.20  1071130  CW		從 hotslog1 搬來
//		// ========================================================================
//		// (1).每10分鐘 處理  ./mdb/write_db_err.txt   
//		// ========================================================================
//		//time(&lt);
//		//newtm = localtime(&lt);
//		time(&now);
//		errNoT = localtime_s(&now_tm, &now);
//		//fdbprintf(" %02d  %02d:%02d:%02d",newtm->tm_mday, newtm->tm_hour, newtm->tm_min, newtm->tm_sec );
//
//		if ((now_tm.tm_min == 10 || now_tm.tm_min == 20 || now_tm.tm_min == 30 || now_tm.tm_min == 40 || now_tm.tm_min == 50 || now_tm.tm_min == 0) && now_tm.tm_sec == 0)  //00:05:00
//		{
//			Sleep(2000);
//			//show_time();
//			funPrint_Log("\r\n\r\n");
//
//			funPrint_Log(" ==========================================================================\r\n");
//			funPrint_Log(" == (1).每10分鐘 處理  ./mdb/write_db_err.txt                            ==\r\n");
//			funPrint_Log(" ==========================================================================\r\n\r\n\r\n");
//			funDo_write_db_err();
//			Sleep(500);
//		}
//
//
//
//		// V2.30  1090316  ching2   del funDateAdd_yyyymm() 及 funDel_old_db_move() 功能
//
//		//// V2.20  1071130  CW		從 hotslog1 搬來
//		//// ========================================================================
//		//// (2).00:15:00 每月1/2/3 日零15分晨 搬log 到 上個月 , 並刪除之前 conf_log_expire 個月前 tablog_yyyymm 的資料
//		//// ========================================================================
//		//
//		////time(&lt);
//		////newtm = localtime(&lt);
//		//time(&now);
//		//errNoT = localtime_s(&now_tm, &now);
//		////fdbprintf(" %02d  %02d:%02d:%02d",newtm->tm_mday, newtm->tm_hour, newtm->tm_min, newtm->tm_sec );
//
//
//		//
//		//if ((now_tm.tm_mday == 1 || now_tm.tm_mday == 2 || now_tm.tm_mday == 3) && now_tm.tm_hour == 0 && now_tm.tm_min == 15 && now_tm.tm_sec <= 1)  //00:15:00
//		//{
//		//	Sleep(2000);
//		//	//show_time();
//		//	funPrint_Log("\r\n\r\n");
//		//	funPrint_Log(" ==========================================================================\r\n");
//		//	funPrint_Log(" == 00:15:00 每月1/2/3 日零15分晨 搬log 到 上個月 ,                       ==\r\n");
//		//	funPrint_Log(" == 並刪除之前 conf_log_expire 個月前 tablog_yyyymm 的資料 !!!           ==\r\n");
//		//	funPrint_Log(" ==========================================================================\r\n\r\n\r\n");
//		//	funDel_old_db_move();
//		//}
//
//		if (now_tm.tm_sec  == 0 )			funPrint_Log(".");
//
//		
//		// ========================================================================
//		// (4).check 使用者關線
//		// ========================================================================
//		// 991026  V1.3 CHING2  adjust commnad = 5
//		if ((vxp->command == '5')) //|| (vxp->command == '3') )      //5  
//		{
//			funPrint_Log("\r\n\r\n");
//			funPrint_Log(" ==========================================================================\r\n");
//			funPrint_Log(" == IVR與HOST不連線,使用者關線      vxp->command == '5'   立即           ==\r\n");
//			funPrint_Log(" ==========================================================================\r\n");
//			sprintf_s(vxp->message, 32, "使用者關線");
//
//			return(0);
//		}
//
//
//		// ========================================================================
//		// (4).check 使用者關線
//		// ========================================================================
//		// 991026  v1.3  ching2 add vxp->taskid == 0 自動關線 
//		if ((vxp->command == '3'))      //3  全關 -- 掛線  
//		{
//
//			int iEnd;
//			iEnd = 1;     //先設結束
//
//			for (int j = atoi(conf_ivr_start) - 1; j < atoi(conf_ivr_end); j++)
//			{
//				//sprintf(sTemp, " vxp->command == '3', j=[%d], vxp[j-156+1].taskid =[%d] \r\n", j, vxp[j-156+1].taskid );
//				//funPrint_Log(sTemp);
//				if (vxp[j - 156 + 1].taskid != 0)                      // 線路結束後 vxp->taskid 設為 0
//				{
//					iEnd = 0;     //有任何語音線使用中, 設不可結束
//					break;
//				}
//				else
//				{
//					sprintf_s(sTemp, sizeof(sTemp), " vxp->command == '3', j=[%d], vxp[j-156+1].taskid =[%d] \r\n", j, vxp[j - 156 + 1].taskid);
//					funPrint_Log(sTemp);
//				}
//			}
//
//
//			if (iEnd == 1)
//			{
//				funPrint_Log(" 1111 vxp->command == '3' \r\n");
//				funPrint_Log("\r\n\r\n");
//				funPrint_Log(" ==========================================================================\r\n");
//				funPrint_Log(" == IVR與HOST不連線,使用者關線    vxp->command == '3'    全關 -- 掛線    ==\r\n");
//				funPrint_Log(" ==========================================================================\r\n");
//				sprintf_s(vxp->message, 32, "使用者關線");
//				return(0);
//			}
//			else
//			{
//				//funPrint_Log(" 還有語音線路使用中    ==\r\n");
//			}
//		}
//
//
//
//
//		// ========================================================================
//		// (3).check retCode_all_flag
//		// ========================================================================
//		for (int i = 0; i < 200; i++)
//		{
//			if (retCode_all_flag[i] == -1)
//			{
//				//char s[1000];
//				//sprintf_s(s, sizeof(s), " CloseHandle()[i]=[%02d]  start !!!!\r\n", i);
//				//funPrint_Log(s);
//				CloseHandle(hThread_all[i]);
//				Sleep(10);   //too slow 40 line  50-> 10
//				//sprintf_s(s, sizeof(s), " CloseHandle()[i]=[%02d]  end   !!!!\r\n", i);
//				//funPrint_Log(s);
//				retCode_all_flag[i] = 0;
//				memset(sIN_all[i], 0x00, sizeof(sIN_all[i]));
//			}
//		}
//
//
//		while (chk_exe_emis())
//		{
//
//			if ((vxp->command == '5'))   // || (vxp->command == '3') )  
//			{
//				funPrint_Log("\r\n\r\n");
//				funPrint_Log(" ==========================================================================\r\n");
//				funPrint_Log(" == IVR與HOST不連線,使用者關線                                           ==\r\n");
//				funPrint_Log(" ==========================================================================\r\n");
//				sprintf_s(vxp->message, 32, "使用者關線");
//				return(0);
//
//			}
//
//			// ========================================================================
//			// (4).check 使用者關線
//			// ========================================================================
//			if ((vxp->command == '3'))      //3  全關 -- 掛線  
//			{
//				int iEnd;
//				iEnd = 1;     //先設結束
//
//				for (int j = atoi(conf_ivr_start) - 1; j < atoi(conf_ivr_end); j++)
//				{
//					//sprintf(sTemp, " vxp->command == '3', j=[%d], vxp[j-156+1].taskid =[%d] \r\n", j, vxp[j-156+1].taskid );
//					//funPrint_Log(sTemp);
//					if (vxp[j - 156 + 1].taskid != 0)                      // 線路結束後 vxp->taskid 設為 0
//					{
//						iEnd = 0;     //有任何語音線使用中, 設不可結束
//						break;
//					}
//					else
//					{
//						sprintf_s(sTemp, sizeof(sTemp), " vxp->command == '3', j=[%d], vxp[j-156+1].taskid =[%d] \r\n", j, vxp[j - 156 + 1].taskid);
//						funPrint_Log(sTemp);
//					}
//				}
//
//				if (iEnd == 1)
//				{
//					funPrint_Log(" 2222 vxp->command == '3' \r\n");
//					funPrint_Log("\r\n\r\n");
//					funPrint_Log(" ==========================================================================\r\n");
//					funPrint_Log(" == IVR與HOST不連線,使用者關線    vxp->command == '3'    全關 -- 掛線    ==\r\n");
//					funPrint_Log(" ==========================================================================\r\n");
//					sprintf_s(vxp->message, 30, "使用者關線");
//					return(0);
//				}
//				else
//				{
//					//funPrint_Log(" 還有語音線路使用中    ==\r\n");
//				}
//
//			}
//
//
//			memcpy_s(myEtran, sizeof(myEtran), exVar[linepos].etran, 3);        myEtran[3] = 0;
//
//			
//
//			// 改成 thread
//			//------------------------------------------------------------------------------------------
//			// 1.drxxx  send [L01]  寫LOG     
//			//------------------------------------------------------------------------------------------
//			if (strcmp(myEtran, "L01") == 0) {
//
//				if (retCode_all_flag[linepos] == -1) {
//					char s[1024] = { 0 };
//
//					sprintf_s(s, " P400 [L01] CloseHandle()[linepos]=[%02d] start !!!! %s(%i)\r\n", linepos, __FILE__, __LINE__);
//					funPrint_Log(s);
//					CloseHandle(hThread_all[linepos]);
//					Sleep(50);
//					sprintf_s(s, " P400 [L01] CloseHandle()[linepos]=[%02d]  End !!!! %s(%i)\r\n", linepos, __FILE__, __LINE__);
//					funPrint_Log(s);
//					retCode_all_flag[linepos] = 0;
//					memset(sIN_all[linepos], 0, sizeof(sIN_all[linepos]));
//				}
//	
//				exVar[linepos].eemis = 0;    //啟動音樂
//				sprintf_s(sIN_all[linepos], "%02d", linepos);
//				
//
//				if ((hThread_all[linepos] = CreateThread(NULL, 0, Thread_funCALL_L01, (LPVOID)&sIN_all[linepos], 0, &id)) == NULL) {
//					//1-1 
//					sprintf_s(sTemp, "linepos=[%d], CreateThread() Thread_funCALL_L01() error error error !!!!!!!!!!!!! %s(%i)\r\n", linepos, __FILE__, __LINE__);
//					funPrint_Log(sTemp);
//					Sleep(100);
//				}
//				else {
//					//1-2 CreateThread() OK SLEEP 避免 sIN 在 CreateThread() 被別線蓋走
//					Sleep(100);
//				}  //if( ( hThread_all[linepos] ....
//			}  //if ( (strcmp(myEtran, "A99" ) == 0) )
//
//
//
//			//Sleep(100);     //971219 500-> 100  ching2 不可等 因為會有40路同時進線會迼成 等40*500
//
//		} //while (chk_exe_emis()) {
//
//
//
//		Sleep(10);  //971219 500-> 100    --> 10 980106	
//
//
//	} //while (1) {
//
//
//}
//
//
//
//
//
//
////-----------------------------------------------------------------------------
////
////-----------------------------------------------------------------------------
//int main(int argc, char **argv)
//{
//	signal(SIGTERM, err_stop);
//	signal(SIGINT, SIG_IGN);
//
//
//	//fdbprintf("hotGen v1.2 970312");  //970312
//	//1060327 bug  需在 P100() 以後, 否則chk_exe_emis() 會當
//	// exVar = exVar;
//
//	voie = atoi(argv[1]) + 1;
//	if (p100() >= 0)
//	{
//		exVar = exVar;  //1060327 bug  需在 P100() 以後, 否則chk_exe_emis() 會當
//		p400();
//	}
//	p900();
//	return 0;
//
//}
//
//
//
