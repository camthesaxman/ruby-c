int TransferPlttBuffer()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !(v202F390 & 0x80) )
  {
    v40000D4 = 33746632;
    v40000D8 = 83886080;
    v40000DC = -2147483136;
    v202F398 = 0;
    if ( (v202F391 & 3) == 2 )
    {
      if ( v202F38F & 0x80 )
        UpdateBlendRegisters();
    }
  }
  return v1;
}
