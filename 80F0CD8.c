int sub_80F0CD8()
{
  _BYTE *v0; // r2@1
  int v1; // r1@1
  int i; // r3@2
  int v4; // [sp+8h] [bp-4h]@0

  v2000306 = 0;
  v200D15C = 0;
  v200D110 = gTrainerEyeDescriptions[*(_BYTE *)(8 * v200876E + 0x200CEEC)];
  v0 = (_BYTE *)v200D110;
  v1 = 0;
  do
  {
    for ( i = v1 + 1; *v0 != 255; ++v0 )
      ;
    *(_DWORD *)(4 * i + 0x200D110) = ++v0;
    v1 = (unsigned __int16)i;
  }
  while ( (unsigned __int16)i <= 2u );
  return v4;
}
