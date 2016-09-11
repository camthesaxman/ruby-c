int sub_800B950()
{
  int v0; // r0@2
  signed int i; // r4@5
  int v3; // [sp+8h] [bp-4h]@0

  if ( v20239F8 & 2 )
    v0 = sub_800BA78();
  else
    v0 = sub_800B9A8();
  sub_800BD54(v0);
  if ( !(v20239F8 & 0x40) )
  {
    for ( i = 0; i < v2024A68; ++i )
      sub_8094978((unsigned __int8)i, 0);
  }
  return v3;
}
