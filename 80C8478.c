int __fastcall sub_80C8478(int a1)
{
  unsigned int v1; // r2@1
  int v2; // r8@1
  int v3; // r5@2
  int v4; // r4@2
  int v5; // r2@5
  int v6; // r1@5
  __int16 v8; // [sp+0h] [bp-20h]@5
  __int16 v9; // [sp+2h] [bp-1Eh]@5
  int v10; // [sp+1Ch] [bp-4h]@7

  v1 = 0;
  v2 = (8 * a1 & 0x7FF) + 33709868;
  while ( 1 )
  {
    v3 = 16 * v1;
    v4 = 16 * v1 + 33785868;
    if ( !*(_BYTE *)(16 * v1 + 0x2038810) && !*(_WORD *)(16 * v1 + 0x203880C) && !*(_WORD *)(16 * v1 + 0x203880E) )
      break;
    v1 = (v1 + 1) & 0xFF;
    if ( v1 > 9 )
      return v10;
  }
  GetXYCoordsOneStepInFrontOfPlayer(&v8, &v9);
  *(_BYTE *)(v4 + 4) = v2025739;
  v5 = v3 + 33785876;
  v6 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)v5 = *(_DWORD *)v2;
  *(_DWORD *)(v5 + 4) = v6;
  *(_BYTE *)(v4 + 5) = 100;
  *(_WORD *)v4 = v8;
  *(_WORD *)(v4 + 2) = v9;
  return v10;
}
