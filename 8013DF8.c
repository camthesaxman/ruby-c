int bc_evolution_cutscene()
{
  char *v0; // r3@1
  signed int v1; // r5@2
  int v2; // r1@3
  int v3; // r2@4
  int v5; // [sp+8h] [bp-4h]@0

  v0 = &byte_3004324;
  while ( byte_3004324 )
  {
    v1 = 0;
    do
    {
      v2 = gBitTable[v1];
      if ( (unsigned __int8)*v0 & (unsigned __int8)v2 )
      {
        *v0 &= ~(_BYTE)v2;
        v3 = GetEvolutionTargetSpecies((char *)&unk_3004360 + 100 * v1, 0) & 0xFFFF;
        if ( v3 )
        {
          dword_30042D4 = (int)sub_8013E88;
          evolution_cutscene((char *)&unk_3004360 + 100 * v1, v3, 129, (unsigned __int8)v1);
          return v5;
        }
      }
      ++v1;
      v0 = &byte_3004324;
    }
    while ( v1 <= 5 );
  }
  dword_30042D4 = (int)c4_overworld;
  return v5;
}
