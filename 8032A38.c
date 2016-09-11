int sub_8032A38()
{
  _WORD *v0; // r3@1
  int v1; // r0@1
  int v2; // r5@2
  signed int v3; // r4@2
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = (_WORD *)100663872;
  v1 = 0;
  do
  {
    v2 = v1 + 1;
    v3 = 15;
    do
    {
      if ( !(*v0 & 0xF000) )
        *v0 |= 0xF000u;
      if ( !(*v0 & 0xF00) )
        *v0 |= 0xF00u;
      if ( !(*v0 & 0xF0) )
        *v0 |= 0xF0u;
      if ( !(*v0 & 0xF) )
        *v0 |= 0xFu;
      ++v0;
      --v3;
    }
    while ( v3 >= 0 );
    ++v1;
  }
  while ( v2 <= 8 );
  return v5;
}
