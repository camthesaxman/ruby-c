int __fastcall FillWindowRectWithBlankTile(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r9@1
  unsigned __int8 v6; // r6@1
  unsigned __int8 v7; // r8@1
  unsigned __int8 v8; // r4@1
  unsigned __int16 v9; // r0@1
  int v11; // [sp+1Ch] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = GetBlankTileNum(a1);
  FillWindowRect_DefaultPalette(v5, v9, v6, v7, v8, a5);
  return v11;
}
