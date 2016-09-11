int __fastcall sub_8075940(__int16 a1)
{
  int v1; // r2@1
  __int16 *v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = 0;
  v2 = &word_3004B10;
  while ( (unsigned __int16)*v2 != 0xFFFF )
  {
    ++v2;
    if ( ++v1 > 7 )
      return v4;
  }
  *v2 = a1;
  return v4;
}
