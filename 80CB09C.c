int __fastcall sub_80CB09C(int a1)
{
  int v1; // r6@1
  signed int v2; // r7@1
  __int16 v3; // r5@1
  __int16 v4; // r4@1
  __int16 v5; // r0@1
  __int16 v6; // r0@7
  int v7; // r1@10
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = *(_WORD *)(a1 + 46);
  v4 = *(_WORD *)(a1 + 60);
  *(_WORD *)(a1 + 46) = 1;
  sub_8078718(a1);
  v5 = *(_WORD *)(v1 + 60);
  *(_WORD *)(v1 + 46) = v3;
  if ( v4 <= 200 || v5 > 55 )
  {
_080CB0CE:
    if ( !*(_WORD *)(v1 + 6) )
      goto _080CB106;
    goto _080CB0D4;
  }
  if ( !*(_WORD *)(v1 + 6) )
  {
    *(_WORD *)(v1 + 6) = 1;
    goto _080CB0CE;
  }
_080CB0D4:
  if ( *(_WORD *)(v1 + 46) )
  {
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
    v6 = *(_WORD *)(v1 + 6) + 1;
    *(_WORD *)(v1 + 6) = v6;
    if ( v6 == 30 )
      v2 = 1;
  }
_080CB106:
  if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 16) > 0x110
    || (v7 = *(_WORD *)(v1 + 34) + *(_WORD *)(v1 + 38), v7 > 160)
    || v7 < -16 )
  {
    v2 = 1;
  }
  if ( v2 )
    move_anim_8072740(v1);
  return v9;
}
