int __fastcall sub_801E3B4(unsigned __int8 a1)
{
  signed int v1; // r1@1

  v1 = 0;
  if ( (signed int)v2024A68 > 0 && v2024A7A != a1 )
  {
    do
      ++v1;
    while ( v1 < v2024A68 && *(_BYTE *)(v1 + 33704570) != a1 );
  }
  return (unsigned __int8)v1;
}
