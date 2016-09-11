signed int __fastcall sub_807B094(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@8

  v1 = a1;
  if ( a1 < (unsigned int)v2024A68 )
  {
    if ( battle_side_get_owner(a1) << 24 )
    {
      if ( *(_BYTE *)(4 * v1 + 0x2017800) & 4 )
        sub_8032350(v1, 0);
      else
        sub_8031794((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), v1);
    }
    else
    {
      if ( !(v20239F8 & 0x80) || v1 )
      {
        if ( !(v20239F8 & 0x200) || v1 )
        {
          if ( *(_BYTE *)(4 * v1 + 0x2017800) & 4 )
            sub_8032350(v1, 0);
          else
            sub_80318FC((int)&dword_3004360[25 * *(_WORD *)(2 * v1 + 0x2024A6A)], v1);
          goto _0807B168;
        }
        v2 = 2;
      }
      else
      {
        v2 = v2024EAC;
      }
      sub_8031AF4(v2, 0);
    }
_0807B168:
    v201FFFE = 0;
  }
  return 1;
}
