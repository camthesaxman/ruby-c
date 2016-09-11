int c2_overworld()
{
  unsigned int v0; // r4@1
  int v1; // r0@3
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (unsigned int)v202F38F >> 7;
  if ( v0 )
    SetVBlankCallback(0);
  v1 = c2_overworld_basic();
  if ( v0 )
    SetFieldVBlankCallback(v1);
  return v3;
}
