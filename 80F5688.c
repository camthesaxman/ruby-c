int __fastcall sub_80F5688(int a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  __int16 v7; // r9@1
  unsigned int v8; // r0@1
  int v9; // r1@2
  signed int v10; // r4@2
  int v11; // r2@2
  __int16 v12; // r10@2
  int v13; // r8@2
  int v14; // r0@3
  int v15; // r1@4
  unsigned int v16; // r8@7
  int j; // r6@8
  unsigned int v18; // r5@8
  int v19; // r12@8
  int v20; // r7@12
  unsigned int v21; // r5@12
  int v22; // r0@18
  int v23; // r6@20
  unsigned int v24; // r5@20
  _WORD *v25; // r3@21
  int k; // r7@26
  int v27; // r0@29
  int v28; // r7@29
  int v30; // [sp+0h] [bp-34h]@1
  int v31; // [sp+4h] [bp-30h]@2
  int v32; // [sp+8h] [bp-2Ch]@1
  __int16 i; // [sp+Ch] [bp-28h]@8
  int v34; // [sp+30h] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v30 = a3;
  v7 = a4;
  v32 = 0;
  v8 = *(_WORD *)(a2 + 2);
  if ( v8 >= *(_WORD *)(a3 + 2) )
  {
    v31 = *(_WORD *)(a3 + 2);
    v15 = *(_WORD *)a3;
    v10 = v15 << 10;
    v12 = *(_WORD *)v6;
    v13 = (*(_WORD *)(v6 + 2) - v31) & 0xFFFF;
    if ( !v13 )
      goto _080F56FC;
    v14 = *(_WORD *)v6 - v15;
  }
  else
  {
    v31 = *(_WORD *)(a2 + 2);
    v9 = *(_WORD *)a2;
    v10 = v9 << 10;
    v11 = *(_WORD *)a3;
    v12 = *(_WORD *)v30;
    v13 = (*(_WORD *)(v30 + 2) - v8) & 0xFFFF;
    if ( !v13 )
      goto _080F56FC;
    v14 = v11 - v9;
  }
  v32 = (v14 << 10) / v13;
_080F56FC:
  v16 = (v13 + 1) & 0xFFFF;
  if ( !a5 )
  {
    j = v5 + 4 * (v31 - 56);
    v18 = 0;
    v19 = 2 * a4;
    for ( i = v12 + a4; v18 < v16; v18 = (v18 + 1) & 0xFFFF )
    {
      *(_WORD *)(2 * a4 + j) = (v10 >> 10) + ((v10 >> 9) & 1) + a4;
      v10 += v32;
      j += 4;
    }
_080F57D4:
    v22 = j - 4;
_080F58C4:
    *(_WORD *)(v22 + v19) = i;
    return v34;
  }
  if ( v32 > 0 )
  {
    v20 = a5 + 4 * (v31 - 56);
    v21 = 0;
    v19 = 2 * a4;
    for ( i = v12 + a4; v21 < v16 && v10 <= 158719; v21 = (v21 + 1) & 0xFFFF )
    {
      *(_WORD *)(2 * a4 + v20) = (v10 >> 10) + ((v10 >> 9) & 1) + a4;
      v10 += v32;
      v20 += 4;
    }
    v2009340 = v31 + v21;
    for ( j = v5 + 4 * ((unsigned __int16)(v31 + v21) - 56); v21 < v16; v21 = (v21 + 1) & 0xFFFF )
    {
      *(_WORD *)(v19 + j) = (v10 >> 10) + ((v10 >> 9) & 1) + a4;
      v10 += v32;
      j += 4;
    }
    goto _080F57D4;
  }
  if ( v32 < 0 )
  {
    v23 = v5 + 4 * (v31 - 56);
    v24 = 0;
    v19 = 2 * a4;
    i = v12 + a4;
    if ( v16 > 0 )
    {
      v25 = (_WORD *)(2 * a4 + v23);
      *v25 = (v10 >> 10) + ((v10 >> 9) & 1) + v7;
      while ( v10 > 158719 )
      {
        v10 += v32;
        v23 += 4;
        v24 = (v24 + 1) & 0xFFFF;
        if ( v24 >= v16 )
          goto _080F5842;
        v25 = (_WORD *)(v19 + v23);
        *(_WORD *)(v19 + v23) = (v10 >> 10) + ((v10 >> 9) & 1) + v7;
      }
      *v25 = 155;
    }
_080F5842:
    v2009340 = v31 + v24;
    for ( k = a5 + 4 * ((unsigned __int16)(v31 + v24) - 56); v24 < v16; v24 = (v24 + 1) & 0xFFFF )
    {
      *(_WORD *)(v19 + k) = (v10 >> 10) + ((v10 >> 9) & 1) + v7;
      v10 += v32;
      k += 4;
    }
    v22 = k - 4;
    goto _080F58C4;
  }
  v2009340 = v31;
  v27 = 4 * (v31 - 56);
  v28 = a5 + v27;
  *(_WORD *)(v5 + v27 + 2) = *(_WORD *)v6 + 1;
  *(_WORD *)v28 = *(_WORD *)v30;
  *(_WORD *)(v28 + 2) = 155;
  return v34;
}
