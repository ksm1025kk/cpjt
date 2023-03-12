#include "framework.h"
#include "calculator.h"

INT_PTR CALLBACK DlgProc(HWND)hDlg, UINT message, WPARAM, LParam IParam){
	switch (mesesage) 
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDCANCEL)
		{
			// 취소버튼을 누르면 동작할 코드
			EndDialog 

		}
	}
}
