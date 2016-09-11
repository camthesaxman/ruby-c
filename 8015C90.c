signed int sub_8015C90()
{
  int v0; // r6@1
  int v1; // r0@3
  int v2; // r4@3
  char v3; // r0@3
  char v4; // r0@3
  _BYTE *v5; // r1@3
  int v6; // r0@4
  signed int result; // r0@6

  v0 = (unsigned __int8)sub_8015A98(v2024A60, 0, 255);
  if ( v0 == 15 )
  {
    *(_BYTE *)(16 * v2024A60 + 0x2024D28) |= 4u;
    *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D9365;
    if ( v20239F8 & 1 )
    {
      v1 = battle_get_per_side_status(v2024A60);
      v2 = v1;
      v3 = Random(v1);
      v4 = battle_get_side_with_given_state((v2 ^ 1 | v3 & 2) & 0xFF);
      v5 = (_BYTE *)((v2024A60 << 9) + 33702499);
    }
    else
    {
      v6 = battle_get_per_side_status(v2024A60);
      v4 = battle_get_side_with_given_state((v6 ^ 1) & 0xFF);
      v5 = (_BYTE *)((v2024A60 << 9) + 33702499);
    }
  }
  else
  {
    v5 = (_BYTE *)(16 * v2024A60 + 33705256);
    v4 = *(_BYTE *)(16 * v2024A60 + 0x2024D28) & 0xFB;
  }
  *v5 = v4;
  result = 0;
  if ( v0 == 15 )
    result = 1;
  return result;
}
