int __fastcall sub_80DC700(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  char v3; // r0@12
  __int16 v4; // r0@14
  __int16 v5; // r1@15
  int v6; // r2@17
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    if ( *(_BYTE *)(v1 + 63) & 0x20 )
    {
      v3 = sub_8076F98(0xC0u);
      audio_play_and_stuff(0xCBu, v3);
      ChangeSpriteAffineAnim(v1, 1);
_080DC7A2:
      ++*(_WORD *)(v1 + 46);
      return v8;
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( v2 )
        return v8;
      *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
      *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
      if ( sub_8076BE0() << 24 )
        *(_WORD *)(v1 + 34) += 12;
      *(_WORD *)(v1 + 48) = 8;
      v4000050 = 16192;
      v4000052 = ((16 - *(_WORD *)(v1 + 48)) << 8) | *(_WORD *)(v1 + 48);
      goto _080DC7A2;
    }
    if ( v2 == 2 )
    {
      v4 = *(_WORD *)(v1 + 50);
      *(_WORD *)(v1 + 50) = v4 + 1;
      if ( v4 > 1 )
      {
        *(_WORD *)(v1 + 50) = 0;
        v5 = *(_WORD *)(v1 + 48) - 1;
        *(_WORD *)(v1 + 48) = v5;
        v4000052 = v5 | ((16 - v5) << 8);
        if ( !*(_WORD *)(v1 + 48) )
        {
          ++*(_WORD *)(v1 + 46);
          *(_BYTE *)(v1 + 62) |= 4u;
        }
      }
      v6 = *(_WORD *)(v1 + 52) + 896;
      *(_WORD *)(v1 + 38) -= v6 << 16 >> 24;
      *(_WORD *)(v1 + 52) = (unsigned __int8)v6;
    }
    else if ( v2 == 3 )
    {
      v4000050 = 0;
      v4000052 = 0;
      move_anim_8072740(v1);
    }
  }
  return v8;
}
