int sub_80C82EC()
{
  unsigned int v0; // r3@1
  signed __int16 v2; // [sp+0h] [bp-14h]@1
  int v3; // [sp+10h] [bp-4h]@8

  GetXYCoordsOneStepInFrontOfPlayer(&v2, &v2 + 1);
  v0 = 0;
  do
  {
    if ( v2025739 == *(_BYTE *)(16 * v0 + 0x2038810)
      && *(_WORD *)(16 * v0 + 0x203880C) == v2
      && *(_WORD *)(16 * v0 + 0x203880E) == *(&v2 + 1) )
    {
      v202E8DC = v0;
      StringCopy(&gStringVar1, (&gUnknown_083F7EB8)[4 * *(_BYTE *)(16 * v0 + 0x2038814)]);
      return v3;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 9 );
  v202E8DC = -1;
  return v3;
}
