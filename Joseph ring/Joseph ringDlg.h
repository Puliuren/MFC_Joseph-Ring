
// Joseph ringDlg.h: 头文件
//

#pragma once


// CJosephringDlg 对话框
class CJosephringDlg : public CDialogEx
{
// 构造
public:
	CJosephringDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_JOSEPHRING_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	//afx_msg void OnTimer(UINT_PTR nIDEvent);
	/*UINT m_people_all;
	UINT m_people_start;
	UINT m_people_peroid;*/
	UINT m_people_all;
	UINT m_people_start;
	UINT m_people_peroid;
	int m_number2;
	int m_number;
	CListCtrl m_code;
	CListCtrl m_result;
	CStatic m_picture;
	CProgressCtrl m_progress;
	int died[(int)1e3 + 5];
	int died_num[(int)1e3 + 5];
	bool Invalid();
	void Build_Josephus_ring();
	void Init_Josephus_ring();
	void Create_Josephus_ring();
	void Draw_Joseph_ring(double x, double y, int state);
	int m_code_row;
	void Joseph_ring_code_selectiom(int x);
	int m_cnt;
	int m_cur_pos;
	int m_death;
	int m_period;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
