int __fastcall sub_80CE000(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  unsigned int v3; // r0@2
  __int16 v4; // r0@3
  __int16 v5; // r0@5
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 48) )
  {
    v3 = (unsigned __int8)(*(_BYTE *)(v1 + 62) & 0xFB) | 4 * ((((unsigned int)*(_BYTE *)(v1 + 62) >> 2) ^ 1) & 1);
    *(_BYTE *)(v1 + 62) = v3;
    if ( !(v3 & 4) )
    {
      v4 = *(_WORD *)(v1 + 54) + 1;
      *(_WORD *)(v1 + 54) = v4;
      if ( !(v4 & 1) )
        audio_play_and_stuff(0xC2u, *(_WORD *)(v1 + 56));
    }
    *(_WORD *)(v1 + 46) = 0;
    v5 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v5;
    if ( v5 > 1 )
    {
      *(_WORD *)(v1 + 50) = 0;
      ++*(_WORD *)(v1 + 48);
    }
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 && (signed int)*(_WORD *)(v1 + 48) > 16 && *(_BYTE *)(v1 + 62) & 4 )
    move_anim_8072740(v1);
  return v7;
}
