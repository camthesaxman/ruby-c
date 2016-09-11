int __fastcall sub_80CF8B8(int a1)
{
  int v1; // r7@1
  int *v2; // r6@1
  int v3; // r2@1
  int v4; // r0@2
  unsigned int v5; // r0@5
  int v6; // r0@7
  int v7; // r5@8
  int v8; // r2@8
  int v9; // r3@8
  int v10; // r0@9
  int v11; // r4@11
  int v12; // r3@11
  int v13; // r2@11
  int v14; // r0@12
  int v15; // r8@14
  int v16; // r4@14
  __int16 v17; // r0@14
  int v18; // r4@14
  __int16 v19; // r0@14
  int v21; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * *(_WORD *)(a1 + 60)];
  v3 = (unsigned __int16)(*((_WORD *)v2 + 11) & 0xFFFE) + *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 48) = v3;
  *(_WORD *)(a1 + 50) += *((_WORD *)v2 + 12) & 0xFFFE;
  if ( *((_WORD *)v2 + 11) & 1 )
    v4 = -((unsigned int)(v3 << 16) >> 24);
  else
    v4 = (unsigned int)(v3 << 16) >> 24;
  *(_WORD *)(v1 + 36) = v4;
  if ( *((_WORD *)v2 + 12) & 1 )
    v5 = -((unsigned int)*(_WORD *)(v1 + 50) >> 8);
  else
    v5 = (unsigned int)*(_WORD *)(v1 + 50) >> 8;
  *(_WORD *)(v1 + 38) = v5;
  v6 = *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v6 - 1;
  if ( v6 << 16 <= 0 )
  {
    *(_WORD *)(v1 + 46) = 8;
    *((_WORD *)v2 + 9) = 4;
    v7 = sub_81174E0(4096) & 0xFFFF;
    v8 = *(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 32) = v8;
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    v9 = *((_WORD *)v2 + 15);
    if ( *((_WORD *)v2 + 15) < (signed __int16)v8 )
      v10 = v8 - v9;
    else
      v10 = v9 - v8;
    v11 = (v10 << 8) & 0xFFFF;
    v12 = *((_WORD *)v2 + 16);
    v13 = *(_WORD *)(v1 + 34);
    if ( *((_WORD *)v2 + 16) < (signed int)*(_WORD *)(v1 + 34) )
      v14 = v13 - v12;
    else
      v14 = v12 - v13;
    v15 = (v14 << 8) & 0xFFFF;
    *(_WORD *)(v1 + 50) = 0;
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 58) = 0;
    *(_WORD *)(v1 + 56) = 0;
    v16 = (signed __int16)sub_81174C4((signed __int16)v11, (signed __int16)v7);
    v17 = sub_81174E0(448);
    *(_WORD *)(v1 + 52) = sub_81174C4(v16, v17);
    v18 = (signed __int16)sub_81174C4((signed __int16)v15, (signed __int16)v7);
    v19 = sub_81174E0(448);
    *(_WORD *)(v1 + 54) = sub_81174C4(v18, v19);
    *(_DWORD *)(v1 + 28) = sub_80CF814;
  }
  return v21;
}
