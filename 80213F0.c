int atk46_cmd46()
{
  int v0; // r0@1
  void *v1; // r0@6
  int v3; // [sp+Ch] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v0 = *(_BYTE *)(v2024C10 + 2);
  if ( v0 != 1 && v0 != 17 && v0 != 2 )
  {
    if ( v2024C6C & 0x80 )
    {
      b_movescr_stack_push(v2024C10 + 7);
      v1 = &gUnknown_081D8EEF;
    }
    else if ( ((*(_BYTE *)(v2024C10 + 2) - 10) & 0xFFu) > 3 && *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400C0 )
    {
      v1 = (void *)(v2024C10 + 7);
    }
    else
    {
      dp01_build_cmdbuf_x34_a_bb_aka_battle_anim(
        0,
        *(_BYTE *)(v2024C10 + 2),
        *(_WORD *)(*(_BYTE *)(v2024C10 + 3)
                 + (*(_BYTE *)(v2024C10 + 4) << 8)
                 + (*(_BYTE *)(v2024C10 + 5) << 16)
                 + (*(_BYTE *)(v2024C10 + 6) << 24)));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v1 = (void *)(v2024C10 + 7);
    }
    v2024C10 = v1;
  }
  else
  {
    dp01_build_cmdbuf_x34_a_bb_aka_battle_anim(
      0,
      *(_BYTE *)(v2024C10 + 2),
      *(_WORD *)(*(_BYTE *)(v2024C10 + 3)
               + (*(_BYTE *)(v2024C10 + 4) << 8)
               + (*(_BYTE *)(v2024C10 + 5) << 16)
               + (*(_BYTE *)(v2024C10 + 6) << 24)));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 7;
  }
  return v3;
}
