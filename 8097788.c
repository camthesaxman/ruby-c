int sub_8097788()
{
  __int16 v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = v2000004;
  if ( v2000004 )
  {
    if ( v2000004 == 1 && !(unsigned __int8)UpdatePaletteFade() )
    {
      v203847F = 0;
      v2000006 = 0;
      SetMainCallback2((int)sub_8096B5C);
    }
  }
  else
  {
    sub_809BC18();
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v0);
    ++v2000004;
  }
  return v2;
}
