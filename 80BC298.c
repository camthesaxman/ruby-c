unsigned int __fastcall sub_80BC298(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r2@1
  int v6; // r4@1
  int v7; // r2@1
  int v8; // r4@1
  int v9; // r2@1
  int v10; // r4@1
  int v11; // r2@1
  int v12; // r4@1
  int v13; // r2@1

  v3 = a1;
  v4 = (unsigned __int16)GetMonData(a1, 26, a3);
  v6 = (v4 + GetMonData(v3, 27, v5)) & 0xFFFF;
  v8 = (v6 + GetMonData(v3, 28, v7)) & 0xFFFF;
  v10 = (v8 + GetMonData(v3, 29, v9)) & 0xFFFF;
  v12 = (v10 + GetMonData(v3, 30, v11)) & 0xFFFF;
  return ((v12 + GetMonData(v3, 31, v13)) & 0xFFFFu) / 6 & 0xFF;
}
