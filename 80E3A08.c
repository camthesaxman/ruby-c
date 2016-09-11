int __fastcall sub_80E3A08(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r2@1
  signed int v3; // r2@5
  __int16 *v4; // r1@5
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  v2 = 0;
  do
  {
    if ( v202F7C8 != v2 )
      v1 |= 1 << (v2 + 16);
    ++v2;
  }
  while ( v2 <= 3 );
  v3 = 5;
  v4 = &word_3004B08;
  do
  {
    v4[1] = *v4;
    --v4;
    --v3;
  }
  while ( v3 );
  sub_80E2C8C(a1, v1);
  return v6;
}
