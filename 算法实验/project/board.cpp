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
//    int t = tile++;   // L�͹��ƺ�
//    int s = size / 2; // �ָ�����
//                      // �������Ͻ�������
//    if (dr < tr + s && dc < tc + s)
//        // ���ⷽ���ڴ�������
//        chessBoard(tr, tc, dr, dc, s);
//    else
//    {   // �������������ⷽ��
//        // �� t ��L�͹��Ƹ������½�
//        board[tr + s - 1][tc + s - 1] = t;
//        // �������෽��
//        chessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//    }
//    // �������Ͻ�������
//    if (dr < tr + s && dc >= tc + s)
//        // ���ⷽ���ڴ�������
//        chessBoard(tr, tc + s, dr, dc, s);
//    else
//    {   // �������������ⷽ��
//        // �� t ��L�͹��Ƹ������½�
//        board[tr + s - 1][tc + s] = t;
//        // �������෽��
//        chessBoard(tr, tc + s, tr + s - 1, tc + s, s);
//    }
//    // �������½�������
//    if (dr >= tr + s && dc < tc + s)
//        // ���ⷽ���ڴ�������
//        chessBoard(tr + s, tc, dr, dc, s);
//    else
//    { // �� t ��L�͹��Ƹ������Ͻ�
//        board[tr + s][tc + s - 1] = t;
//        // �������෽��
//        chessBoard(tr + s, tc, tr + s, tc + s - 1, s);
//    }
//    // �������½�������
//    if (dr >= tr + s && dc >= tc + s)
//        // ���ⷽ���ڴ�������
//        chessBoard(tr + s, tc + s, dr, dc, s);
//    else
//    { // �� t ��L�͹��Ƹ������Ͻ�
//        board[tr + s][tc + s] = t;
//        // �������෽��
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