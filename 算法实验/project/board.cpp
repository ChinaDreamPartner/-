//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int tile = 1;
//int** board;
//void chessBoard(int tr, int tc, int dr, int dc, int size)
//{
//    if (size == 1)
//        return;
//    int t = tile++;   // L型骨牌号
//    int s = size / 2; // 分割棋盘
//                      // 覆盖左上角子棋盘
//    if (dr < tr + s && dc < tc + s)
//        // 特殊方格在此棋盘中
//        chessBoard(tr, tc, dr, dc, s);
//    else
//    {   // 此棋盘中无特殊方格
//        // 用 t 号L型骨牌覆盖右下角
//        board[tr + s - 1][tc + s - 1] = t;
//        // 覆盖其余方格
//        chessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//    }
//    // 覆盖右上角子棋盘
//    if (dr < tr + s && dc >= tc + s)
//        // 特殊方格在此棋盘中
//        chessBoard(tr, tc + s, dr, dc, s);
//    else
//    {   // 此棋盘中无特殊方格
//        // 用 t 号L型骨牌覆盖左下角
//        board[tr + s - 1][tc + s] = t;
//        // 覆盖其余方格
//        chessBoard(tr, tc + s, tr + s - 1, tc + s, s);
//    }
//    // 覆盖左下角子棋盘
//    if (dr >= tr + s && dc < tc + s)
//        // 特殊方格在此棋盘中
//        chessBoard(tr + s, tc, dr, dc, s);
//    else
//    { // 用 t 号L型骨牌覆盖右上角
//        board[tr + s][tc + s - 1] = t;
//        // 覆盖其余方格
//        chessBoard(tr + s, tc, tr + s, tc + s - 1, s);
//    }
//    // 覆盖右下角子棋盘
//    if (dr >= tr + s && dc >= tc + s)
//        // 特殊方格在此棋盘中
//        chessBoard(tr + s, tc + s, dr, dc, s);
//    else
//    { // 用 t 号L型骨牌覆盖左上角
//        board[tr + s][tc + s] = t;
//        // 覆盖其余方格
//        chessBoard(tr + s, tc + s, tr + s, tc + s, s);
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    board = (int**)malloc(sizeof(int*) * n);
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        board[i] = (int*)malloc(sizeof(int) * n);
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            board[i][j] = 0;
//        }
//    }
//    int p, m;
//    cin >> p >> m;
//    chessBoard(0, 0, p-1, m-1, n);
//
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%2d ", board[i][j]);
//        }
//        cout << endl;
//    }
//
//    free(board);
//}