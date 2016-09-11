signed int sub_80C5DCC()
{
  int v0; // r1@3
  __int16 v1; // r0@4
  signed int result; // r0@5

  if ( !*(_WORD *)(v20387EC + 8) )
  {
    BlendPalettes(*(_DWORD *)(v20387EC + 16), 0x10u, -1);
    sub_80C61B0(sub_80C603C);
    ++*(_WORD *)(v20387EC + 8);
  }
  v0 = v20387EC;
  if ( (unsigned int)*(_WORD *)(v20387EC + 10) > 7
    && (v1 = *(_WORD *)(v20387EC + 6) + *(_WORD *)(v20387EC + 12), *(_WORD *)(v20387EC + 12) = v1, v1 > 79) )
  {
    *(_WORD *)(v0 + 12) = 80;
    v4000050 = 0;
    v4000054 = 0;
    ClearGpuRegBits();
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
