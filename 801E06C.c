int atk0F_resultmessage()
{
  int v0; // r3@1
  int v1; // r0@6
  void *v2; // r0@24
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( !v2024A64 )
  {
    if ( v2024C68 & 1 && (!(v2024C68 & 8) || v2024D24 > 2u) )
    {
      v0 = gUnknown_08401508[v2024D24];
      v2024D25 = 1;
      goto _0801E1F6;
    }
    v2024D25 = 1;
    v1 = v2024C68 & 0xFE;
    if ( v1 == 16 )
    {
      LOWORD(v0) = 218;
      goto _0801E1FA;
    }
    if ( v1 > 16 )
    {
      if ( v1 == 64 )
      {
        LOWORD(v0) = 153;
        goto _0801E1FA;
      }
      if ( v1 > 64 )
      {
        if ( v1 == 128 )
        {
          v2024C04 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
          v2024C0B = v2024C08;
          v2024C68 &= 0x3Fu;
          b_movescr_stack_push_cursor();
          v2 = &gUnknown_081D9AC6;
_0801E20A:
          v2024C10 = v2;
          return v4;
        }
      }
      else if ( v1 == 32 )
      {
        goto _0801E1F0;
      }
    }
    else
    {
      if ( v1 == 4 )
      {
        LOWORD(v0) = 221;
        goto _0801E1FA;
      }
      if ( v1 > 4 )
      {
        if ( v1 == 8 )
        {
_0801E150:
          LOWORD(v0) = 27;
          goto _0801E1FA;
        }
      }
      else if ( v1 == 2 )
      {
        LOWORD(v0) = 222;
        goto _0801E1FA;
      }
    }
    if ( v2024C68 & 8 )
      goto _0801E150;
    if ( v2024C68 & 0x10 )
    {
      v2024C68 &= 0xE9u;
      b_movescr_stack_push_cursor();
      v2 = &gUnknown_081D94A9;
      goto _0801E20A;
    }
    if ( v2024C68 & 0x40 )
    {
      v2024C68 &= 0x3Fu;
      b_movescr_stack_push_cursor();
      v2 = &gUnknown_081D94A2;
      goto _0801E20A;
    }
    if ( v2024C68 & 0x80 )
    {
      v2024C04 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
      v2024C0B = v2024C08;
      v2024C68 &= 0x3Fu;
      b_movescr_stack_push_cursor();
      v2 = &gUnknown_081D9AC6;
      goto _0801E20A;
    }
    if ( !(v2024C68 & 0x20) )
    {
      v2024D25 = 0;
_0801E1F6:
      if ( !v0 )
      {
_0801E204:
        v2 = (void *)(v2024C10 + 1);
        goto _0801E20A;
      }
_0801E1FA:
      b_std_message(v0, v2024C07);
      goto _0801E204;
    }
_0801E1F0:
    LOWORD(v0) = 229;
    goto _0801E1FA;
  }
  return v4;
}
