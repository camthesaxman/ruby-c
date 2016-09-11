int __fastcall sub_8047978(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // r0@2
  unsigned int *v4; // r1@2

  v1 = a1;
  if ( battle_side_get_owner(a1) << 24 )
  {
    v3 = 25 * *(_WORD *)(2 * v1 + 0x2024A6A);
    v4 = (unsigned int *)&unk_30045C0;
  }
  else
  {
    v3 = 25 * *(_WORD *)(2 * v1 + 0x2024A6A);
    v4 = dword_3004360;
  }
  return (unsigned __int16)GetMonData((int)&v4[v3], 38, v2);
}
