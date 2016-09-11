int sub_8036B0C()
{
  signed int v0; // r4@4
  unsigned int v1; // r0@6
  int v2; // r5@6
  unsigned int v3; // r6@6
  int v5; // [sp+Ch] [bp-4h]@0

  if ( !(v20239F8 & 8) )
    goto _08036C2E;
  if ( !(sub_8036904() << 24) )
  {
    if ( sub_803708C() << 24 )
      return v5;
_08036C2E:
    dp01_build_cmdbuf_x21_a_bb(1u, 0, (v2024A60 ^ 1) << 8);
    return v5;
  }
  if ( *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) == 6 )
  {
    LOBYTE(v0) = sub_8036CD4();
    if ( (unsigned __int8)v0 == 6 )
    {
      if ( v20239F8 & 1 )
      {
        v3 = (unsigned __int8)battle_get_side_with_given_state(1);
        v2 = battle_get_side_with_given_state(3) & 0xFF;
      }
      else
      {
        v1 = battle_get_side_with_given_state(1) << 24;
        v2 = v1 >> 24;
        v3 = v1 >> 24;
      }
      v0 = 0;
      do
      {
        if ( GetMonData((char *)&unk_30045C0 + 100 * v0, 57)
          && v0 != *(_WORD *)(2 * v3 + 0x2024A6A)
          && v0 != *(_WORD *)(2 * v2 + 0x2024A6A)
          && v0 != *(_BYTE *)(v3 + 33644648)
          && v0 != *(_BYTE *)(v2 + 33644648) )
        {
          break;
        }
        ++v0;
      }
      while ( v0 <= 5 );
    }
    *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) = v0;
  }
  *(_BYTE *)(v2024A60 + 0x2016068) = *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25)
                                              + 0x20160C8);
  return v5;
}
