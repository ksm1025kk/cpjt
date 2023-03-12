#include "framework.h"
#include "calculator.h"

#define NONE   0
#define ADD    1
#define SUB    2
#define MUL    3
#define DIV    4

// DlgProc의 매개변수에 있는 값을 백업해서 다른 함수에서 사용하기 위한 전역변수
HWND g_hDlg;

void Oper(int first_num, int oper) {
    int num = GetDlgItemInt(g_hDlg, IDC_EDIT1, 0, TRUE);
    if (oper == ADD) {
        SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num + num, TRUE);
    }
    if (oper == SUB) {
        SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num - num, TRUE);
    }
    if (oper == MUL) {
        SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num * num, TRUE);
    }
    else if (oper == DIV) {
        if (num != 0) {
            SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num / num, TRUE);
        }
        else {
            SetDlgItemInt(g_hDlg, IDC_EDIT1, 0, TRUE);
        }
    }
}

void NumBtn(int number, int* p_reset_flag) {
    if (*p_reset_flag == 0) {
        int num = GetDlgItemInt(g_hDlg, IDC_EDIT1, 0, TRUE);
        SetDlgItemInt(g_hDlg, IDC_EDIT1, num * 10 + number, TRUE);
    }
    else {
        SetDlgItemInt(g_hDlg, IDC_EDIT1, number, TRUE);
        *p_reset_flag = 0;
    }
}

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);

    // 플래그 : 어떤 연산기호가 눌린 상태냐, 연산기호가 이전에 눌렸었나(숫자 새로쓰기 여부)
    // static : 함수가 끝내도 공간이 삭제되지않는 지역변수(유사 전역변수)
    static int oper = 0;                // 0은 안눌림, 1은 더하기 , 2는 빼기, 3은 곱하기, 4는 나누기
    static int reset_flag;              // 0은 안눌림, 1 : 연산기호 눌림
    static int first_num;
    
    g_hDlg = hDlg;                      // 함수 안에 있는 지역변수의 값을 전역변수에 백업
    
    switch (message){
    case WM_INITDIALOG:
        oper = NONE;
        reset_flag = 0;                         // 버튼을 누르면 새로 쓰겠다.
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        int key = LOWORD(wParam);
        if (key == IDCANCEL) {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        else if (key == IDOK) {
            Oper(first_num, oper);
            oper = NONE;
            reset_flag = 1;
        }
        else if (key == IDC_BUTTON0){
            NumBtn(0, &reset_flag);
        }
        else if (key == IDC_BUTTON1) {
            NumBtn(1, &reset_flag);
        }
        else if (key == IDC_BUTTON2) {
            NumBtn(2, &reset_flag);
        }
        else if (key == IDC_BUTTON3) {
            NumBtn(3, &reset_flag);
        }
        else if (key == IDC_BUTTON4) {
            NumBtn(4, &reset_flag);
        }
        else if (key == IDC_BUTTON5) {
            NumBtn(5, &reset_flag);
        }
        else if (key == IDC_BUTTON6) {
            NumBtn(6, &reset_flag);
        }
        else if (key == IDC_BUTTON7) {
            NumBtn(7, &reset_flag);
        }
        else if (key == IDC_BUTTON8) {
            NumBtn(8, &reset_flag);
        }
        else if (key == IDC_BUTTON9) {
            NumBtn(9, &reset_flag);
        }
        else if (key == IDC_CLEAR) {
            reset_flag = 0;
            oper = NONE;
            SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
        }
        else if (key == IDC_BACK) {
            int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            SetDlgItemInt(hDlg, IDC_EDIT1, num / 10, TRUE);
        }
        else if (key == IDC_ADD) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = ADD;
        }
        else if (key == IDC_SUB) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = SUB;
        }
        else if (key == IDC_ADD3) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = MUL;
        }
        else if (key == IDC_ADD4) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = DIV;
        }
        break;
    }
    return (INT_PTR)FALSE;
}


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG10), 0, DlgProc);
    return 0;
}

