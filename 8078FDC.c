int __fastcall sub_8078FDC(int a1, char a2, unsigned __int16 a3, unsigned __int16 a4, unsigned __int16 a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r7@1
  unsigned int v8; // r4@6
  __int16 *v9; // r4@6
  unsigned int v11; // [sp+0h] [bp-28h]@4
  unsigned int v12; // [sp+4h] [bp-24h]@4
  char v13; // [sp+8h] [bp-20h]@6
  __int16 v14; // [sp+Ah] [bp-1Eh]@6
  __int16 v15; // [sp+Ch] [bp-1Ch]@6
  __int16 v16; // [sp+Eh] [bp-1Ah]@6
  int v17; // [sp+24h] [bp-4h]@7

  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( *(_BYTE *)(a1 + 1) & 1 )
  {
    *(_BYTE *)(a1 + 44) |= 0x80u;
    if ( a2 )
      CalcCenterToCornerVec(
        a1,
        (unsigned int)*(_BYTE *)(a1 + 1) >> 6,
        (unsigned int)*(_BYTE *)(a1 + 3) >> 6,
        *(_BYTE *)(a1 + 1) & 3);
    v11 = v6 | (v7 << 16);
    v12 = v12 & 0xFFFF0000 | a5;
    if ( sub_8078E38() << 24 )
      v11 = v11 & 0xFFFF0000 | 0xFFFF * (unsigned __int16)v11 & 0xFFFF;
    v8 = (unsigned int)*(_BYTE *)(v5 + 3) << 26 >> 27;
    ObjAffineSet(&v11, &v13, 1, 2);
    v9 = &gOamMatrices[4 * v8];
    *v9 = *(_WORD *)&v13;
    v9[1] = v14;
    v9[2] = v15;
    v9[3] = v16;
  }
  return v17;
}
