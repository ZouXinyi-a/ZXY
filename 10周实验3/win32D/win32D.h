// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN32D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN32D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN32D_EXPORTS
#define WIN32D_API __declspec(dllexport)
#else
#define WIN32D_API __declspec(dllimport)
#endif

// �����Ǵ� win32D.dll ������
class WIN32D_API Cwin32D {
public:
	Cwin32D(void);
	// TODO:  �ڴ�������ķ�����
};

extern WIN32D_API int nwin32D;

WIN32D_API int fnwin32D(void);

WIN32D_API int factorial(int n);

class WIN32D_API FAC {
public:
	float convert(float deg);
};
