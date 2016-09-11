int sub_80AACC4()
{
  int v1; // [sp+0h] [bp-4h]@0

  UpdatePaletteFade();
  if ( !(v202F38F & 0x80) )
  {
    sub_80AA69C();
    if ( !(v203869A & 1) )
      sub_80AE82C(v2000000);
    SetMainCallback2((int)sub_80AB47C);
  }
  return v1;
}
