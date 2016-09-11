int sub_8013C9C()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( ((v2024A7F - 11) & 0xFFu) > 1 )
  {
    if ( !v2024A64 )
      call_via_r0(*(&gUnknown_081FA73C + *v2024C10));
  }
  else
  {
    if ( !(v20239F8 & 0xB92) )
    {
      v2024A60 = 0;
      if ( v2024A68 > 0u )
      {
        do
        {
          if ( !(battle_side_get_owner(v2024A60) << 24) )
          {
            if ( word_30042E6 )
            {
              word_3004306 = *(_WORD *)(88 * v2024A60 + 0x2024A80);
              StringCopy(&byte_30042F4, (_BYTE *)(88 * v2024A60 + 33704624));
            }
            else
            {
              word_30042E6 = *(_WORD *)(88 * v2024A60 + 0x2024A80);
              StringCopy(byte_30042E8, (_BYTE *)(88 * v2024A60 + 33704624));
            }
          }
          ++v2024A60;
        }
        while ( v2024A60 < (unsigned int)v2024A68 );
      }
      sub_80BDEC8();
    }
    BeginFastPaletteFade(3);
    sub_8074D28(5);
    dword_30042D4 = (int)sub_8013DA8;
    dword_3005E94 = (int)sub_800F808;
  }
  return v1;
}
