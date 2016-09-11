int __fastcall sub_812EEEC(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  char v3; // r0@3
  int v4; // r2@5
  __int16 v5; // r0@6
  __int16 v6; // r0@9
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 48), *(_WORD *)(a1 + 50) << 16 >> 24);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 52) << 16 >> 24);
  v2 = (*(_WORD *)(v1 + 48) + 9) & 0xFF;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 0x3F && (signed __int16)v2 <= 195 )
    v3 = sub_8079E90(v202F7C8) + 1;
  else
    v3 = sub_8079E90(v202F7C8) - 1;
  *(_BYTE *)(v1 + 67) = v3;
  v4 = *(_WORD *)(v1 + 56);
  if ( *(_WORD *)(v1 + 56) )
  {
    if ( v4 == 1 )
    {
      *(_WORD *)(v1 + 50) -= 1024;
      *(_WORD *)(v1 + 52) -= 256;
      v6 = *(_WORD *)(v1 + 54) + 1;
      *(_WORD *)(v1 + 54) = v6;
      if ( v6 == *(_WORD *)(v1 + 46) )
        move_anim_8072740(v1);
    }
  }
  else
  {
    *(_WORD *)(v1 + 50) += 1024;
    *(_WORD *)(v1 + 52) += 256;
    v5 = *(_WORD *)(v1 + 54) + 1;
    *(_WORD *)(v1 + 54) = v5;
    if ( v5 == *(_WORD *)(v1 + 46) )
    {
      *(_WORD *)(v1 + 54) = v4;
      *(_WORD *)(v1 + 56) = 1;
    }
  }
  return v8;
}
