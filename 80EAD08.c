int sub_80EAD08()
{
  __int16 *v0; // r4@1
  int v1; // r2@1
  unsigned int v2; // r3@1
  int v4; // [sp+8h] [bp-4h]@0

  v0 = &word_3004DE0[960 * (unsigned __int8)byte_3004DD4 + 88];
  v1 = (v20011BA - 88) & 0xFF;
  v2 = 0;
  do
  {
    if ( v20011BA + v2 == 128 )
      v1 = (-v2 - 88) & 0xFF;
    *v0 = v1;
    ++v0;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x3F );
  return v4;
}
