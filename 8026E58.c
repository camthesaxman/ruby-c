int atk94_gethalfcurrentenemyhp()
{
  int v1; // [sp+0h] [bp-4h]@0

  v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C08 + 0x2024AA8) >> 1;
  if ( !v2024BEC )
    v2024BEC = 1;
  ++v2024C10;
  return v1;
}
