int sub_80804F8()
{
  int v1; // [sp+10h] [bp-4h]@0

  sub_807F52C();
  ++v202FF0E;
  if ( v202FF0E > (unsigned int)(unsigned __int8)gUnknown_0839AC68[v202FF10] )
  {
    v202FF0E = 0;
    ++v202FF10;
    if ( v202FF10 > 7u )
      v202FF10 = 0;
    sub_8080588(v202FF12);
    ++v202FF12;
    if ( v202FF12 > 0xCu )
      v202FF12 = 0;
  }
  return v1;
}
