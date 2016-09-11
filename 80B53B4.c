int __fastcall sub_80B53B4(unsigned __int8 a1, char a2, unsigned __int8 a3, int *a4, unsigned __int8 a5)
{
  int v5; // r7@1
  unsigned int v6; // r8@1
  char v7; // r9@1
  unsigned int v8; // r6@1
  unsigned int v9; // r4@1
  unsigned int i; // r5@1
  unsigned int v11; // r0@2
  int v12; // r4@5
  int v14; // [sp+24h] [bp-4h]@0

  v5 = (int)a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = (unsigned __int16)GetStringWidthInTilesForScriptMenu(*a4);
  for ( i = 1; i < v8; i = (i + 1) & 0xFF )
  {
    v11 = (unsigned __int16)GetStringWidthInTilesForScriptMenu(*(_DWORD *)(8 * i + v5));
    if ( v9 < v11 )
      v9 = v11;
  }
  v12 = ((unsigned __int8)v9 + v6 + 2) & 0xFF;
  PrintMenuItems(v6, v7, v8, v5);
  InitMenu(0, v6, v7, v8, 0, v12 - v6 - 1);
  sub_80B5230(v6, v7, v12, v7 + 2 * v8 + 1, a5, v8);
  return v14;
}
