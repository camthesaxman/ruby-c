int sub_80355C0()
{
  signed int i; // r4@2
  unsigned int v1; // r0@4
  int v2; // r5@4
  unsigned int v3; // r6@4
  int v5; // [sp+Ch] [bp-4h]@0

  if ( *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) == 6 )
  {
    LOBYTE(i) = sub_8036CD4();
    if ( (unsigned __int8)i == 6 )
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
      for ( i = 0;
            i <= 5
         && (!GetMonData((char *)&unk_30045C0 + 100 * i, 57)
          || i == *(_WORD *)(2 * v3 + 0x2024A6A)
          || i == *(_WORD *)(2 * v2 + 0x2024A6A));
            ++i )
      {
        ;
      }
    }
  }
  else
  {
    LOBYTE(i) = *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8);
    *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) = 6;
  }
  *(_BYTE *)(v2024A60 + 0x2016068) = i;
  dp01_build_cmdbuf_x22_a_three_bytes(1u, i, 0);
  sub_80334EC();
  return v5;
}
