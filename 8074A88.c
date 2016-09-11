int UpdateBlendRegisters()
{
  int v1; // [sp+0h] [bp-4h]@0

  v4000050 = v202F388;
  v4000054 = (unsigned int)v202F38C << 21 >> 27;
  if ( v202F391 & 8 )
  {
    v202F391 &= 0xF4u;
    v202F388 = 0;
    v202F38C &= 0xF83Fu;
    v202F38F &= 0x7Fu;
  }
  return v1;
}
