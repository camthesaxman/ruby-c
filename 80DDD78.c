int __fastcall sub_80DDD78(int a1)
{
  int v1; // r4@1
  char v2; // r1@2
  char v3; // r0@2
  int v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), 32);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 46), 8);
  if ( ((*(_WORD *)(v1 + 46) - 65) & 0xFFFFu) > 0x82 )
  {
    v2 = *(_BYTE *)(v1 + 5) & 0xF3;
    v3 = 4;
  }
  else
  {
    v2 = *(_BYTE *)(v1 + 5) & 0xF3;
    v3 = 8;
  }
  *(_BYTE *)(v1 + 5) = v2 | v3;
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 46) + 19) & 0xFF;
  v4 = *(_WORD *)(v1 + 50) + 80;
  *(_WORD *)(v1 + 50) = v4;
  *(_WORD *)(v1 + 38) += v4 << 16 >> 24;
  LOWORD(v4) = *(_WORD *)(v1 + 60) + 1;
  *(_WORD *)(v1 + 60) = v4;
  if ( (signed __int16)v4 == 61 )
    move_anim_8072740(v1);
  return v6;
}
