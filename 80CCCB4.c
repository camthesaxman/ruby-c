int __fastcall sub_80CCCB4(int a1)
{
  int v1; // r4@1
  char *v2; // r1@2
  char v3; // r0@2
  int v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 46), 100);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 46), 20);
  if ( (signed int)*(_WORD *)(v1 + 46) > 127 )
  {
    v2 = (char *)(v1 + 67);
    v3 = 14;
  }
  else
  {
    v2 = (char *)(v1 + 67);
    v3 = 0;
  }
  *v2 = v3;
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 46)) & 0xFF;
  v4 = *(_WORD *)(v1 + 56) + 130;
  *(_WORD *)(v1 + 56) = v4;
  *(_WORD *)(v1 + 38) += v4 << 16 >> 24;
  LOWORD(v4) = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v4;
  if ( (signed __int16)v4 == *(_WORD *)(v1 + 52) )
    move_anim_8072740(v1);
  return v6;
}
