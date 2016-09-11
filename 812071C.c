int __fastcall sub_812071C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r8@1
  int *v2; // r1@1
  char v3; // r9@3
  int v5; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 5) > 23 )
  {
    v3 = v2024A60;
    v2024A60 = *((_WORD *)v2 + 4);
    if ( battle_type_is_double() << 24 && !(v20239F8 & 0x40) )
    {
      *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
      sub_811F864(v2024A60, 0);
      v2024A60 ^= 2u;
      *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
      sub_80318FC((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
      sub_811F864(v2024A60, 0);
      v2024A60 ^= 2u;
    }
    else
    {
      *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
      sub_811F864(v2024A60, 0);
    }
    dword_3004330[v2024A60] = (int)sub_811DCA0;
    v2024A60 = v3;
    DestroyTask(v1);
  }
  else
  {
    ++*((_WORD *)v2 + 5);
  }
  return v5;
}
