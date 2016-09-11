int __fastcall sub_803A2C4(unsigned __int8 a1)
{
  int v1; // r8@1
  char v2; // r9@1
  int v3; // r0@1
  int v5; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = v2024A60;
  v3 = LOWORD(dword_3004B20[10 * a1 + 2]);
  v2024A60 = v3;
  if ( battle_type_is_double(v3) << 24 && !(v20239F8 & 0x40) )
  {
    *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
    sub_8039430(v2024A60, 0);
    v2024A60 ^= 2u;
    *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
    sub_8039430(v2024A60, 0);
    v2024A60 ^= 2u;
  }
  else
  {
    *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
    sub_8039430(v2024A60, 0);
  }
  dword_3004330[v2024A60] = (int)sub_8037840;
  v2024A60 = v2;
  DestroyTask(v1);
  return v5;
}
