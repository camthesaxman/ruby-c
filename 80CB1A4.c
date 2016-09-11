int __fastcall sub_80CB1A4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v3; // r0@1
  __int16 v4; // r3@5
  __int16 v5; // r2@5
  char v6; // r0@8
  int v7; // r0@10
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  v3 = *(_WORD *)(a1 + 48);
  if ( v3 == 255 )
  {
    *(_WORD *)(v1 + 34) -= 2;
  }
  else if ( v3 > 0 )
  {
    *(_WORD *)(v1 + 34) -= 2;
    *(_WORD *)(v1 + 48) = v2 - 2;
  }
  v4 = *(_WORD *)(v1 + 50);
  v5 = v4 + *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = v5;
  if ( *(_WORD *)(v1 + 46) < (signed int)*(_WORD *)(v1 + 54) )
    *(_WORD *)(v1 + 56) = v5 + v4;
  *(_WORD *)(v1 + 56) &= 0xFFu;
  *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 56), *(_WORD *)(v1 + 52));
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 56), 5);
  if ( (signed int)*(_WORD *)(v1 + 56) > 127 )
    v6 = sub_8079ED4(v202F7C9) + 1;
  else
    v6 = sub_8079ED4(v202F7C9) - 1;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (v6 & 3);
  v7 = *(_WORD *)(v1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v7;
  if ( !(v7 << 16) )
    move_anim_8072740(v1);
  return v9;
}
