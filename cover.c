#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int cover();

void fullscreen()
{  keybd_event(VK_MENU,             0x38,              0,               0);

    keybd_event(VK_RETURN,               0x1c,0,             0);

    keybd_event(VK_RETURN,  0x1c,      KEYEVENTF_KEYUP, 0);

    keybd_event(VK_MENU,  0x38,  KEYEVENTF_KEYUP,     0);

}
void remove_scrollbar()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size =
    {
        info.srWindow.Right - info.srWindow.Left + 1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);
}


int cover(){
	system("COLOR 1F");
	remove_scrollbar();
	fullscreen();
printf("\t                                                                                               ,                                     \n");
printf("\t                                                                                             ...                				     \n");
printf("\t                                                                             		     ....                             		 \n");
printf("\t                                                                                          ......                             		 \n");
printf("\t                                                                                        ........                                	 \n");
printf("\t                                                                   ..                  ........                                 	 \n");
printf("\t                                                                  ....               ..........                                      \n");
printf("\t                                                                  ......           ............                                      \n");
printf("\t                                                                 .........       ..............                ..                   \n");
printf("\t                                      ..                         ..........     ...............              ...                     \n");
printf("\t        ///////////////////////////////...,/////////////////////............,/.................///////////,....//////////////////////\n");
printf("\t        //                             .......                 ................................        .......                     //\n");
printf("\t        //                              ..........             ................................     .........                      //\n");
printf("\t        //                              .............         .................................  ...........                       //\n");
printf("\t        //                               ...............      .............................................                        //\n");
printf("\t        //                               ................... .............................................                         //\n");
printf("\t        //                                ..........&@@@/.....,@@@/...@@@#*.....&@@#*..............................................**\n");
printf("\t        //                  (&&           &&&.......&@@@/.....,@@@/...@@@#*.....&@@#*......&&&...........&&/........................//\n");
printf("\t        //                  &@@/          @@@/......&@@@/.....,@@@/...@@@#*.....&@@#*......@@@/..........@@#*..................     //\n");
printf("\t        //                  &@@/          @@@/......&@@@@@@@@@@@@@/...@@@@@@@@@@@@@#*......@@@/..........@@#*..............         //\n");
printf("\t        //          ...(@@@@@@@@@@@&/(@@@@@@@@@@@&*.&@@@((((((#@@@/...@@@&((((((&@@#*.(@@@@@@@@@@@&*@@@@@@@@@@@@/,.....             //\n");
printf("\t        //           ...*///&@@/////*.////@@@(////,.&@@@/.....,@@@/...@@@#*.....&@@#*..////@@@(////,.////@@#/////...                //\n");
printf("\t        //             .....&@@/..........@@@/......&@@@/.....,@@@/...@@@#*.....&@@#*......@@@/..........@@#*...                    //\n");
printf("\t        //               ...#@&/..........&@&/......&@@@/.....,@@@/...@@@#*.....&@@#*......&@&/..........&@/*                       //\n");
printf("\t        //                 ..........................***/......***/...,**/*......**/*.........................                     //\n");
printf("\t        //                   ...................................................................................                   //\n");
printf("\t        //                     ..................................................................................                  //\n");
printf("\t        //                      ..................................................................................                 //\n");
printf("\t        //                        ................................................................................                 //\n");
printf("\t        //                   ................................................................................                      //\n");
printf("\t        //             ...................................................................................                         //\n");
printf("\t        //      .,@@@@*...*@@...(@&../@.,@*./@/...#@..@@,@@,@@@@@@..*@@......#@@@,.@@@@&.&@&...,@@#.@@...@&   @@*                  //\n");
printf("\t        //     ..,@#.%@,..@(@&..#@@@,/@,,@/@@,....#@*@(..@@...@&....@(@&....*@#....@#....@&@@..@#@&.@@...@&. @@(@                  //\n");
printf("\t        //       *@&&@@,.&@./@(.#@.@@/@,,@&@#.....#@&@,..@@...@&...&@./@*....,\@@,.@@&&*.@&*@(&@,@&.@@...@&.*@* @&                 //\n");
printf("\t        //       .@#,#@/*@/**@@,#@..&@@,,@*.@@....#@,(@&.@@...@&..&@/**@@,../&&&@&.@&;;,.@&.*@@,.@&.#@(,#@(.@#***@/                //\n");
printf("\t        //             .......................................................,,.......................,,........                  //\n");
printf("\t        //                .....................................................................     ...............                //\n");
printf("\t        //                   ...................................................................            .........              //\n");
printf("\t        //                     ............[HH BANK, BANK KITA SEMUA.....]......................                    ..             //\n");
printf("\t        //                   ...................................................................                                   //\n");
printf("\t       //...........................................................................,............................................. //\n");
printf("\t        *****************,......................................................,********,......*************************************\n");
printf("\t                      .........................................................             ....                                     \n");
printf("\t                     ............................................... ...........                                                     \n");
printf("\t                         ..........................................     .......                                                      \n");
printf("\t                                        ............... ..........        .....                                                      \n");
printf("\t                                        .............     .......            .                                                       \n");
printf("\t                                        ...........        .....                                                                     \n");
printf("\t                                        ..........           ..                                                                      \n");
printf("\t                                        ........                                                                                     \n");
printf("\t                                        ......                                                                                       \n");
printf("\t                                        ....                                                                                         \n");
printf("\t                                        ...                                                                                          \n");
printf("\t                                        .                     															   			 \n");
return 0;
}

