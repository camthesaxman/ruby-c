int __fastcall sub_80D2704(int a1)
{
  int v1; // r4@1
  char v2; // r0@2
  int v3; // r2@4
  __int16 v4; // r0@6
  __int16 v5; // r0@8
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( ((*(_WORD *)(a1 + 48) - 64) & 0xFFFFu) > 0x7F )
    v2 = *(_WORD *)(a1 + 60) - 1;
  else
    v2 = *(_WORD *)(a1 + 60) + 1;
  *(_BYTE *)(v1 + 67) = v2;
  *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 50) << 16 >> 24);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 52) << 16 >> 24);
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 9) & 0xFF;
  v3 = *(_WORD *)(v1 + 56);
  if ( *(_WORD *)(v1 + 56) )
  {
    if ( v3 == 1 )
    {
      *(_WORD *)(v1 + 50) -= 1024;
      *(_WORD *)(v1 + 52) -= 256;
      v4 = *(_WORD *)(v1 + 54) + 1;
      *(_WORD *)(v1 + 54) = v4;
      if ( v4 == *(_WORD *)(v1 + 46) )
      {
        *(_WORD *)(v1 + 56) = 2;
        return v7;
      }
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
      *(_WORD *)(v1 + 54) = v3;
      *(_WORD *)(v1 + 56) = 1;
    }
  }
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
    move_anim_8072740(v1);
  return v7;
}
