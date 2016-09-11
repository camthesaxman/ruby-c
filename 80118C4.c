int bc_801362C()
{
  unsigned __int16 v0; // r0@5
  int v2; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = v2024A64;
    if ( v2024A64 < (unsigned int)v2024A68 )
    {
      do
      {
        if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 && !(v20239F8 & 0x902) )
        {
          v0 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024A60 + 0x2024A80));
          sub_8090D90(v0, 2);
        }
        ++v2024A60;
      }
      while ( v2024A60 < (unsigned int)v2024A68 );
    }
    dword_30042D4 = (int)sub_8011970;
  }
  return v2;
}
