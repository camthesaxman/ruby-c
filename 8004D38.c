int __fastcall sub_8004D38(int a1, _BYTE *a2, __int16 a3, char a4, unsigned __int8 a5)
{
  _BYTE *v5; // r9@1
  int v6; // r8@1
  __int16 v7; // r6@1
  char v8; // r4@1
  unsigned __int8 v9; // r7@1
  int v10; // r7@1

  v5 = (_BYTE *)a1;
  v6 = (int)a2;
  v7 = a3;
  v8 = a4;
  v9 = GetStringWidth(a1, a2);
  InitWindow((int)v5, v6, v7, v8 - (((unsigned int)v9 + 7) >> 3), a5);
  EraseAtCursor(v5);
  v10 = v9 & 7;
  if ( v10 )
    v10 = (8 - v10) & 0xFF;
  sub_80048D8((int)v5, v10, 0);
  return (unsigned __int8)sub_8002F44((int)v5);
}
