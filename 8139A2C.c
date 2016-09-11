int __fastcall sub_8139A2C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r1@1
  char v3; // r5@3
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 5) > 30 )
  {
    v3 = v2024A60;
    v2024A60 = *((_WORD *)v2 + 4);
    *(_BYTE *)((v2024A60 << 9) + 0x2023A61) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
    sub_81398BC(v2024A60);
    dword_3004330[v2024A60] = (int)sub_8137538;
    v2024A60 = v3;
    DestroyTask(v1);
  }
  else
  {
    ++*((_WORD *)v2 + 5);
  }
  return v5;
}
