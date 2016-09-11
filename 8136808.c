int sub_8136808()
{
  int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2039304 + 80);
  if ( *(_BYTE *)(v2039304 + 80) )
  {
    if ( v0 == 1 && !(v202F38F & 0x80) )
    {
      dword_3001778 = (int)sub_8136174;
      SetMainCallback2((int)sub_8147ADC);
    }
  }
  else
  {
    v2039310 = sub_81370A4(v20087DC);
    v2039308 = *(_DWORD *)(v2039304 + 4);
    v203930C = *(_DWORD *)(v2039304 + 8);
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v0);
    ++*(_BYTE *)(v2039304 + 80);
  }
  return v2;
}
