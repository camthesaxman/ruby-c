int sub_8013B64()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024A7F = 0;
  if ( v20239F8 & 2 )
  {
    byte_30041C0[0] = v2024D26;
    v2024C07 = battle_get_side_with_given_state(0);
    v2024C10 = &gUnknown_081D8E02;
    v2024D26 &= 0x7Fu;
  }
  else
  {
    v2024C10 = &gUnknown_081D8DD1;
  }
  dword_30042D4 = (int)sub_8013C9C;
  return v1;
}
