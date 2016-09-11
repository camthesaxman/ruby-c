int sub_80214B4()
{
  int v0; // r0@1
  int v1; // r0@6
  int v3; // [sp+10h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v0 = *(_BYTE *)(*(_BYTE *)(v2024C10 + 2)
                + (*(_BYTE *)(v2024C10 + 3) << 8)
                + (*(_BYTE *)(v2024C10 + 4) << 16)
                + (*(_BYTE *)(v2024C10 + 5) << 24));
  if ( v0 != 1 && v0 != 17 && v0 != 2 )
  {
    if ( v2024C6C & 0x80 )
    {
      v1 = v2024C10;
    }
    else if ( ((*(_BYTE *)(*(_BYTE *)(v2024C10 + 2)
                         + (*(_BYTE *)(v2024C10 + 3) << 8)
                         + (*(_BYTE *)(v2024C10 + 4) << 16)
                         + (*(_BYTE *)(v2024C10 + 5) << 24))
              - 10) & 0xFFu) > 3
           && *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400C0 )
    {
      v1 = v2024C10;
    }
    else
    {
      dp01_build_cmdbuf_x34_a_bb_aka_battle_anim(
        0,
        *(_BYTE *)(*(_BYTE *)(v2024C10 + 2)
                 + (*(_BYTE *)(v2024C10 + 3) << 8)
                 + (*(_BYTE *)(v2024C10 + 4) << 16)
                 + (*(_BYTE *)(v2024C10 + 5) << 24)),
        *(_WORD *)(*(_BYTE *)(v2024C10 + 6)
                 + (*(_BYTE *)(v2024C10 + 7) << 8)
                 + (*(_BYTE *)(v2024C10 + 8) << 16)
                 + (*(_BYTE *)(v2024C10 + 9) << 24)));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v1 = v2024C10;
    }
    v2024C10 = v1 + 10;
  }
  else
  {
    dp01_build_cmdbuf_x34_a_bb_aka_battle_anim(
      0,
      *(_BYTE *)(*(_BYTE *)(v2024C10 + 2)
               + (*(_BYTE *)(v2024C10 + 3) << 8)
               + (*(_BYTE *)(v2024C10 + 4) << 16)
               + (*(_BYTE *)(v2024C10 + 5) << 24)),
      *(_WORD *)(*(_BYTE *)(v2024C10 + 6)
               + (*(_BYTE *)(v2024C10 + 7) << 8)
               + (*(_BYTE *)(v2024C10 + 8) << 16)
               + (*(_BYTE *)(v2024C10 + 9) << 24)));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 10;
  }
  return v3;
}
