int __fastcall sub_80B114C(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r7@1
  int v3; // r5@1
  _BYTE *v4; // r0@2
  int v5; // r12@2
  int v6; // r0@6
  _BYTE *v7; // r2@6
  __int16 v8; // r1@6
  signed int v9; // r2@6
  int v10; // r4@6
  signed int v11; // r3@6
  __int16 v12; // r1@12
  __int16 v13; // r0@12
  int v14; // r4@17
  char v15; // r0@18
  char v16; // r1@19
  char v17; // r0@22
  char v18; // r0@33
  unsigned int v19; // r0@36
  int v20; // r2@36
  int v22; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 8 * a1;
  v3 = 28 * a1 + 33657440;
  *(_WORD *)(v3 + 2) = 0;
  *(_WORD *)v3 = 0;
  if ( sub_80AF404(a1) << 24 )
  {
    v4 = &gContestMoves[8 * *(_WORD *)(v3 + 6)];
    v5 = *v4;
    *(_BYTE *)(v3 + 10) = v4[1] & 7;
    if ( *(_WORD *)(v3 + 6) == *(_WORD *)(v3 + 8) && *(_WORD *)(v3 + 6) )
    {
      *(_BYTE *)(v3 + 21) |= 1u;
      *(_BYTE *)(v3 + 11) = *(_BYTE *)(v3 + 11) & 0x8F | 16
                                                       * ((((unsigned int)*(_BYTE *)(v3 + 11) << 25 >> 29) + 1) & 7);
    }
    else
    {
      *(_BYTE *)(28 * v1 + 0x201926B) &= 0x8Fu;
      v2 = 8 * v1;
    }
    v6 = 4 * (v2 - v1) + 33657440;
    v7 = &gContestEffects[4 * v5];
    v8 = v7[1];
    *(_WORD *)v6 = v8;
    *(_WORD *)(v6 + 2) = v8;
    v20192D4 = v7[2];
    v20192D6 = v20192D4;
    v20192E1 = v1;
    v9 = 0;
    v10 = 4 * v5;
    v11 = 33657440;
    do
    {
      *(_BYTE *)(v11 + 14) = 0;
      *(_BYTE *)(v9 + 33657565) = 0;
      v11 += 28;
      ++v9;
    }
    while ( v9 <= 3 );
    if ( *(_BYTE *)(4 * (v2 - v1) + 0x2019275) & 0x10
      && !(AreMovesContestCombo(*(_WORD *)(4 * (v2 - v1) + 0x2019268), *(_WORD *)(4 * (v2 - v1) + 0x2019266)) << 24) )
    {
      *(_BYTE *)(4 * (v2 - v1) + 0x2019275) &= 0xEFu;
    }
    call_via_r0(*(void **)((char *)&gContestEffectFuncs + v10));
    if ( (*(_BYTE *)(4 * (v2 - v1) + 0x2019270) & 0x30) == 16 )
    {
      v12 = *(_WORD *)(4 * (v2 - v1) + 0x2019262) - 10;
      v13 = *(_BYTE *)(4 * (v2 - v1) + 0x201926D);
    }
    else
    {
      if ( *(_BYTE *)(4 * (v2 - v1) + 0x2019271) & 0x20 )
        v13 = 3 * *(_BYTE *)(4 * (v2 - v1) + 0x201926D);
      else
        v13 = *(_BYTE *)(4 * (v2 - v1) + 0x201926D);
      v12 = *(_WORD *)(4 * (v2 - v1) + 0x2019262);
    }
    *(_WORD *)(4 * (v2 - v1) + 0x2019262) = v13 + v12;
    v14 = 4 * (v2 - v1) + 33657440;
    *(_BYTE *)(v14 + 22) = 0;
    *(_BYTE *)(v14 + 21) = *(_BYTE *)(4 * (v2 - v1) + 0x2019275) & 0xBF;
    if ( sub_80B214C(v1) << 24 )
    {
      v15 = AreMovesContestCombo(*(_WORD *)(4 * (v2 - v1) + 0x2019268), *(_WORD *)(4 * (v2 - v1) + 0x2019266));
      if ( v15 && (v16 = *(_BYTE *)(4 * (v2 - v1) + 0x2019275), *(_BYTE *)(4 * (v2 - v1) + 0x2019275) & 0x10) )
      {
        *(_BYTE *)(4 * (v2 - v1) + 0x2019276) = v15;
        *(_BYTE *)(4 * (v2 - v1) + 0x2019277) = *(_BYTE *)(4 * (v2 - v1) + 0x2019276)
                                              * *(_WORD *)(4 * (v2 - v1) + 0x2019260);
        *(_BYTE *)(4 * (v2 - v1) + 0x2019275) = (v16 | 0x40) & 0xEF | 8;
      }
      else
      {
        if ( gContestMoves[8 * *(_WORD *)(4 * (v2 - v1) + 0x2019266) + 2] )
          v17 = *(_BYTE *)(4 * (v2 - v1) + 0x2019275) | 0x50;
        else
          v17 = *(_BYTE *)(4 * (v2 - v1) + 0x2019275) & 0xEF;
        *(_BYTE *)(4 * (v2 - v1) + 0x2019275) = v17;
      }
    }
    if ( *(_BYTE *)(4 * (v2 - v1) + 0x2019275) & 1 )
      *(_BYTE *)(4 * (v2 - v1) + 0x2019278) = 10
                                            * (((unsigned int)*(_BYTE *)(4 * (v2 - v1) + 0x201926B) << 25 >> 29) + 1);
    if ( *(_BYTE *)(4 * (v2 - v1) + 0x201926C) & 1 )
    {
      *(_BYTE *)(4 * (v2 - v1) + 0x2019275) &= 0xEFu;
      *(_WORD *)(4 * (v2 - v1) + 0x2019262) = 0;
      *(_WORD *)(4 * (v2 - v1) + 0x2019260) = 0;
    }
    v2019328 = contest_get_move_excitement(*(_WORD *)(4 * (v2 - v1) + 0x2019266));
    if ( *(_BYTE *)(4 * (v2 - v1) + 0x2019271) & 0x10 )
      v2019328 = 1;
    if ( v2019328 <= 0 )
    {
      v18 = 0;
    }
    else if ( v2019217 + v2019328 <= 4 )
    {
      v18 = 10;
    }
    else
    {
      v18 = 60;
    }
    v201932A = v18;
    v19 = (unsigned __int16)Random() % 3u & 0xFF;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 != v1 )
      {
        if ( !v19 )
        {
_080B13D2:
          *(_BYTE *)(4 * (v2 - v1) + 0x201927B) = v20;
          return v22;
        }
        v19 = (v19 - 1) & 0xFF;
      }
      if ( ++v20 > 3 )
        goto _080B13D2;
    }
  }
  return v22;
}
