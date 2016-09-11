int __fastcall sub_8131EB8(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  char v3; // r0@5
  __int16 v4; // r2@9
  int v5; // r2@12
  int v6; // r1@12
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 60);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 46));
      v4 = *(_WORD *)(v1 + 48);
      *(_WORD *)(v1 + 48) = v4 + 5;
      if ( (signed __int16)(v4 + 5) > 127 )
      {
        *(_WORD *)(v1 + 46) /= 2;
        ++*(_WORD *)(v1 + 52);
        *(_WORD *)(v1 + 48) = v4 - 122;
      }
      *(_WORD *)(v1 + 50) += 256;
      if ( battle_side_get_owner(v202F7C8) << 24 )
      {
        v6 = *(_WORD *)(v1 + 50);
        *(_WORD *)(v1 + 36) += v6 << 16 >> 24;
      }
      else
      {
        v5 = *(_WORD *)(v1 + 50);
        *(_WORD *)(v1 + 36) -= v5 << 16 >> 24;
        LOBYTE(v6) = v5;
      }
      *(_WORD *)(v1 + 50) = (unsigned __int8)v6;
      if ( *(_WORD *)(v1 + 52) == 2 )
        move_anim_8072740(v1);
    }
  }
  else if ( word_3004B0E == -1 )
  {
    v3 = sub_8076F98(0x3Fu);
    audio_play_and_stuff(0x7Au, v3);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + 16;
    *(_WORD *)(v1 + 46) = -32;
    ++*(_WORD *)(v1 + 60);
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 && !(sub_8076BE0() << 24) )
      *(_BYTE *)(v1 + 67) = gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(1) + 67] - 1;
  }
  else
  {
    *(_BYTE *)(v1 + 62) |= 4u;
  }
  return v8;
}
