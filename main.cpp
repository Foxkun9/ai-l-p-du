#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#define MAX 13
//Hàm thay đổi vị trí con trỏ trong màn hình console
void gotoxy(int x,int y)
{
    HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD g = {x,y};
    SetConsoleCursorPosition(h,g);
}
//Hàm thay đổi màu văn bản(mã màu từ 0 tới 12)
void textcolor(int x)
{
    HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,x);
}

//Hàm thay đổi kích thước màn hình console
void resizeConsole(int width, int height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

//Hàm viết các văn bản tiêu đề
void Begin()
{
    gotoxy(28,2); textcolor(12); printf("CONNECTING FROM LOVE SEVER");
   gotoxy(13,4); textcolor(12); printf("%c%c%c",3,3,3);gotoxy(65,4);printf("%c%c%c",3,3,3);
   gotoxy(16,4); textcolor(11); printf(" Send to...........Nguoi con gai toi tham thuong");
  // gotoxy(18,6); textcolor(14); printf("____________________________________________");
   gotoxy(32,6); textcolor(13); printf("Loading......10%%");
   gotoxy(18,7); textcolor(14); printf("____________________________________________");
}


//Hàm vẽ trái tim
void love(int luu)
{

//Ma trận trái tim
int traitim[MAX][MAX]= {
{0,0,1,1,1,0,0,0,1,1,1,0,0},
{0,1,0,0,0,1,0,1,0,0,0,1,0},
{1,0,0,0,0,0,1,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,1},
{0,1,0,0,0,0,0,0,0,0,0,1,0},
{0,0,1,0,0,0,0,0,0,0,1,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,0},
{0,0,0,0,1,0,0,0,1,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0}};
textcolor(luu%14+1); //Thay đổi màu vẽ trái tim

//=.>Vẽ trái tim từ ma trận trái tim
if(luu==0)
{
    for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            Sleep(10);
            if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
            else  {gotoxy(j+20,i+10); printf(" ");}
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            Sleep(10);
            if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
            else  {gotoxy(j+33,i+10); printf(" ");}
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            Sleep(10);
            if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
            else  {gotoxy(j+46,i+10); printf(" ");}
        }
    printf("\n");
}
}
if(luu%2==0)
{
    for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
            else  {gotoxy(j+20,i+10); printf(" ");}
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
            else  {gotoxy(j+33,i+10); printf(" ");}
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
            else  {gotoxy(j+46,i+10); printf(" ");}
        }
    printf("\n");
}
}
   textcolor(12);
   gotoxy(26,14); printf("I");   gotoxy(38,14); printf("LOVE");    gotoxy(51,14); printf("YOU");
}
int main()
{
    resizeConsole(900,450);
    Begin();  //Gọi hàm begin


//Ghi các đoạn văn bản ra màn hình Console
    gotoxy(10,10); textcolor(15); printf("           Cau a!! To co dieu muon noi voi cau.....                         ");
    Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......15%%");
    gotoxy(10,10); textcolor(15); printf("Truoc khi gap cau....to co nhieu  thoi gian ranh roi lam                        ");
    Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......21%%");
    gotoxy(10,10); textcolor(15); printf(" Nhung tu sau khi gap cau....Nhung khoang thoi gian do khong con nua                ");
    gotoxy(10,12); textcolor(15); printf("  ma no bi lop day boi noi nho, tuong tu, va nhung nghi suy ve cau                   ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......26%%");
    Sleep(500);gotoxy(10,10); textcolor(15); printf("               Co le 'To thich cau that roi......'                    ");
    gotoxy(10,12); textcolor(15); printf("     Mac du no ko duoc hoanh trang nhung no la that long ...                ");
    Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......35%%");
    gotoxy(10,10); textcolor(15); printf("             Vi Vay to viet doan code nay de ngo loi vai Cau                            ");
    Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......41%%");
    gotoxy(10,10); textcolor(15); printf("To khong duoc dep trai, nha to cung khong giau, to cung khong hoc gioi                         ");
    gotoxy(10,12); textcolor(15); printf("                 nhu bao nguoi con trai khac                              ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......49%%");
    gotoxy(10,10); textcolor(15); printf("     To chi la 1 thang con trai me Game , hoc dot, bat tai......                  ");
    gotoxy(10,12); textcolor(15); printf("                                                                                    ");
    Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......55%%");
    gotoxy(10,10); textcolor(15); printf("Nhieu luc thuc su to muon lay het can dam tien lai gan cau va noi                        ");
    gotoxy(10,12); textcolor(11); printf("                    'TO THICH CAU'                                           ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......61%%");
    gotoxy(10,10); textcolor(15); printf("              Nhung to khong lam duoc....                                 ");
    gotoxy(10,12); textcolor(15); printf("   To khong co diem gi noi bat de co the ngo loi voi cau                    ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......68%%");
    gotoxy(10,10); textcolor(15); printf("       Vi vay to viet doan code nay cho cau....                              ");
    gotoxy(10,12); textcolor(15); printf("        Va mong rang cau xem het doan code nay                                           ");
    Sleep(5000);gotoxy(32,6); textcolor(13); printf("Loading......85%%");
    gotoxy(10,10); textcolor(15); printf("                      De noi rang To                                              ");
    gotoxy(10,12); textcolor(11); printf("                      To Thich Cau!!                                      ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......93%%");
    gotoxy(10,10); textcolor(15); printf("                 Cau dong y lam ny To nhe!                                               ");
    gotoxy(10,12); textcolor(15); printf("  Neu khong cung duoc chung ta van se co the lam ban chu!!                                     ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......99%%");
    gotoxy(10,10); textcolor(15); printf("To chi can moi ngay den truong deu duoc nhin thay cau                          ");
    gotoxy(10,12); textcolor(15); printf("          cung du lam cho to vui roi!!!                                          ");
    Sleep(10000);gotoxy(32,6); textcolor(13); printf("Loading......100%%");
    gotoxy(10,10); textcolor(7); printf("Va hien tai hy vong duy nhat cua to chi la                             ");
    gotoxy(10,12); textcolor(14); printf("          Mong Cau Dong y                                                             ");
    gotoxy(10,14); textcolor(5); printf("      To thich cau nhieu lam ;-;                                                ");
    Sleep(10000);
    system("cls");
    int luu = 0;
    while(1)
    {
        love(luu);
        luu++;
        Sleep(300);
       }

getch();
}    //by Foxkun coder

