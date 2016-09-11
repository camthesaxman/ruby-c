int sub_8013DA8()
{
  int *v0; // r1@4
  int (*v1)(); // r0@4
  int v3; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    ResetSpriteData();
    if ( byte_3004324 && v2024D26 == 1 )
    {
      v0 = &dword_30042D4;
      v1 = bc_evolution_cutscene;
    }
    else
    {
      v0 = &dword_30042D4;
      v1 = c4_overworld;
    }
    *v0 = (int)v1;
  }
  return v3;
}
