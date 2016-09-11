unsigned int __fastcall battle_get_side_with_given_state(unsigned __int8 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  if ( v2024A68 > 0u && v2024A72 != a1 )
  {
    do
      v1 = (v1 + 1) & 0xFF;
    while ( v1 < v2024A68 && *(_BYTE *)(v1 + 33704562) != a1 );
  }
  return v1;
}
