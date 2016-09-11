int atkBE_breakfree()
{
  int v0; // r1@1
  void *v1; // r0@2
  int v2; // r1@3
  int v3; // r0@6
  int v5; // [sp+8h] [bp-4h]@0

  v0 = *(_DWORD *)(88 * v2024C07 + 0x2024AD0);
  if ( v0 & 0xE000 )
  {
    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) = v0 & 0xFFFF1FFF;
    v2024C08 = *(_BYTE *)(v2024C07 + 0x2016020);
    byte_30041C0[0] = -3;
    byte_30041C1 = 2;
    LOBYTE(word_30041C2) = *(_BYTE *)(2 * v2024C07 + 0x2016004);
    HIBYTE(word_30041C2) = *(_BYTE *)(2 * v2024C07 + 0x2016005);
    byte_30041C4 = -1;
    b_movescr_stack_push_cursor();
    v1 = &gUnknown_081D92C2;
  }
  else
  {
    v2 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    if ( v2 & 4 )
    {
      *(_DWORD *)(4 * v2024C07 + 0x2024C98) = v2 & 0xFFFFFFFB;
      *(_DWORD *)(4 * v2024C07 + 0x2024C98) &= 0xFFFFFFFC;
      b_movescr_stack_push_cursor();
      v1 = &gUnknown_081D92C9;
    }
    else if ( *(_WORD *)((2 * battle_side_get_owner(v2024C07) & 0x1FF) + 0x2024C7A) & 0x10 )
    {
      v3 = battle_side_get_owner(v2024C07);
      *(_WORD *)((2 * v3 & 0x1FF) + 0x2024C7A) &= 0xFFEFu;
      *(_BYTE *)(12 * (unsigned __int8)battle_side_get_owner(v2024C07) + 0x2024C86) = 0;
      b_movescr_stack_push_cursor();
      v1 = &gUnknown_081D92D0;
    }
    else
    {
      v1 = (void *)(v2024C10 + 1);
    }
  }
  v2024C10 = v1;
  return v5;
}
