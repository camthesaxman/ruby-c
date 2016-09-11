int __fastcall sub_8004DB0(int a1, _BYTE *a2, __int16 a3, char a4, unsigned __int8 a5, int a6)
{
  _BYTE *v6; // r8@1
  int v7; // r9@1
  char v8; // r4@1
  __int16 v9; // ST04_2@1
  unsigned int v10; // r5@1

  v6 = (_BYTE *)a1;
  v7 = (int)a2;
  v8 = a4;
  v9 = a3;
  v10 = (((unsigned int)(a6 << 16) >> 17) - (GetStringWidth(a1, a2) << 24 >> 25)) & 0xFF;
  InitWindow((int)v6, v7, v9, v8 + (v10 >> 3), a5);
  EraseAtCursor(v6);
  sub_80048D8((int)v6, v10 & 7, 0);
  return (unsigned __int8)sub_8002F44((int)v6);
}
