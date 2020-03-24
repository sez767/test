#pragma once
struct ImgTexture {
    int Width;  // ����������� ������ �������
    int Height; // ����������� ������ �������
    int Loaded;
    Bitmap* bmp;
    void DrawImage(int x, int y);
    int LoadFromFile(const wchar_t* fname);
    void Print(float x, float y);
};

extern HFONT font;
extern HFONT fontBIG;
extern HFONT fontKor;

struct TMemo10 {
    int x, y, w, h; // ���, ����, ������, ������
    int dy = 20;
    int ind = 0; // �����
    int tp = 0; // top string
    int offset = 0; // �������� �� ��������
    char string[100][100]; // 100 ����� �� 100 ��������
    TMemo10(int ix, int iy, int iw, int ih) {
        x = ix, y = iy, w = iw, h = ih;
     }
    void Clear();
    void ClearBar();
    void print(const char* Format, ...);
    void Draw();

};

extern TMemo10 memo;