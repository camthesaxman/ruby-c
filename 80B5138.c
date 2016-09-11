int __fastcall sub_80B5138(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int *a4, int a5, char a6)
{
  int v6; // r10@1
  int v7; // r9@1
  unsigned int v8; // r8@1
  unsigned int v9; // r5@1
  unsigned int i; // r4@1
  unsigned int v11; // r0@2
  unsigned int v12; // r7@5
  int v14; // [sp+8h] [bp-2Ch]@1
  int v15; // [sp+30h] [bp-4h]@0

  v6 = (int)a4;
  v7 = a1;
  v14 = a2;
  v8 = a3;
  v9 = (unsigned __int16)GetStringWidthInTilesForScriptMenu(*a4);
  for ( i = 1; i < v8; i = (i + 1) & 0xFF )
  {
    v11 = (unsigned __int16)GetStringWidthInTilesForScriptMenu(*(_DWORD *)(8 * i + v6));
    if ( v9 < v11 )
      v9 = v11;
  }
  v12 = ((unsigned __int8)v9 + v7 + 1) & 0xFF;
  if ( v12 > 0x1D )
  {
    v7 = (v7 + 29 - v12) & 0xFF;
    v12 = 29;
  }
  MenuDrawTextWindow(v7, v14);
  PrintMenuItems(v7 + 1, v14 + 1, v8, v6);
  InitMenu(0, v7 + 1, v14 + 1, v8, a6, v12 - v7 - 1);
  sub_80B5230(v7, v14, v12, ((char)v14 + 2 * v8 + 1) & 0xFF);
  return v15;
}
