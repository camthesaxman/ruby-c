int __fastcall sub_806E168(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r3@2
  int v4; // r1@4
  unsigned int v5; // r3@4
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_806B528();
  if ( v2 == 1 )
    v3 = 2;
  else
    v3 = battle_type_is_double(v2) & 0xFF;
  v4 = 2
     * (((*(&gUnknown_08376738[24 * v3] + 4 * v1) - 1) & 0xFF)
      + (32 * (*(&gUnknown_08376738[24 * v3 + 1] + 4 * v1) + 1) & 0x1FFF))
     + 100724736;
  v5 = 0;
  do
  {
    *(_WORD *)(2 * v5 + v4) = 0;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 3 );
  return v7;
}
