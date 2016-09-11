int __fastcall sub_80872E4(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r2@1
  __int16 v7; // r1@1
  int v8; // r0@4
  int v9; // r0@10
  __int16 v10; // r1@11
  __int16 v11; // r2@14

  v3 = a1;
  v4 = a2;
  v5 = a3;
  SetCameraPanning(0, *(_WORD *)(a1 + 10));
  v6 = -*(_WORD *)(v3 + 10);
  *(_WORD *)(v3 + 10) = v6;
  v7 = *(_WORD *)(v3 + 12) + 1;
  *(_WORD *)(v3 + 12) = v7;
  if ( v7 > 17 )
  {
    if ( !(v7 & 4) && v6 << 16 > 0 )
    {
      v8 = v6 << 16 >> 17;
      goto _0808732E;
    }
  }
  else if ( !(v7 & 1) && (signed __int16)v6 <= 3 )
  {
    LOWORD(v8) = 2 * v6;
_0808732E:
    *(_WORD *)(v3 + 10) = v8;
    goto _08087330;
  }
_08087330:
  if ( (signed int)*(_WORD *)(v3 + 12) > 6 )
  {
    v9 = *(_WORD *)(v5 + 34) + *(_BYTE *)(v5 + 41) + gSpriteCoordOffsetY + (signed __int16)(-2 * *(_BYTE *)(v5 + 41));
    if ( (unsigned __int8)((*(_WORD *)(v5 + 38) + v9 < 0) ^ __OFADD__(*(_WORD *)(v5 + 38), v9)) | (*(_WORD *)(v5 + 38)
                                                                                                 + v9 == 0) )
    {
      *(_WORD *)(v3 + 16) = 1;
    }
    else
    {
      v10 = *(_WORD *)(v3 + 14);
      *(_WORD *)(v5 + 38) -= v10;
      if ( v10 <= 7 )
        *(_WORD *)(v3 + 14) = v10 + 1;
    }
  }
  v11 = *(_WORD *)(v3 + 18);
  if ( !*(_WORD *)(v3 + 18) && (signed int)*(_WORD *)(v5 + 38) < -16 )
  {
    *(_WORD *)(v3 + 18) = 1;
    *(_BYTE *)(v4 + 3) |= 4u;
    *(_BYTE *)(v5 + 5) = *(_BYTE *)(v5 + 5) & 0xF3 | 4;
    *(_BYTE *)(v5 + 66) = *(_BYTE *)(v5 + 66) & 0x3F | 0x80;
  }
  if ( !*(_WORD *)(v3 + 10) && *(_WORD *)(v3 + 16) )
    ++*(_WORD *)(v3 + 8);
  return 0;
}
