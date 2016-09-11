int sub_8100A7C()
{
  unsigned int v0; // r1@5
  int v1; // r2@6
  int v3; // [sp+Ch] [bp-4h]@0

  v202E8CE = 0;
  v202E8DC = 0;
  if ( v202E8CC == v2039234 )
  {
    v202E8DC = 1;
  }
  else if ( *((_BYTE *)&gDecorations + 32 * *(_BYTE *)(v201F000 + *(_BYTE *)(8 * v202E8CC + 0x20391B4)) + 17) == 4 )
  {
    v202E8CE = *(_WORD *)(8 * v202E8CC + 0x20391B8);
    sub_8100A60(*(_BYTE *)(8 * v202E8CC + 0x20391B4));
    v0 = 0;
    if ( (unsigned int)*v202E82C > 0 )
    {
      while ( 1 )
      {
        v1 = 24 * v0 + *(_DWORD *)(v202E82C + 4);
        if ( *(_WORD *)(v1 + 20) == v202E8CE )
          break;
        v0 = (v0 + 1) & 0xFFFF;
        if ( v0 >= *v202E82C )
          return v3;
      }
      v202E8D0 = *(_BYTE *)v1;
    }
  }
  return v3;
}
