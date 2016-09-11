_BOOL4 __fastcall sub_811D978(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r3@1
  int v4; // r9@1
  int v5; // r10@1
  __int16 v6; // r8@1
  signed int v7; // r6@1
  __int16 v8; // r12@1
  signed int v9; // r5@1
  __int16 v10; // r0@2
  __int16 v11; // r2@2
  __int16 v12; // r4@2
  __int16 v13; // r7@2
  __int16 v14; // r1@3
  __int16 v15; // r0@4
  int v16; // r5@7
  int v17; // r2@7
  __int16 v18; // r4@8
  __int16 v19; // r4@14

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(_WORD *)(a1 + 16);
  v7 = *(_WORD *)(a1 + 16);
  v8 = *(_WORD *)(a1 + 18);
  v9 = *(_WORD *)(a1 + 18);
  if ( v7 <= v9 )
  {
    v15 = *(_WORD *)(a1 + 14);
    *(_WORD *)(v3 + 6) += v15;
    v11 = *(_WORD *)(v3 + 20) + v6;
    *(_WORD *)(v3 + 20) = v11;
    v12 = *(_WORD *)(v3 + 12);
    v13 = v15;
    if ( v11 > v9 )
    {
      *(_WORD *)(v3 + 4) += v12;
      v14 = v8;
      goto _0811D9EA;
    }
  }
  else
  {
    v10 = *(_WORD *)(a1 + 12);
    *(_WORD *)(v3 + 4) += v10;
    v11 = *(_WORD *)(v3 + 20) + v8;
    *(_WORD *)(v3 + 20) = v11;
    v12 = v10;
    v13 = *(_WORD *)(v3 + 14);
    if ( v11 > v7 )
    {
      *(_WORD *)(v3 + 6) += v13;
      v14 = v6;
_0811D9EA:
      *(_WORD *)(v3 + 20) = v11 - v14;
      goto _0811D9EE;
    }
  }
_0811D9EE:
  v16 = 0;
  v17 = v12;
  if ( v12 > 0 && (v18 = *(_WORD *)(v3 + 8), *(_WORD *)(v3 + 4) >= (signed int)*(_WORD *)(v3 + 8))
    || v17 < 0 && (v18 = *(_WORD *)(v3 + 8), *(_WORD *)(v3 + 4) <= (signed int)*(_WORD *)(v3 + 8)) )
  {
    v16 = 1;
    if ( v4 )
      *(_WORD *)(v3 + 4) = v18;
  }
  if ( v13 > 0 && (v19 = *(_WORD *)(v3 + 10), *(_WORD *)(v3 + 6) >= (signed int)*(_WORD *)(v3 + 10))
    || v13 < 0 && (v19 = *(_WORD *)(v3 + 10), *(_WORD *)(v3 + 6) <= (signed int)*(_WORD *)(v3 + 10)) )
  {
    v16 = (v16 + 1) & 0xFF;
    if ( v5 )
      *(_WORD *)(v3 + 6) = v19;
  }
  return v16 == 2;
}
