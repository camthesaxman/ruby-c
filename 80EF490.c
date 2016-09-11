int __fastcall sub_80EF490(unsigned __int8 a1)
{
  signed int v1; // r2@1
  unsigned int v2; // r0@3
  signed __int16 v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( a1 == 2 )
    v1 = 1;
  v200CE4E = 30 * v1;
  v2 = 30 * v1 & 0xFFFF;
  if ( v200CE4C >= v2 )
  {
    if ( v200CE4C <= v2 )
      v3 = 0;
    else
      v3 = -2;
  }
  else
  {
    v3 = 2;
  }
  v200CE50 = v3;
  return v5;
}
