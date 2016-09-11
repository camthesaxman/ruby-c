int sub_80F8FB4()
{
  unsigned __int16 v0; // r0@4
  int v2; // [sp+4h] [bp-4h]@0

  if ( !(UpdatePaletteFade() << 24) )
  {
    SetMainCallback2(v20000EC);
    if ( (signed int)v20000FB <= 2 && (signed int)v20000FB >= 1 )
    {
      v0 = sub_809D4A8(*(_WORD *)(v20000F4 + 30));
      sub_809D608(v0);
      sub_809D510();
    }
    memset(0x2000000, 0, 272);
    ResetPaletteFade();
  }
  return v2;
}
